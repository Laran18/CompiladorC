/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PYC_ = 258,
    COM_ = 259,
    T_ = 260,
    F_ = 261,
    RET_ = 262,
    READ_ = 263,
    PRT_ = 264,
    IF_ = 265,
    ELSE_ = 266,
    FOR_ = 267,
    INT_ = 268,
    BOOL_ = 269,
    MAS_ = 270,
    MENOS_ = 271,
    POR_ = 272,
    DIV_ = 273,
    AND_ = 274,
    OR_ = 275,
    OPIG_ = 276,
    OPDESIG_ = 277,
    OPMAY_ = 278,
    OPMEN_ = 279,
    OPMENIG_ = 280,
    OPMAYIG_ = 281,
    EXC_ = 282,
    OPASIG_ = 283,
    APAR_ = 284,
    CPAR_ = 285,
    ALLAV_ = 286,
    CLLAV_ = 287,
    ACOR_ = 288,
    CCOR_ = 289,
    COMA_ = 290,
    ID_ = 291,
    CTE_ = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "src/asin.y"

       int cent;
       char *ident;
       DOM dominio;

#line 101 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
