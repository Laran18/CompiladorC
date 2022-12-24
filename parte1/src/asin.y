/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2022-2023 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
%}

/*Delimitadores*/
%token PYC_ COM_
/*Palabras reservadas*/
%token T_ F_ INT_ BOOL_ RET_ READ_ PRT_ IF_ ELSE_ FOR_
/*Operadores*/
%token MAS_ MENOS_ POR_ DIV_ AND_ OR_ OPIG_ OPDESIG_ OPMAY_ 
%token OPMEN_ OPMENIG_ OPMAYIG_ EXC_ OPASIG_ 

/*Marginados*/
%token APAR_ CPAR_ ALLAV_ CLLAV_ ACOR_ CCOR_ ID_ CTE_ COMA_


%%
programa : listDecla
       ;
listDecla    : decla
       | listDecla decla      
       ;
decla    : declaVar
       | declaFunc       
       ;
declaVar    : tipoSimp ID_ PYC_
       | tipoSimp ID_ OPASIG_ const PYC_
       | tipoSimp ID_ ACOR_ CTE_ CCOR_ PYC_ 
       ;
const    : CTE_
       | T_
       | F_
       ;
tipoSimp    : INT_
       | BOOL_     
       ;
declaFunc    : tipoSimp ID_ APAR_ paramForm CPAR_ bloque      
       ;
paramForm    : /*Cadena vacia*/
       | listParamForm       
       ;
listParamForm    : tipoSimp ID_ 
       | tipoSimp ID_ COMA_ listParamForm
       ;
bloque    : ALLAV_ declaVarLocal listInst RET_ expre PYC_ CLLAV_
       ;
declaVarLocal    : /*Cadena vacia*/
       | declaVarLocal declaVar
       ;
listInst    : /*Cadena vacia*/
       | listInst inst   
       ;
inst    : ALLAV_ listInst CLLAV_ 
       | instExpre 
       | instEntSal
       | instSelec
       | instIter     
       ;
instExpre    : expre PYC_
       | PYC_     
       ;
instEntSal    : READ_ APAR_ ID_ CPAR_ PYC_
       | PRT_ APAR_ expre CPAR_ PYC_
       ;
instSelec    : IF_ APAR_ expre CPAR_ inst ELSE_ inst       
       ;
instIter    : FOR_ APAR_ expreOp PYC_ expre PYC_ expreOp CPAR_ inst
       ;
expreOp    : /*Cadena vacia*/
       | expre       
       ;
expre    : expreLogic 
       | ID_ OPASIG_ expre
       | ID_ ACOR_ expre CCOR_ OPASIG_ expre
       ;
expreLogic    : expreIgual 
       | expreLogic opLogic expreIgual     
       ;
expreIgual    : expreRel 
       | expreIgual opIgual expreRel
       ;
expreRel    : expreAd 
       | expreRel opRel expreAd
       ;
expreAd    : expreMul
       | expreAd opAd expreMul
       ;
expreMul    : expreUna 
       | expreMul opMul expreUna
       ;
expreUna    : expreSufi 
       | opUna expreUna      
       ;
expreSufi    : const 
       | APAR_ expre CPAR_
       | ID_ 
       | ID_ ACOR_ expre CCOR_  
       | ID_ APAR_ paramAct CPAR_ 
       ;
paramAct    : /*Cadena vacia*/
       | listParamAct   
       ;
listParamAct    : expre 
       | expre COMA_ listParamAct
       ;
opLogic    : AND_
       | OR_       
       ;
opIgual    : OPIG_
       | OPDESIG_      
       ;
opRel    : OPMAY_
       | OPMEN_
       | OPMAYIG_
       | OPMENIG_         
       ;
opAd    : MAS_
       | MENOS_
       ;
opMul    : POR_
       | DIV_   
       ;
opUna    : MAS_
       | MENOS_
       | EXC_       
       ;





/*expMat : exp
       ;
exp    : exp MAS_   term
       | exp MENOS_ term
       | term         
       ;
term   : term POR_ fac
       | term DIV_ fac   
       | fac             
       ;
fac    : APAR_ exp CPAR_ 
       | CTE_            
       ;*/
%%
/*****************************************************************************/
