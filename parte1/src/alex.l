/*****************************************************************************/
/**  Alex: PARTE 1                        2022-2023 <> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "asin.h"

#define  retornar(x) {if (verbosidad) ECHO; return x; }
%}
/*-----------------------------------------------------------------------------
  Estas opciones evitan "warnings" innecesarios y permiten obtener el
  numero de linea actual en la variable global "yylineno".
-----------------------------------------------------------------------------*/
%option noinput       
%option nounput       
%option yylineno  


delimitador    [\n]
blancos        [ \t]+
letra          [a-zA-Z] 
digito         [0-9]
entero         {digito}+
comentario      "//".*\n
identificativo  {letra}({letra}|{digito}|"_")* 
constante {entero}"."?|{entero}?"."{entero} 
%%


{delimitador}  { if (verbosidad)  ECHO; printf("  %d.- ",yylineno);}
";"      { retornar (PYC_); } 
{comentario}      { if (verbosidad) ECHO; printf("  %d.- ",yylineno); }  
{blancos}	  { if (verbosidad) ECHO; } 


"true"      { retornar (T_); } 
"false"      { retornar (F_); } 
"int"      { retornar (INT_); } 
"bool"      { retornar (BOOL_); } 
"return"      { retornar (RET_); } 
"read"      { retornar (READ_); } 
"print"      { retornar (PRT_); } 
"if"      { retornar (IF_); } 
"else"      { retornar (ELSE_); } 
"for"      { retornar (FOR_); } 


"+"	       { retornar (MAS_);   }
"-"            { retornar (MENOS_); }
"*"            { retornar (POR_);   }
"/"            { retornar (DIV_);   }
"&&"      { retornar (AND_); } 
"||"      { retornar (OR_); } 
"=="      { retornar (OPIG_); } 
"!="      { retornar (OPDESIG_); } 
">"      { retornar (OPMAY_); } 
"<"      { retornar (OPMEN_); } 
">="      { retornar (OPMAYIG_); } 
"<="      { retornar (OPMENIG_); } 
"!"      { retornar (EXC_); } 
"="      { retornar (OPASIG_); } 


"("            { retornar (APAR_);  }
")"            { retornar (CPAR_);  }
"{"      { retornar (ALLAV_); } 
"}"      { retornar (CLLAV_); } 
"["      { retornar (ACOR_); } 
"]"      { retornar (CCOR_); } 
","      { retornar (COMA_); } 
{identificativo}      { retornar (ID_); } 
{constante}       { retornar (CTE_);   }
.	       { yyerror("Caracter desconocido"); }

%%
/*****************************************************************************/
