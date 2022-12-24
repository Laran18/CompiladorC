/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2022-2023 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h" 
%}


%union{
       int cent;
       char *ident;
       DOM dominio;
} 


/*Delimitadores*/
%token PYC_ COM_

/*Palabras reservadas*/
%token T_ F_ RET_ READ_ PRT_ IF_ ELSE_ FOR_ INT_ BOOL_

/*Operadores*/
%token MAS_ MENOS_ POR_ DIV_ AND_ OR_ OPIG_ OPDESIG_ OPMAY_ 
%token OPMEN_ OPMENIG_ OPMAYIG_ EXC_ OPASIG_ 

/*Marginados*/
%token APAR_ CPAR_ ALLAV_ CLLAV_ ACOR_ CCOR_ COMA_ 
%token<ident> ID_
%token<cent> CTE_

/*No terminales*/
%type<cent> tipoSimp const declaFunc expre expreSufi expreAd expreIgual
%type<cent> expreLogic expreOp expreRel expreUna expreMul
%type<cent> paramAct listParamAct opAd opIgual opLogic opMul opRel opUna
%type<cent> listDecla decla
%type<dominio> paramForm listParamForm


%%
programa: 
       { niv=0; dvar=0; cargaContexto(niv); } 
       
       listDecla  

       { 
         if(verTdS){ mostrarTdS(); } 
         if ($2==0) yyerror("El programa no tiene ningun main. ");
         else if ($2 > 1) yyerror("El programa tiene mas de un main. ");
       } 
              
       ;

/*****************************************************************************/

listDecla: 
       decla { $$=$1; } 
       
       | listDecla decla { $$=$1+$2; }  
       ;

/*****************************************************************************/

decla: 
       declaVar { $$=0; }        

       | declaFunc { $$=$1; }   
       ;

/*****************************************************************************/

declaVar: 
       tipoSimp ID_ PYC_ 
       { 
         if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)){
           yyerror("La variable ya está declarada. "); 
         } 
         else{ dvar += TALLA_TIPO_SIMPLE; } 
               
       } 

       | tipoSimp ID_ OPASIG_ const PYC_ 
       { 
         if ($1 != $4) {
           yyerror("Tipo del valor incorrecto. ");
         } 
         else if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)){
           yyerror("La variable ya está declarada. ");
         } 
         else { dvar += TALLA_TIPO_SIMPLE; } 
       } 
       

       | tipoSimp ID_ ACOR_ CTE_ CCOR_ PYC_      
       {
         int numelem = $4; 
         if (numelem<=0){
           yyerror("Talla del array incorrecta. ");
           numelem=0;
         } 
         int ref = insTdA($1, numelem);
         if (!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, ref)){
           yyerror("La variable ya está declarada. ");
         } 
         else{
           dvar += numelem * TALLA_TIPO_SIMPLE;
         } 
       } 
       ;

/*****************************************************************************/

const: 
       CTE_ { $$=T_ENTERO; } 

       | T_ { $$=T_LOGICO; }  

       | F_ { $$=T_LOGICO; } 
       ;

/*****************************************************************************/

tipoSimp: 
       INT_ { $$ = T_ENTERO; } 

       | BOOL_ { $$ = T_LOGICO; }     
       ;

/*****************************************************************************/

declaFunc: 
       tipoSimp ID_ { niv++; cargaContexto(niv); $<cent>$=dvar; dvar=0; }  

       APAR_ paramForm CPAR_ 
       {
         if(!insTdS($2, FUNCION, $1, niv-1, -1, $5.ref)){ 
           yyerror("La funcion ya está declarada con este nombre. ");
         } 
       } 
                     
       bloque      
       {      
         if (strcmp($2,"main\0")==0) $$=1; 
         else { $$=0; } ; 
         if(verTdS){ mostrarTdS(); }      
         descargaContexto(niv);
         niv--;
         dvar=$<cent>3;    
       }
       ;

/*****************************************************************************/

paramForm: 
       /*Cadena vacia*/
       {
         $$.ref = insTdD(-1, T_VACIO); 
         $$.talla=0;
       } 

       | listParamForm      
       {
         $$.ref=$1.ref;
         $$.talla=$1.talla; 
       } 
       ;

/*****************************************************************************/

listParamForm:
       tipoSimp ID_  
       {
         $$.ref=insTdD(-1, $1); 
         $$.talla= TALLA_TIPO_SIMPLE + TALLA_SEGENLACES; 
         if (!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1)){    
           yyerror("Ya existe un parametro con este identificador. ");
         } 
       } 

       | tipoSimp ID_ COMA_ listParamForm
       {
         $$.ref=insTdD($4.ref, $1);   
         $$.talla = $4.talla + TALLA_TIPO_SIMPLE;
         if (!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1)){
           yyerror("Ya existe un parametro con este identificador. ");
         } 
       } 
       ;

/*****************************************************************************/

bloque: 
       ALLAV_ declaVarLocal listInst RET_ expre PYC_ 
       {        
         INF inf = obtTdD(-1);
         if (inf.tipo == T_ERROR) yyerror("En la declaracion de la funcion"); 
         else if (inf.tipo != $5) { 
           yyerror("El tipo del return no coincide con el rango de la funcion"); 
         } 
       } 
       
       CLLAV_      
       ;

/*****************************************************************************/

declaVarLocal: 
       /*Cadena vacia*/

       | declaVarLocal declaVar
       ;

/*****************************************************************************/

listInst: 
       /*Cadena vacia*/

       | listInst inst   
       ;

/*****************************************************************************/

inst: 
       ALLAV_ listInst CLLAV_ 

       | instExpre 

       | instEntSal

       | instSelec

       | instIter     
       ;

/*****************************************************************************/

instExpre: 
       expre PYC_

       | PYC_     
       ;

/*****************************************************************************/

instEntSal: 
       READ_ APAR_ ID_ CPAR_ PYC_  
       { 
         SIMB sim = obtTdS($3);
         if (sim.t == T_ERROR) yyerror("Variable no declarada. ");
         else if(sim.t != T_ENTERO) {
           yyerror("El identificador ha de ser de tipo entero. ");
         } 
       } 

       | PRT_ APAR_ expre CPAR_ PYC_
       {
         if ($3 != T_ENTERO && $3 != T_ERROR) { 
           yyerror("La expresion tiene que ser de tipo entero. ");
         } 
       } 
       ;

/*****************************************************************************/

instSelec: 
       IF_ APAR_ expre CPAR_ 
       {
         if ($3!=T_ERROR){ 
           if ($3!=T_LOGICO) { 
             yyerror("La condicion tiene que ser de tipo logico. ");
           } 
         } 
       } 

       inst ELSE_ inst          
       ;

/*****************************************************************************/

instIter: 
       FOR_ APAR_ expreOp PYC_ expre PYC_ expreOp CPAR_ 
       {
         if ($3 != T_ERROR && $5 != T_ERROR && $7 != T_ERROR){ 
           if ($3 != T_VACIO && $3 != T_ENTERO && $3 != T_LOGICO) { 
             yyerror("Las expresiones opcionales han de ser de tipo simple. ");
           } 
           else if ($7 != T_VACIO && $7 != T_ENTERO && $7 != T_LOGICO) {
             yyerror("Las expresiones opcionales han de ser de tipo simple. ");
           } 
           else if ($5!=T_LOGICO) yyerror("La condicion no es de tipo logico. ");
         } 
       } 

       inst 
             
       ;

/*****************************************************************************/

expreOp: 
       /*Cadena vacia*/ { $$=T_VACIO; } 

       | expre { $$=$1; }   
       ;

/*****************************************************************************/

expre: 
       expreLogic { $$=$1; } 

       | ID_ OPASIG_ expre        
       {
         $$=T_ERROR;
         SIMB sim = obtTdS($1);
         if (sim.t == T_ERROR) yyerror("Objeto no declarado. ");
         else if(!($3==T_ERROR)){
           //ID y expre han de tener el mismo tipo y ha de ser logico o entero
           if (! (((sim.t == T_ENTERO) && ($3 == T_ENTERO)) || 
             ((sim.t==T_LOGICO) && ($3==T_LOGICO)))){
             yyerror("Error de tipos en la 'instruccion de asignacion'. ");
           } 
           else{$$=sim.t;} 
         } 
       } 

       | ID_ ACOR_ expre CCOR_ OPASIG_ expre   
       {
         $$=T_ERROR;
         SIMB sim = obtTdS($1);
         if (sim.t == T_ERROR) yyerror("Objeto no declarado. ");
         else if ($6!=T_ERROR){
           DIM dim = obtTdA(sim.ref);
           if (dim.telem==T_ERROR) yyerror("El objeto no es un array. ");

           //Lo que hay entre corchetes no es un entero
           else if ($3 != T_ENTERO) yyerror("El indice del array tiene que ser un entero. "); 

           //El tipo de los elementos del array no coincide con la expresion
           else if (dim.telem != $6) {
              yyerror("Incompatibilidad de tipos entre el tipo del array y la expresion. ");
           } 
           else { $$=dim.telem; }  
              } 
       } 
       ;

/*****************************************************************************/

expreLogic: 
       expreIgual { $$=$1; } 

       | expreLogic opLogic expreIgual    
       {
         $$=T_ERROR;
         if (!($1==T_ERROR || $3==T_ERROR)) {

           //Las dos expresiones tienen que ser de tipo logico
           if ($1==T_LOGICO && $3==T_LOGICO) $$=T_LOGICO;
           else{ 
             yyerror("Los operadores logicos tienen que realizarse con expresiones logicas. ");
           } 
         } 
       } 
       ;

/*****************************************************************************/

expreIgual: 
       expreRel { $$=$1; } 

       | expreIgual opIgual expreRel 
       {
         $$=T_ERROR;
         if (!($1==T_ERROR || $3==T_ERROR)) {
           //Las dos expresiones que se quieren comparar tienen que ser del mismo tipo 
           if ($1 != $3) yyerror("Los tipos de las expresiones no coinciden. ");

           //y tienen que ser del tipo logico o entero
           else if ($1 == T_LOGICO || $1 == T_ENTERO) $$=T_LOGICO;
           else {yyerror("Incompatibilidad de tipos. ");} 
         } 
       } 
       ;

/*****************************************************************************/

expreRel: 
       expreAd { $$=$1; } 

       | expreRel opRel expreAd  
       {
         $$=T_ERROR;
         if (!($1==T_ERROR || $3==T_ERROR)) {
           //Las dos expresiones tienen que ser del tipo entero
           if ($1==T_ENTERO && $3==T_ENTERO) $$=T_LOGICO;
           else {
             yyerror("Las operaciones de desigualdad han de realizarse con enteros. ");
           } 
         } 
       } 
       ;

/*****************************************************************************/

expreAd: 
       expreMul { $$=$1; } 

       | expreAd opAd expreMul
       {
         $$=T_ERROR;
         if(!($1 == T_ERROR || $3 == T_ERROR)) {
           //Las dos expresiones tienen que ser de tipo entero
           if ($1 == T_ENTERO && $3 == T_ENTERO) $$=T_ENTERO;
           else { yyerror("Las sumas y restas se tienen que hacer con enteros. "); } 
         } 
       } 
       ;

/*****************************************************************************/

expreMul: 
       expreUna { $$=$1; } 

       | expreMul opMul expreUna //a * 6 + 5??
       {
         $$=T_ERROR;
         if (!($1==T_ERROR || $3==T_ERROR)) {
           //Las dos expresiones tienen que ser de tipo entero
           if ($1==T_ENTERO && $3==T_ENTERO) $$=T_ENTERO;
           else { 
             yyerror("Las operaciones de multiplicacion y division se tienen que hacer con enteros. "); 
           } 
         } 
       } 
       ;

/*****************************************************************************/

expreUna: 
       expreSufi { $$=$1; } 

       | opUna expreUna   
       {
         $$=T_ERROR;
         if ($2 != T_ERROR){
           //Si la expresion es de tipo entero el operador no puede ser la negacion
           if ($2 == T_ENTERO){
             if ($1==OP_EXC) yyerror("Operacion no permitida en enteros. "); 
             else { $$=T_ENTERO; } 
           } 

           //Si es de tipo logico el operador no puede ser suma o resta
           else if ($2 == T_LOGICO){
             if ($1==OP_MAS || $1==OP_MENOS) yyerror("Operacion no permitida en booleanos. ");
             else { $$=T_LOGICO; } 
           } 
         } 
       } 
       ;

/*****************************************************************************/

expreSufi: 
       const { $$=$1; } 

       | APAR_ expre CPAR_ { $$=$2; } 

       | ID_ 
       {
         SIMB sim = obtTdS($1);
         $$=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else{$$=sim.t;} 
       } 

       | ID_ ACOR_ expre CCOR_  
       {
         SIMB sim = obtTdS($1);
         $$=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else if(!(sim.t==T_ARRAY)) yyerror("La variable no es un array. ");
         else if (!($3 == T_ENTERO)) yyerror("Valor de indice incorrecto. ");
         else {
           DIM dim = obtTdA(sim.ref);
           $$=dim.telem;
         } 
       } 

       | ID_ APAR_ paramAct CPAR_ 
       {
         SIMB sim = obtTdS($1);
         $$=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else { 
           INF inf = obtTdD(sim.ref);
           if (inf.tipo == T_ERROR) yyerror("La variable debe de ser una funcion. ");
           else if (!(cmpDom(sim.ref, $3))) yyerror("En el dominio de los parametros actuales");
           else { $$=inf.tipo; } 
         } 
       } 
       ;

/*****************************************************************************/

paramAct: 
       /*Cadena vacia*/ { $$ = insTdD(-1, T_VACIO); } 

       | listParamAct { $$=$1; } 
       ;

/*****************************************************************************/

listParamAct: 
       expre { $$=insTdD(-1, $1); } 

       | expre COMA_ listParamAct { $$=insTdD($3, $1); } 
       ;

/*****************************************************************************/

opLogic: 
       AND_ { $$=OP_AND; }

       | OR_ { $$=OP_OR; }  
       ;

/*****************************************************************************/

opIgual: 
       OPIG_ { $$=OP_IG; }

       | OPDESIG_ { $$=OP_DESIG; }
       ;

/*****************************************************************************/

opRel: 
       OPMAY_ { $$=OP_MAY; }

       | OPMEN_ { $$=OP_MEN; }

       | OPMAYIG_ { $$=OP_MAY_IG; }

       | OPMENIG_ { $$=OP_MEN_IG; }
       ;

/*****************************************************************************/

opAd: 
       MAS_ { $$=OP_MAS; }

       | MENOS_ { $$=OP_MENOS; } 
       ;

/*****************************************************************************/

opMul: 
       POR_ { $$=OP_POR; } 

       | DIV_ { $$=OP_DIV; } 
       ;

/*****************************************************************************/

opUna: 
       MAS_ { $$=OP_MAS; } 

       | MENOS_ { $$=OP_MENOS; } 

       | EXC_ { $$=OP_EXC; } 
       ;

%%
/*****************************************************************************/
