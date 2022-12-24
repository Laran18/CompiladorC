/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras donde situar las           **/
/** definiciones de constantes, variables y estructuras para MenosC. Los    **/
/** alumnos deberan adaptarlo al desarrollo de su propio compilador.    **/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0

/**********************************************************************Tallas*/
#define TALLA_TIPO_SIMPLE 1
#define TALLA_SEGENLACES 2  

/******************************************************************Operadores*/
#define OP_AND 0
#define OP_OR 1
#define OP_IG 2
#define OP_DESIG 3
#define OP_MAY 4
#define OP_MEN 5
#define OP_MAY_IG 6
#define OP_MEN_IG 7
#define OP_MAS 8
#define OP_MENOS 9
#define OP_POR 10
#define OP_DIV 11
#define OP_EXC 12

extern int dvar;
extern int niv;
extern int nummain;

extern int verTdS;

typedef struct dom{
    int ref;
    int talla;
} DOM;

/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;                           /* Fichero de entrada           */
extern int   yylineno;                       /* Contador del numero de linea */
extern char *yytext;                         /* Patron detectado             */
/********* Funciones y variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;                   /* Flag si se desea una traza       */
extern int numErrores;              /* Contador del numero de errores        */

#endif  /* _HEADER_H */
/*****************************************************************************/
