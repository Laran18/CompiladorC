/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h" 

#line 77 "asin.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 173 "asin.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    44,    59,    61,    67,    69,    75,    84,
      96,   116,   118,   120,   126,   128,   134,   137,   134,   158,
     163,   173,   182,   196,   195,   209,   212,   217,   220,   226,
     228,   230,   232,   234,   240,   242,   248,   257,   269,   268,
     284,   283,   303,   305,   311,   313,   328,   352,   354,   371,
     373,   390,   392,   408,   410,   424,   426,   442,   444,   466,
     468,   470,   478,   491,   508,   510,   516,   518,   524,   526,
     532,   534,   540,   542,   544,   546,   552,   554,   560,   562,
     568,   570,   572
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PYC_", "COM_", "T_", "F_", "RET_",
  "READ_", "PRT_", "IF_", "ELSE_", "FOR_", "INT_", "BOOL_", "MAS_",
  "MENOS_", "POR_", "DIV_", "AND_", "OR_", "OPIG_", "OPDESIG_", "OPMAY_",
  "OPMEN_", "OPMENIG_", "OPMAYIG_", "EXC_", "OPASIG_", "APAR_", "CPAR_",
  "ALLAV_", "CLLAV_", "ACOR_", "CCOR_", "COMA_", "ID_", "CTE_", "$accept",
  "programa", "$@1", "listDecla", "decla", "declaVar", "const", "tipoSimp",
  "declaFunc", "@2", "$@3", "paramForm", "listParamForm", "bloque", "$@4",
  "declaVarLocal", "listInst", "inst", "instExpre", "instEntSal",
  "instSelec", "$@5", "instIter", "$@6", "expreOp", "expre", "expreLogic",
  "expreIgual", "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi",
  "paramAct", "listParamAct", "opLogic", "opIgual", "opRel", "opAd",
  "opMul", "opUna", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -73,    11,    -4,   -73,   -73,   -73,    -4,   -73,   -73,   -16,
     -73,   -73,    -2,   -73,     0,   -14,    15,   -73,   -73,   -73,
      47,    19,    -4,   -73,    60,    28,    38,   -73,   -73,    35,
     -73,    -4,    40,   -73,   -73,   -73,    -4,   -73,    36,     9,
      -2,   -73,   103,    52,    59,    68,    70,   -73,   -73,   -73,
     103,   -73,   -26,   -73,   -73,   -73,   -73,   -73,   -73,    73,
      22,    26,    61,    44,    49,   -73,   -73,   119,    97,    67,
     103,   103,   103,    74,    46,   103,   103,   103,   -73,   -73,
     -73,   119,   -73,   -73,   119,   -73,   -73,   -73,   -73,   119,
     -73,   -73,   119,   -73,   -73,   119,    10,   -73,   -73,    75,
      76,    77,   107,   -73,   -73,   -73,   -73,    79,    81,   -73,
      78,    26,    61,    44,    49,   -73,   103,    84,   117,   118,
     -73,   103,   103,   -73,    98,    93,   -73,   -73,   -73,    86,
     125,   -73,   103,   -73,   120,   103,   -73,    86,    99,   -73,
     -73,    86,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     8,     0,     0,     0,    12,    13,    11,
       0,     0,    19,     9,     0,     0,     0,    20,    10,    21,
      17,     0,     0,    22,    25,    18,    27,    26,     0,     0,
       0,    35,     0,     0,     0,     0,     0,    80,    81,    82,
       0,    27,    61,    59,    28,    30,    31,    32,    33,     0,
      44,    47,    49,    51,    53,    55,    57,     0,     0,     0,
       0,     0,    42,     0,     0,     0,    64,     0,    34,    68,
      69,     0,    70,    71,     0,    72,    73,    75,    74,     0,
      76,    77,     0,    78,    79,     0,    61,    58,    23,     0,
       0,     0,     0,    43,    60,    29,    45,    66,     0,    65,
       0,    48,    50,    52,    54,    56,     0,     0,     0,     0,
      38,     0,     0,    63,    62,     0,    24,    36,    37,     0,
       0,    67,     0,    62,     0,    42,    46,     0,     0,    39,
      40,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -73,   127,   100,   123,    -9,   -73,   -73,
     -73,   -73,   110,   -73,   -73,   -73,    87,   -72,   -73,   -73,
     -73,   -73,   -73,   -73,     7,   -42,   -73,    62,    63,    55,
      53,   -63,   -73,   -73,    27,   -73,   -73,   -73,   -73,   -73,
     -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    53,     9,    10,    16,
      32,    26,    27,    35,   117,    36,    39,    54,    55,    56,
      57,   129,    58,   141,   102,    59,    60,    61,    62,    63,
      64,    65,    66,   108,   109,    81,    84,    89,    92,    95,
      67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    13,    75,    76,    97,    17,    18,    77,    73,     4,
       5,     3,    41,    25,    17,    18,    42,    43,    44,    45,
      12,    46,    25,    21,    47,    48,    14,    38,   100,   101,
     103,    15,   115,   106,   107,   110,    49,    19,    50,    76,
      51,    79,    80,   116,    22,    52,    19,    82,    83,    41,
      23,    17,    18,    24,    43,    44,    45,   134,    46,    90,
      91,    47,    48,    28,    29,   139,    93,    94,    30,   142,
      31,    34,    40,    49,   125,    50,    78,    51,   105,   130,
     107,    69,    52,    19,    85,    86,    87,    88,    70,    41,
     136,    17,    18,   103,    43,    44,    45,    71,    46,    72,
      98,    47,    48,    99,   104,   118,   119,   120,    17,    18,
     121,   123,   124,    49,   122,    50,   126,    51,    47,    48,
     127,   128,    52,    19,    17,    18,   132,   133,   135,   140,
      49,   137,    50,    11,    47,    48,    37,    20,    74,    52,
      19,    33,   138,   111,   113,   114,    49,   112,    50,   131,
       0,     0,     0,     0,     0,    96,    19
};

static const yytype_int16 yycheck[] =
{
      42,     3,    28,    29,    67,     5,     6,    33,    50,    13,
      14,     0,     3,    22,     5,     6,     7,     8,     9,    10,
      36,    12,    31,    37,    15,    16,    28,    36,    70,    71,
      72,    33,    95,    75,    76,    77,    27,    37,    29,    29,
      31,    19,    20,    33,    29,    36,    37,    21,    22,     3,
       3,     5,     6,    34,     8,     9,    10,   129,    12,    15,
      16,    15,    16,     3,    36,   137,    17,    18,    30,   141,
      35,    31,    36,    27,   116,    29,     3,    31,    32,   121,
     122,    29,    36,    37,    23,    24,    25,    26,    29,     3,
     132,     5,     6,   135,     8,     9,    10,    29,    12,    29,
       3,    15,    16,    36,    30,    30,    30,    30,     5,     6,
       3,    30,    34,    27,    35,    29,    32,    31,    15,    16,
       3,     3,    36,    37,     5,     6,    28,    34,     3,    30,
      27,    11,    29,     6,    15,    16,    36,    14,    51,    36,
      37,    31,   135,    81,    89,    92,    27,    84,    29,   122,
      -1,    -1,    -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,    13,    14,    41,    42,    43,    45,
      46,    42,    36,     3,    28,    33,    47,     5,     6,    37,
      44,    37,    29,     3,    34,    45,    49,    50,     3,    36,
      30,    35,    48,    50,    31,    51,    53,    43,    45,    54,
      36,     3,     7,     8,     9,    10,    12,    15,    16,    27,
      29,    31,    36,    44,    55,    56,    57,    58,    60,    63,
      64,    65,    66,    67,    68,    69,    70,    78,    63,    29,
      29,    29,    29,    63,    54,    28,    29,    33,     3,    19,
      20,    73,    21,    22,    74,    23,    24,    25,    26,    75,
      15,    16,    76,    17,    18,    77,    36,    69,     3,    36,
      63,    63,    62,    63,    30,    32,    63,    63,    71,    72,
      63,    65,    66,    67,    68,    69,    33,    52,    30,    30,
      30,     3,    35,    30,    34,    63,    32,     3,     3,    59,
      63,    72,    28,    34,    55,     3,    63,    11,    62,    55,
      30,    61,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    41,    42,    42,    43,    43,
      43,    44,    44,    44,    45,    45,    47,    48,    46,    49,
      49,    50,    50,    52,    51,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    59,    58,
      61,    60,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     0,     8,     0,     2,     0,     2,     3,
       1,     1,     1,     1,     2,     1,     5,     5,     0,     8,
       0,    10,     0,     1,     1,     3,     6,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     4,     4,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 44 "src/asin.y"
       { niv=0; dvar=0; cargaContexto(niv); }
#line 1456 "asin.c"
    break;

  case 3:
#line 48 "src/asin.y"
       { 
         if(verTdS){ mostrarTdS(); } 
         if ((yyvsp[0].cent)==0) yyerror("El programa no tiene ningun main. ");
         else if ((yyvsp[0].cent) > 1) yyerror("El programa tiene mas de un main. ");
       }
#line 1466 "asin.c"
    break;

  case 4:
#line 59 "src/asin.y"
             { (yyval.cent)=(yyvsp[0].cent); }
#line 1472 "asin.c"
    break;

  case 5:
#line 61 "src/asin.y"
                         { (yyval.cent)=(yyvsp[-1].cent)+(yyvsp[0].cent); }
#line 1478 "asin.c"
    break;

  case 6:
#line 67 "src/asin.y"
                { (yyval.cent)=0; }
#line 1484 "asin.c"
    break;

  case 7:
#line 69 "src/asin.y"
                   { (yyval.cent)=(yyvsp[0].cent); }
#line 1490 "asin.c"
    break;

  case 8:
#line 76 "src/asin.y"
       { 
         if (!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)){
           yyerror("La variable ya está declarada. "); 
         } 
         else{ dvar += TALLA_TIPO_SIMPLE; } 
               
       }
#line 1502 "asin.c"
    break;

  case 9:
#line 85 "src/asin.y"
       { 
         if ((yyvsp[-4].cent) != (yyvsp[-1].cent)) {
           yyerror("Tipo del valor incorrecto. ");
         } 
         else if (!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)){
           yyerror("La variable ya está declarada. ");
         } 
         else { dvar += TALLA_TIPO_SIMPLE; } 
       }
#line 1516 "asin.c"
    break;

  case 10:
#line 97 "src/asin.y"
       {
         int numelem = (yyvsp[-2].cent); 
         if (numelem<=0){
           yyerror("Talla del array incorrecta. ");
           numelem=0;
         } 
         int ref = insTdA((yyvsp[-5].cent), numelem);
         if (!insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, ref)){
           yyerror("La variable ya está declarada. ");
         } 
         else{
           dvar += numelem * TALLA_TIPO_SIMPLE;
         } 
       }
#line 1535 "asin.c"
    break;

  case 11:
#line 116 "src/asin.y"
            { (yyval.cent)=T_ENTERO; }
#line 1541 "asin.c"
    break;

  case 12:
#line 118 "src/asin.y"
            { (yyval.cent)=T_LOGICO; }
#line 1547 "asin.c"
    break;

  case 13:
#line 120 "src/asin.y"
            { (yyval.cent)=T_LOGICO; }
#line 1553 "asin.c"
    break;

  case 14:
#line 126 "src/asin.y"
            { (yyval.cent) = T_ENTERO; }
#line 1559 "asin.c"
    break;

  case 15:
#line 128 "src/asin.y"
               { (yyval.cent) = T_LOGICO; }
#line 1565 "asin.c"
    break;

  case 16:
#line 134 "src/asin.y"
                    { niv++; cargaContexto(niv); (yyval.cent)=dvar; dvar=0; }
#line 1571 "asin.c"
    break;

  case 17:
#line 137 "src/asin.y"
       {
         if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv-1, -1, (yyvsp[-1].dominio).ref)){ 
           yyerror("La funcion ya está declarada con este nombre. ");
         } 
       }
#line 1581 "asin.c"
    break;

  case 18:
#line 144 "src/asin.y"
       {      
         if (strcmp((yyvsp[-6].ident),"main\0")==0) (yyval.cent)=1; 
         else { (yyval.cent)=0; } ; 
         if(verTdS){ mostrarTdS(); }      
         descargaContexto(niv);
         niv--;
         dvar=(yyvsp[-5].cent);    
       }
#line 1594 "asin.c"
    break;

  case 19:
#line 158 "src/asin.y"
       {
         (yyval.dominio).ref = insTdD(-1, T_VACIO); 
         (yyval.dominio).talla=0;
       }
#line 1603 "asin.c"
    break;

  case 20:
#line 164 "src/asin.y"
       {
         (yyval.dominio).ref=(yyvsp[0].dominio).ref;
         (yyval.dominio).talla=(yyvsp[0].dominio).talla; 
       }
#line 1612 "asin.c"
    break;

  case 21:
#line 174 "src/asin.y"
       {
         (yyval.dominio).ref=insTdD(-1, (yyvsp[-1].cent)); 
         (yyval.dominio).talla= TALLA_TIPO_SIMPLE + TALLA_SEGENLACES; 
         if (!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, -(yyval.dominio).talla, -1)){    
           yyerror("Ya existe un parametro con este identificador. ");
         } 
       }
#line 1624 "asin.c"
    break;

  case 22:
#line 183 "src/asin.y"
       {
         (yyval.dominio).ref=insTdD((yyvsp[0].dominio).ref, (yyvsp[-3].cent));   
         (yyval.dominio).talla = (yyvsp[0].dominio).talla + TALLA_TIPO_SIMPLE;
         if (!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, -(yyval.dominio).talla, -1)){
           yyerror("Ya existe un parametro con este identificador. ");
         } 
       }
#line 1636 "asin.c"
    break;

  case 23:
#line 196 "src/asin.y"
       {        
         INF inf = obtTdD(-1);
         if (inf.tipo == T_ERROR) yyerror("En la declaracion de la funcion"); 
         else if (inf.tipo != (yyvsp[-1].cent)) { 
           yyerror("El tipo del return no coincide con el rango de la funcion"); 
         } 
       }
#line 1648 "asin.c"
    break;

  case 36:
#line 249 "src/asin.y"
       { 
         SIMB sim = obtTdS((yyvsp[-2].ident));
         if (sim.t == T_ERROR) yyerror("Variable no declarada. ");
         else if(sim.t != T_ENTERO) {
           yyerror("El identificador ha de ser de tipo entero. ");
         } 
       }
#line 1660 "asin.c"
    break;

  case 37:
#line 258 "src/asin.y"
       {
         if ((yyvsp[-2].cent) != T_ENTERO && (yyvsp[-2].cent) != T_ERROR) { 
           yyerror("La expresion tiene que ser de tipo entero. ");
         } 
       }
#line 1670 "asin.c"
    break;

  case 38:
#line 269 "src/asin.y"
       {
         if ((yyvsp[-1].cent)!=T_ERROR){ 
           if ((yyvsp[-1].cent)!=T_LOGICO) { 
             yyerror("La condicion tiene que ser de tipo logico. ");
           } 
         } 
       }
#line 1682 "asin.c"
    break;

  case 40:
#line 284 "src/asin.y"
       {
         if ((yyvsp[-5].cent) != T_ERROR && (yyvsp[-3].cent) != T_ERROR && (yyvsp[-1].cent) != T_ERROR){ 
           if ((yyvsp[-5].cent) != T_VACIO && (yyvsp[-5].cent) != T_ENTERO && (yyvsp[-5].cent) != T_LOGICO) { 
             yyerror("Las expresiones opcionales han de ser de tipo simple. ");
           } 
           else if ((yyvsp[-1].cent) != T_VACIO && (yyvsp[-1].cent) != T_ENTERO && (yyvsp[-1].cent) != T_LOGICO) {
             yyerror("Las expresiones opcionales han de ser de tipo simple. ");
           } 
           else if ((yyvsp[-3].cent)!=T_LOGICO) yyerror("La condicion no es de tipo logico. ");
         } 
       }
#line 1698 "asin.c"
    break;

  case 42:
#line 303 "src/asin.y"
                        { (yyval.cent)=T_VACIO; }
#line 1704 "asin.c"
    break;

  case 43:
#line 305 "src/asin.y"
               { (yyval.cent)=(yyvsp[0].cent); }
#line 1710 "asin.c"
    break;

  case 44:
#line 311 "src/asin.y"
                  { (yyval.cent)=(yyvsp[0].cent); }
#line 1716 "asin.c"
    break;

  case 45:
#line 314 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         SIMB sim = obtTdS((yyvsp[-2].ident));
         if (sim.t == T_ERROR) yyerror("Objeto no declarado. ");
         else if(!((yyvsp[0].cent)==T_ERROR)){
           //ID y expre han de tener el mismo tipo y ha de ser logico o entero
           if (! (((sim.t == T_ENTERO) && ((yyvsp[0].cent) == T_ENTERO)) || 
             ((sim.t==T_LOGICO) && ((yyvsp[0].cent)==T_LOGICO)))){
             yyerror("Error de tipos en la 'instruccion de asignacion'. ");
           } 
           else{(yyval.cent)=sim.t;} 
         } 
       }
#line 1734 "asin.c"
    break;

  case 46:
#line 329 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         SIMB sim = obtTdS((yyvsp[-5].ident));
         if (sim.t == T_ERROR) yyerror("Objeto no declarado. ");
         else if ((yyvsp[0].cent)!=T_ERROR){
           DIM dim = obtTdA(sim.ref);
           if (dim.telem==T_ERROR) yyerror("El objeto no es un array. ");

           //Lo que hay entre corchetes no es un entero
           else if ((yyvsp[-3].cent) != T_ENTERO) yyerror("El indice del array tiene que ser un entero. "); 

           //El tipo de los elementos del array no coincide con la expresion
           else if (dim.telem != (yyvsp[0].cent)) {
              yyerror("Incompatibilidad de tipos entre el tipo del array y la expresion. ");
           } 
           else { (yyval.cent)=dim.telem; }  
              } 
       }
#line 1757 "asin.c"
    break;

  case 47:
#line 352 "src/asin.y"
                  { (yyval.cent)=(yyvsp[0].cent); }
#line 1763 "asin.c"
    break;

  case 48:
#line 355 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if (!((yyvsp[-2].cent)==T_ERROR || (yyvsp[0].cent)==T_ERROR)) {

           //Las dos expresiones tienen que ser de tipo logico
           if ((yyvsp[-2].cent)==T_LOGICO && (yyvsp[0].cent)==T_LOGICO) (yyval.cent)=T_LOGICO;
           else{ 
             yyerror("Los operadores logicos tienen que realizarse con expresiones logicas. ");
           } 
         } 
       }
#line 1779 "asin.c"
    break;

  case 49:
#line 371 "src/asin.y"
                { (yyval.cent)=(yyvsp[0].cent); }
#line 1785 "asin.c"
    break;

  case 50:
#line 374 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if (!((yyvsp[-2].cent)==T_ERROR || (yyvsp[0].cent)==T_ERROR)) {
           //Las dos expresiones que se quieren comparar tienen que ser del mismo tipo 
           if ((yyvsp[-2].cent) != (yyvsp[0].cent)) yyerror("Los tipos de las expresiones no coinciden. ");

           //y tienen que ser del tipo logico o entero
           else if ((yyvsp[-2].cent) == T_LOGICO || (yyvsp[-2].cent) == T_ENTERO) (yyval.cent)=T_LOGICO;
           else {yyerror("Incompatibilidad de tipos. ");} 
         } 
       }
#line 1801 "asin.c"
    break;

  case 51:
#line 390 "src/asin.y"
               { (yyval.cent)=(yyvsp[0].cent); }
#line 1807 "asin.c"
    break;

  case 52:
#line 393 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if (!((yyvsp[-2].cent)==T_ERROR || (yyvsp[0].cent)==T_ERROR)) {
           //Las dos expresiones tienen que ser del tipo entero
           if ((yyvsp[-2].cent)==T_ENTERO && (yyvsp[0].cent)==T_ENTERO) (yyval.cent)=T_LOGICO;
           else {
             yyerror("Las operaciones de desigualdad han de realizarse con enteros. ");
           } 
         } 
       }
#line 1822 "asin.c"
    break;

  case 53:
#line 408 "src/asin.y"
                { (yyval.cent)=(yyvsp[0].cent); }
#line 1828 "asin.c"
    break;

  case 54:
#line 411 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if(!((yyvsp[-2].cent) == T_ERROR || (yyvsp[0].cent) == T_ERROR)) {
           //Las dos expresiones tienen que ser de tipo entero
           if ((yyvsp[-2].cent) == T_ENTERO && (yyvsp[0].cent) == T_ENTERO) (yyval.cent)=T_ENTERO;
           else { yyerror("Las sumas y restas se tienen que hacer con enteros. "); } 
         } 
       }
#line 1841 "asin.c"
    break;

  case 55:
#line 424 "src/asin.y"
                { (yyval.cent)=(yyvsp[0].cent); }
#line 1847 "asin.c"
    break;

  case 56:
#line 427 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if (!((yyvsp[-2].cent)==T_ERROR || (yyvsp[0].cent)==T_ERROR)) {
           //Las dos expresiones tienen que ser de tipo entero
           if ((yyvsp[-2].cent)==T_ENTERO && (yyvsp[0].cent)==T_ENTERO) (yyval.cent)=T_ENTERO;
           else { 
             yyerror("Las operaciones de multiplicacion y division se tienen que hacer con enteros. "); 
           } 
         } 
       }
#line 1862 "asin.c"
    break;

  case 57:
#line 442 "src/asin.y"
                 { (yyval.cent)=(yyvsp[0].cent); }
#line 1868 "asin.c"
    break;

  case 58:
#line 445 "src/asin.y"
       {
         (yyval.cent)=T_ERROR;
         if ((yyvsp[0].cent) != T_ERROR){
           //Si la expresion es de tipo entero el operador no puede ser la negacion
           if ((yyvsp[0].cent) == T_ENTERO){
             if ((yyvsp[-1].cent)==OP_EXC) yyerror("Operacion no permitida en enteros. "); 
             else { (yyval.cent)=T_ENTERO; } 
           } 

           //Si es de tipo logico el operador no puede ser suma o resta
           else if ((yyvsp[0].cent) == T_LOGICO){
             if ((yyvsp[-1].cent)==OP_MAS || (yyvsp[-1].cent)==OP_MENOS) yyerror("Operacion no permitida en booleanos. ");
             else { (yyval.cent)=T_LOGICO; } 
           } 
         } 
       }
#line 1889 "asin.c"
    break;

  case 59:
#line 466 "src/asin.y"
             { (yyval.cent)=(yyvsp[0].cent); }
#line 1895 "asin.c"
    break;

  case 60:
#line 468 "src/asin.y"
                           { (yyval.cent)=(yyvsp[-1].cent); }
#line 1901 "asin.c"
    break;

  case 61:
#line 471 "src/asin.y"
       {
         SIMB sim = obtTdS((yyvsp[0].ident));
         (yyval.cent)=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else{(yyval.cent)=sim.t;} 
       }
#line 1912 "asin.c"
    break;

  case 62:
#line 479 "src/asin.y"
       {
         SIMB sim = obtTdS((yyvsp[-3].ident));
         (yyval.cent)=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else if(!(sim.t==T_ARRAY)) yyerror("La variable no es un array. ");
         else if (!((yyvsp[-1].cent) == T_ENTERO)) yyerror("Valor de indice incorrecto. ");
         else {
           DIM dim = obtTdA(sim.ref);
           (yyval.cent)=dim.telem;
         } 
       }
#line 1928 "asin.c"
    break;

  case 63:
#line 492 "src/asin.y"
       {
         SIMB sim = obtTdS((yyvsp[-3].ident));
         (yyval.cent)=T_ERROR;
         if (sim.t == T_ERROR) yyerror("Variable no declarada. "); 
         else { 
           INF inf = obtTdD(sim.ref);
           if (inf.tipo == T_ERROR) yyerror("La variable debe de ser una funcion. ");
           else if (!(cmpDom(sim.ref, (yyvsp[-1].cent)))) yyerror("En el dominio de los parametros actuales");
           else { (yyval.cent)=inf.tipo; } 
         } 
       }
#line 1944 "asin.c"
    break;

  case 64:
#line 508 "src/asin.y"
                        { (yyval.cent) = insTdD(-1, T_VACIO); }
#line 1950 "asin.c"
    break;

  case 65:
#line 510 "src/asin.y"
                      { (yyval.cent)=(yyvsp[0].cent); }
#line 1956 "asin.c"
    break;

  case 66:
#line 516 "src/asin.y"
             { (yyval.cent)=insTdD(-1, (yyvsp[0].cent)); }
#line 1962 "asin.c"
    break;

  case 67:
#line 518 "src/asin.y"
                                  { (yyval.cent)=insTdD((yyvsp[0].cent), (yyvsp[-2].cent)); }
#line 1968 "asin.c"
    break;

  case 68:
#line 524 "src/asin.y"
            { (yyval.cent)=OP_AND; }
#line 1974 "asin.c"
    break;

  case 69:
#line 526 "src/asin.y"
             { (yyval.cent)=OP_OR; }
#line 1980 "asin.c"
    break;

  case 70:
#line 532 "src/asin.y"
             { (yyval.cent)=OP_IG; }
#line 1986 "asin.c"
    break;

  case 71:
#line 534 "src/asin.y"
                  { (yyval.cent)=OP_DESIG; }
#line 1992 "asin.c"
    break;

  case 72:
#line 540 "src/asin.y"
              { (yyval.cent)=OP_MAY; }
#line 1998 "asin.c"
    break;

  case 73:
#line 542 "src/asin.y"
                { (yyval.cent)=OP_MEN; }
#line 2004 "asin.c"
    break;

  case 74:
#line 544 "src/asin.y"
                  { (yyval.cent)=OP_MAY_IG; }
#line 2010 "asin.c"
    break;

  case 75:
#line 546 "src/asin.y"
                  { (yyval.cent)=OP_MEN_IG; }
#line 2016 "asin.c"
    break;

  case 76:
#line 552 "src/asin.y"
            { (yyval.cent)=OP_MAS; }
#line 2022 "asin.c"
    break;

  case 77:
#line 554 "src/asin.y"
                { (yyval.cent)=OP_MENOS; }
#line 2028 "asin.c"
    break;

  case 78:
#line 560 "src/asin.y"
            { (yyval.cent)=OP_POR; }
#line 2034 "asin.c"
    break;

  case 79:
#line 562 "src/asin.y"
              { (yyval.cent)=OP_DIV; }
#line 2040 "asin.c"
    break;

  case 80:
#line 568 "src/asin.y"
            { (yyval.cent)=OP_MAS; }
#line 2046 "asin.c"
    break;

  case 81:
#line 570 "src/asin.y"
                { (yyval.cent)=OP_MENOS; }
#line 2052 "asin.c"
    break;

  case 82:
#line 572 "src/asin.y"
              { (yyval.cent)=OP_EXC; }
#line 2058 "asin.c"
    break;


#line 2062 "asin.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 575 "src/asin.y"

/*****************************************************************************/
