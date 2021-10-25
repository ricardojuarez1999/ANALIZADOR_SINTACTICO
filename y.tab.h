
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 16 "sintactico.y"

  float real;
  int entero;
  char cadena[1000];
  char letra[1];



/* Line 1676 of yacc.c  */
#line 157 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


