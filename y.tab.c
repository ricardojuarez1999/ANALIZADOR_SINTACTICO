
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sintactico.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include <string.h>
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);



/* Line 189 of yacc.c  */
#line 87 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     ENTERO = 259,
     PALABRA = 260,
     VARIABLE = 261,
     LETRA = 262,
     INTEGER = 263,
     FLOAT = 264,
     CHARACTER = 265,
     CHAIN = 266,
     MAS = 267,
     MENOS = 268,
     IGUAL = 269,
     PCOMA = 270,
     POR = 271,
     DIV = 272,
     PARENTESISD = 273,
     PARENTESISI = 274,
     COMA = 275,
     DOSPUNTOS = 276,
     IGUALIGUAL = 277,
     DISTINTO = 278,
     MAYOR = 279,
     MENOR = 280,
     MAYORIGUAL = 281,
     MENORIGUAL = 282,
     NEGACION = 283,
     COMILLAS = 284,
     PRINT = 285,
     INPUT = 286,
     WHATIS = 287,
     LLAVESD = 288,
     LLAVESI = 289,
     IF = 290,
     ELSE = 291,
     DO = 292,
     WHILE = 293,
     FOR = 294,
     SWITCH = 295,
     CASE = 296,
     BREAK = 297,
     DEFAULT = 298,
     FUNCTION = 299,
     RETURN = 300,
     VOID = 301,
     CORCHETED = 302,
     CORCHETEI = 303
   };
#endif
/* Tokens.  */
#define REAL 258
#define ENTERO 259
#define PALABRA 260
#define VARIABLE 261
#define LETRA 262
#define INTEGER 263
#define FLOAT 264
#define CHARACTER 265
#define CHAIN 266
#define MAS 267
#define MENOS 268
#define IGUAL 269
#define PCOMA 270
#define POR 271
#define DIV 272
#define PARENTESISD 273
#define PARENTESISI 274
#define COMA 275
#define DOSPUNTOS 276
#define IGUALIGUAL 277
#define DISTINTO 278
#define MAYOR 279
#define MENOR 280
#define MAYORIGUAL 281
#define MENORIGUAL 282
#define NEGACION 283
#define COMILLAS 284
#define PRINT 285
#define INPUT 286
#define WHATIS 287
#define LLAVESD 288
#define LLAVESI 289
#define IF 290
#define ELSE 291
#define DO 292
#define WHILE 293
#define FOR 294
#define SWITCH 295
#define CASE 296
#define BREAK 297
#define DEFAULT 298
#define FUNCTION 299
#define RETURN 300
#define VOID 301
#define CORCHETED 302
#define CORCHETEI 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "sintactico.y"

  float real;
  int entero;
  char cadena[1000];
  char letra[1];



/* Line 214 of yacc.c  */
#line 228 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    15,    21,    24,    27,
      30,    32,    34,    36,    39,    42,    44,    46,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    66,    68,    70,
      72,    74,    76,    81,    84,    86,    88,    90,    92,    94,
      97,   101,   105,   109,   113,   117,   122,   125,   130,   133,
     140,   145,   148,   155,   160,   163,   167,   173,   179,   183,
     187,   191,   193,   195,   197,   202,   209,   212,   216,   218,
     220,   222,   225,   227,   229,   231,   233,   235,   237,   239,
     241,   244,   248,   252,   256,   260,   264,   268,   272,   276,
     280,   289,   292,   297,   298,   306,   315,   317,   319,   331,
     339,   341,   343,   345,   347,   355,   361,   367,   371,   372,
     374,   376,   378,   380,   385,   388,   389,   402,   412,   416,
     418,   419,   424
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    15,    50,    -1,    51,    -1,    32,
      55,    -1,    32,     4,    -1,    32,    54,    47,     4,    48,
      -1,    32,     3,    -1,    32,    53,    -1,    32,    54,    -1,
      58,    -1,    81,    -1,    59,    -1,    32,    52,    -1,    32,
      64,    -1,    61,    -1,    62,    -1,    32,    66,    -1,    68,
      -1,    69,    -1,    67,    -1,    70,    -1,    72,    -1,    73,
      -1,    78,    -1,    80,    -1,    -1,     7,    -1,     5,    -1,
       6,    -1,     5,    -1,     7,    -1,    54,    47,    54,    48,
      -1,    55,    56,    -1,    56,    -1,    57,    -1,     4,    -1,
       3,    -1,    54,    -1,    13,    57,    -1,    57,    12,    57,
      -1,    57,    13,    57,    -1,    57,    16,    57,    -1,    57,
      17,    57,    -1,    18,    57,    19,    -1,     8,    54,    14,
      55,    -1,     8,    54,    -1,     9,    54,    14,    55,    -1,
       9,    54,    -1,    10,    54,    14,    29,     7,    29,    -1,
      10,    54,    14,    54,    -1,    10,    54,    -1,    11,    54,
      14,    29,    63,    29,    -1,    11,    54,    14,    54,    -1,
      11,    54,    -1,    54,    14,    55,    -1,    54,    14,    29,
       7,    29,    -1,    54,    14,    29,    63,    29,    -1,    54,
      14,    80,    -1,    54,    14,    62,    -1,    54,    14,    60,
      -1,     6,    -1,     5,    -1,     7,    -1,    54,    47,    54,
      48,    -1,    30,    18,    29,    63,    29,    19,    -1,    30,
      54,    -1,    31,    18,    19,    -1,     5,    -1,     6,    -1,
      64,    -1,    65,    64,    -1,    65,    -1,     5,    -1,     6,
      -1,     4,    -1,     4,    -1,     6,    -1,     5,    -1,     7,
      -1,    13,    66,    -1,    66,    22,    66,    -1,    66,    23,
      66,    -1,    66,    24,    66,    -1,    66,    25,    66,    -1,
      66,    26,    66,    -1,    66,    27,    66,    -1,    18,    66,
      19,    -1,    54,    12,    12,    -1,    54,    13,    13,    -1,
      35,    18,    66,    19,    33,    50,    34,    68,    -1,    36,
      68,    -1,    36,    33,    50,    34,    -1,    -1,    38,    18,
      66,    19,    33,    50,    34,    -1,    37,    33,    50,    34,
      38,    18,    66,    19,    -1,    58,    -1,    59,    -1,    39,
      18,    71,    15,    66,    15,    67,    19,    33,    50,    34,
      -1,    40,    18,    54,    19,    33,    75,    34,    -1,     4,
      -1,     3,    -1,    53,    -1,     7,    -1,    41,    74,    21,
      50,    42,    15,    75,    -1,    41,    74,    21,    50,    75,
      -1,    43,    21,    50,    42,    15,    -1,    43,    21,    50,
      -1,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      76,    54,    20,    77,    -1,    76,    54,    -1,    -1,    44,
      76,    54,    18,    77,    19,    33,    50,    45,    54,    15,
      34,    -1,    44,    46,    54,    18,    77,    19,    33,    50,
      34,    -1,    54,    20,    79,    -1,    54,    -1,    -1,    54,
      18,    79,    19,    -1,    76,    47,    48,    54,    14,    76,
      47,     4,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    85,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   113,   116,   119,
     120,   121,   122,   125,   126,   129,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   147,
     149,   150,   151,   153,   154,   157,   158,   159,   160,   161,
     162,   165,   166,   167,   168,   171,   172,   175,   178,   179,
     180,   183,   184,   187,   188,   189,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   206,   207,
     210,   211,   212,   213,   216,   219,   222,   223,   226,   229,
     232,   233,   234,   235,   238,   239,   240,   241,   242,   245,
     246,   247,   248,   251,   252,   253,   256,   257,   260,   261,
     262,   265,   268
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "ENTERO", "PALABRA", "VARIABLE",
  "LETRA", "INTEGER", "FLOAT", "CHARACTER", "CHAIN", "MAS", "MENOS",
  "IGUAL", "PCOMA", "POR", "DIV", "PARENTESISD", "PARENTESISI", "COMA",
  "DOSPUNTOS", "IGUALIGUAL", "DISTINTO", "MAYOR", "MENOR", "MAYORIGUAL",
  "MENORIGUAL", "NEGACION", "COMILLAS", "PRINT", "INPUT", "WHATIS",
  "LLAVESD", "LLAVESI", "IF", "ELSE", "DO", "WHILE", "FOR", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "FUNCTION", "RETURN", "VOID", "CORCHETED",
  "CORCHETEI", "$accept", "Bloque", "Instruccion", "Letra", "Palabra",
  "Variable", "Exp", "Calc", "ExpA", "Declaracion", "Asignacion",
  "Variable2", "Print", "Input", "ChainObject", "Cadena", "PalabraCadena",
  "Comparador", "Sumador", "If", "While", "Dowhile", "Valor", "For",
  "Switch", "ValorCase", "Case", "TypeFunction", "Parameters", "Function",
  "Callparameters", "Callfunction", "Arreglo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    52,    53,    54,
      54,    54,    54,    55,    55,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    62,    63,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    69,    70,    71,    71,    72,    73,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    78,    79,    79,
      79,    80,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     5,     2,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     4,     2,     1,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     4,     2,     4,     2,     6,
       4,     2,     6,     4,     2,     3,     5,     5,     3,     3,
       3,     1,     1,     1,     4,     6,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       8,     2,     4,     0,     7,     8,     1,     1,    11,     7,
       1,     1,     1,     1,     7,     5,     5,     3,     0,     1,
       1,     1,     1,     4,     2,     0,    12,     9,     3,     1,
       0,     4,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      26,    30,    29,    31,   109,   110,   111,   112,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     3,
       0,    10,    12,    15,    16,    20,    18,    19,    21,    22,
      23,     0,    24,    25,    11,    46,    48,    51,    54,     0,
      66,     0,    37,    36,    30,    29,    31,     0,     0,    13,
       8,    38,     4,    34,    35,    14,    72,    17,     0,    26,
      91,    26,     0,     0,     0,   109,   110,   111,   112,     0,
       0,     1,    26,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,    67,    37,    36,    30,    29,    31,
      38,    39,    80,     0,     0,     0,    36,     0,     0,    33,
       0,     0,     0,     0,    75,    73,    74,    71,     0,     0,
       0,     0,     0,     0,    76,    78,    77,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     0,     0,     0,     2,    88,    89,    30,    29,
      31,     0,    38,    55,    60,    59,    58,   119,     0,     0,
       0,    45,    47,     0,    50,     0,    53,    73,    74,     0,
      70,    44,    87,     0,    40,    41,    42,    43,    81,    82,
      83,    84,    85,    86,     0,    92,     0,     0,     0,     0,
     115,   115,     0,     0,     0,   120,   121,    32,     0,     0,
       0,     0,     6,    26,     0,    26,     0,   108,     0,     0,
       0,    56,    57,     0,   118,     0,    49,    52,    65,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,    32,
       0,    93,     0,    94,     0,     0,   101,   100,    28,   103,
     102,     0,    26,    99,   115,    26,    26,     0,    90,    95,
       0,    26,   107,   113,     0,     0,     0,    26,   108,     0,
     117,     0,   122,     0,     0,   105,   106,     0,    98,   108,
       0,   104,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    49,    50,    90,    52,    53,    54,    21,
      22,   144,    23,    24,   159,   160,    56,    92,    25,    26,
      27,    28,   131,    29,    30,   231,   215,    31,   199,    32,
     148,    33,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -227
static const yytype_int16 yypact[] =
{
     271,  -227,  -227,  -227,    22,    22,    22,    22,   195,    13,
     286,    19,    99,    35,    75,    92,    98,     8,   114,   121,
      26,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,   102,  -227,  -227,  -227,    32,    33,    36,    60,   141,
     130,   167,   181,    96,   133,   379,   230,   313,   313,  -227,
    -227,    15,   329,  -227,   221,  -227,   138,   385,   333,   271,
    -227,   271,   333,   389,    22,  -227,  -227,  -227,  -227,    22,
      22,  -227,   271,   178,   184,   256,    22,    22,   151,   329,
     329,   140,   237,   157,  -227,  -227,   391,   397,   379,   403,
     130,   112,  -227,   175,   339,   147,  -227,   329,   329,  -227,
     329,   329,   329,   329,  -227,  -227,  -227,  -227,   333,   333,
     333,   333,   333,   333,  -227,  -227,  -227,  -227,   333,   333,
     348,   170,   176,   357,    22,    22,    22,    22,    70,  -227,
    -227,   201,    68,     5,     6,  -227,  -227,  -227,  -227,  -227,
    -227,   290,    24,   329,  -227,  -227,  -227,    47,   198,   125,
      22,   329,   329,   212,   130,   157,   130,   192,   196,   210,
    -227,  -227,  -227,   217,   112,   112,  -227,  -227,   298,   303,
     223,   153,   213,  -227,   225,  -227,   208,   234,   333,   235,
     423,   423,   241,   254,    22,    22,  -227,  -227,    84,   255,
     257,   269,  -227,   271,   280,   271,   330,    56,    22,   281,
     293,  -227,  -227,   135,  -227,   423,  -227,  -227,  -227,   279,
     333,   309,    22,   224,   284,   310,    93,   308,   326,  -227,
     267,   171,   366,  -227,     1,   341,  -227,  -227,  -227,  -227,
    -227,   347,   271,  -227,   423,   271,   271,   365,  -227,  -227,
     344,   271,   336,  -227,   352,   342,   387,   271,   307,   421,
    -227,    22,  -227,   404,   422,  -227,  -227,    -4,  -227,    56,
     405,  -227,  -227
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,   -27,  -227,  -227,   227,     0,   -54,   -43,   -12,   378,
     380,  -227,  -227,   367,   -63,    10,  -227,    -7,   232,   -10,
    -227,  -227,  -227,  -227,  -227,  -227,  -226,   -16,  -169,  -227,
     260,   371,  -227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      20,    70,    60,    57,    35,    36,    37,    38,    40,    99,
      51,   260,   200,    73,    74,    -9,    65,    66,    67,    68,
      55,   143,   255,   180,   181,   151,   152,     1,     2,     3,
      -9,    41,   121,   261,   122,    91,    93,    58,    73,    74,
      75,    94,    76,    77,    76,   135,    79,    80,    77,    -9,
      81,   120,    77,    77,    69,   123,    -9,    -9,    -9,    20,
      -9,    20,    95,   128,   132,   243,   107,   185,    61,   133,
     134,   184,    20,    77,    82,   142,   147,   149,   183,    77,
      77,   154,   156,    77,    75,    91,    93,   179,   164,   165,
     166,   167,   190,    62,    77,   149,    -5,   213,   205,   214,
      99,   168,   169,   170,   171,   172,   173,    77,    99,    99,
      63,    -5,    94,   234,    71,    77,    64,    77,   -76,   -76,
     -76,   -76,   -76,   -76,    35,    36,    37,    38,   102,   103,
      -5,    77,    59,   -28,    11,    12,    72,    -5,    -5,    -5,
      77,    -5,   104,   105,   106,     1,     2,     3,   -28,    78,
     188,   163,     1,     2,     3,   -78,   -78,   -78,   -78,   -78,
     -78,   104,   157,   158,   198,   198,   209,   -28,   211,   153,
      83,   196,    77,   187,   -28,   -28,   -28,    77,   -28,   112,
     113,    -7,    77,   219,   203,   147,    84,   100,   101,   220,
     136,   102,   103,    20,   161,    20,    -7,   137,   216,   150,
       1,     2,     3,   222,   175,   242,    11,    12,   244,   245,
     176,   238,   224,    39,   248,    -7,   178,   186,   198,   189,
     253,   -68,    -7,    -7,    -7,   -69,    -7,   226,   227,   228,
     -27,   229,    20,   100,   101,    20,    20,   102,   103,   191,
     113,    20,     1,     2,     3,   -27,   194,    20,   111,   112,
     113,   257,   -79,   -79,   -79,   -79,   -79,   -79,   193,    85,
      96,   138,   139,   140,   -27,   192,   155,   195,   197,    97,
     201,   -27,   -27,   -27,    98,   -27,     1,     2,     3,     4,
       5,     6,     7,   202,   206,   141,   207,     9,   208,    42,
      43,    44,    45,    46,   104,   157,   158,   182,   210,    47,
     217,     8,     9,    10,    48,   232,    11,    12,    13,    14,
      15,    16,   218,   221,   237,    17,    85,    86,    87,    88,
      89,   109,   110,   111,   112,   113,    47,   110,   111,   112,
     113,    48,    85,    96,     1,     2,     3,   114,   115,   116,
     117,   235,    97,   223,   233,   212,   118,    98,   213,   254,
     214,   119,   108,   109,   110,   111,   112,   113,   162,   236,
     240,   108,   109,   110,   111,   112,   113,   174,   241,   246,
     108,   109,   110,   111,   112,   113,   177,   247,   249,   108,
     109,   110,   111,   112,   113,   239,   250,   251,   108,   109,
     110,   111,   112,   113,     1,     2,     3,   124,   125,   126,
     127,   -77,   -77,   -77,   -77,   -77,   -77,   108,   109,   110,
     111,   112,   113,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,    65,    66,    67,    68,   252,   256,   259,   258,   262,
     230,   129,   145,   130,   225,   204,   146
};

static const yytype_uint16 yycheck[] =
{
       0,    17,    12,    10,     4,     5,     6,     7,     8,    52,
      10,    15,   181,    12,    13,     0,     8,     9,    10,    11,
      10,    75,   248,    18,    18,    79,    80,     5,     6,     7,
      15,    18,    59,   259,    61,    47,    48,    18,    12,    13,
      14,    48,    18,    47,    18,    72,    14,    14,    47,    34,
      14,    58,    47,    47,    46,    62,    41,    42,    43,    59,
      45,    61,    47,    63,    64,   234,    56,    20,    33,    69,
      70,    47,    72,    47,    14,    75,    76,    77,   141,    47,
      47,    81,    82,    47,    14,    97,    98,    19,   100,   101,
     102,   103,   155,    18,    47,    95,     0,    41,    14,    43,
     143,   108,   109,   110,   111,   112,   113,    47,   151,   152,
      18,    15,   119,    20,     0,    47,    18,    47,    22,    23,
      24,    25,    26,    27,   124,   125,   126,   127,    16,    17,
      34,    47,    33,     0,    35,    36,    15,    41,    42,    43,
      47,    45,     4,     5,     6,     5,     6,     7,    15,    47,
     150,     4,     5,     6,     7,    22,    23,    24,    25,    26,
      27,     4,     5,     6,   180,   181,   193,    34,   195,    29,
      29,   178,    47,    48,    41,    42,    43,    47,    45,    26,
      27,     0,    47,    48,   184,   185,    19,    12,    13,   205,
      12,    16,    17,   193,    19,   195,    15,    13,   198,    48,
       5,     6,     7,   210,    34,   232,    35,    36,   235,   236,
      34,   221,   212,    18,   241,    34,    15,    19,   234,     7,
     247,    29,    41,    42,    43,    29,    45,     3,     4,     5,
       0,     7,   232,    12,    13,   235,   236,    16,    17,    29,
      27,   241,     5,     6,     7,    15,    38,   247,    25,    26,
      27,   251,    22,    23,    24,    25,    26,    27,    33,     3,
       4,     5,     6,     7,    34,    48,    29,    33,    33,    13,
      29,    41,    42,    43,    18,    45,     5,     6,     7,     8,
       9,    10,    11,    29,    29,    29,    29,    31,    19,     3,
       4,     5,     6,     7,     4,     5,     6,     7,    18,    13,
      19,    30,    31,    32,    18,    21,    35,    36,    37,    38,
      39,    40,    19,    34,    47,    44,     3,     4,     5,     6,
       7,    23,    24,    25,    26,    27,    13,    24,    25,    26,
      27,    18,     3,     4,     5,     6,     7,     4,     5,     6,
       7,    33,    13,    34,    34,    15,    13,    18,    41,    42,
      43,    18,    22,    23,    24,    25,    26,    27,    19,    33,
      19,    22,    23,    24,    25,    26,    27,    19,    21,     4,
      22,    23,    24,    25,    26,    27,    19,    33,    42,    22,
      23,    24,    25,    26,    27,    19,    34,    45,    22,    23,
      24,    25,    26,    27,     5,     6,     7,     8,     9,    10,
      11,    22,    23,    24,    25,    26,    27,    22,    23,    24,
      25,    26,    27,    22,    23,    24,    25,    26,    27,    22,
      23,    24,    25,    26,    27,    22,    23,    24,    25,    26,
      27,     8,     9,    10,    11,    48,    15,    15,    34,    34,
     213,    63,    75,    63,   212,   185,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    30,    31,
      32,    35,    36,    37,    38,    39,    40,    44,    50,    51,
      54,    58,    59,    61,    62,    67,    68,    69,    70,    72,
      73,    76,    78,    80,    81,    54,    54,    54,    54,    18,
      54,    18,     3,     4,     5,     6,     7,    13,    18,    52,
      53,    54,    55,    56,    57,    64,    65,    66,    18,    33,
      68,    33,    18,    18,    18,     8,     9,    10,    11,    46,
      76,     0,    15,    12,    13,    14,    18,    47,    47,    14,
      14,    14,    14,    29,    19,     3,     4,     5,     6,     7,
      54,    57,    66,    57,    66,    47,     4,    13,    18,    56,
      12,    13,    16,    17,     4,     5,     6,    64,    22,    23,
      24,    25,    26,    27,     4,     5,     6,     7,    13,    18,
      66,    50,    50,    66,     8,     9,    10,    11,    54,    58,
      59,    71,    54,    54,    54,    50,    12,    13,     5,     6,
       7,    29,    54,    55,    60,    62,    80,    54,    79,    54,
      48,    55,    55,    29,    54,    29,    54,     5,     6,    63,
      64,    19,    19,     4,    57,    57,    57,    57,    66,    66,
      66,    66,    66,    66,    19,    34,    34,    19,    15,    19,
      18,    18,     7,    63,    47,    20,    19,    48,    54,     7,
      63,    29,    48,    33,    38,    33,    66,    33,    76,    77,
      77,    29,    29,    54,    79,    14,    29,    29,    19,    50,
      18,    50,    15,    41,    43,    75,    54,    19,    19,    48,
      76,    34,    66,    34,    54,    67,     3,     4,     5,     7,
      53,    74,    21,    34,    20,    33,    33,    47,    68,    19,
      19,    21,    50,    77,    50,    50,     4,    33,    50,    42,
      34,    45,    48,    50,    42,    75,    15,    54,    34,    15,
      15,    75,    34
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 88 "sintactico.y"
    {printf("EXPRESION ALGEBRAICA\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 89 "sintactico.y"
    {printf("ENTERO\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 90 "sintactico.y"
    {printf("ARREGLO POSICION\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 91 "sintactico.y"
    {printf("REAL\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 92 "sintactico.y"
    {printf("PALABRA\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 93 "sintactico.y"
    {printf("VARIABLE\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 94 "sintactico.y"
    {printf("DECLARACION\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 95 "sintactico.y"
    {printf("DECLARACION ARREGLO\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 96 "sintactico.y"
    {printf("ASIGNACION\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 97 "sintactico.y"
    {printf("LETRA\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 98 "sintactico.y"
    {printf("CADENA\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "sintactico.y"
    {printf("PRINT\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 100 "sintactico.y"
    {printf("INPUT\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 101 "sintactico.y"
    {printf("COMPARADOR\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 102 "sintactico.y"
    {printf("IF\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 103 "sintactico.y"
    {printf("WHILE\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 104 "sintactico.y"
    {printf("SUMADOR\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "sintactico.y"
    {printf("DOWHILE\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 106 "sintactico.y"
    {printf("FOR\n");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 107 "sintactico.y"
    {printf("SWITCH\n");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 108 "sintactico.y"
    {printf("FUNCTION\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 109 "sintactico.y"
    {printf("CALLFUNCTION\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1854 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 271 "sintactico.y"


void yyerror(char *s)
{
  printf("Error sintactico %s",s);
}

int main(int argc,char **argv)
{
  if (argc>1)
                yyin=fopen(argv[1],"rt");
  else
                yyin=stdin;

  yyparse();
  return 0;
}
