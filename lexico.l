%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "y.tab.h"
  int linea=0;
%}

DIGITO [0-9]
LETRA [a-zA-ZñÑ]

REAL {DIGITO}+"."{DIGITO}+?
ENTERO {DIGITO}+?
PALABRA {LETRA}+?
VARIABLE {LETRA}+({LETRA}|{DIGITO})+?



%%
"integer"	{return(INTEGER);}
"float"		{return(FLOAT);}
"character"	{return(CHARACTER);}
"chain"		{return(CHAIN);}
"void"		{return(VOID);}
"print"		{return(PRINT);}
"input"		{return(INPUT);}
"whatis"	{return(WHATIS);}
"if"		{return(IF);}
"else"		{return(ELSE);}
"do"		{return(DO);}
"while"		{return(WHILE);}
"for"		{return(FOR);}
"switch"	{return(SWITCH);}
"case"		{return(CASE);}
"break"		{return(BREAK);}
"default"	{return(DEFAULT);}
"function"  {return(FUNCTION);}
"return"	{return(RETURN);}

{LETRA}		{sscanf(yytext, "%s", yylval.cadena); return(LETRA);}
{REAL} 		{yylval.real=atof(yytext); return(REAL);}
{ENTERO} 	{yylval.entero=atoi(yytext); return(ENTERO);}
{PALABRA} 	{sscanf(yytext, "%s", yylval.cadena); return(PALABRA);}
{VARIABLE}	{sscanf(yytext, "%s", yylval.cadena); return(VARIABLE);}
"="         {return(IGUAL);}
"+"         {return(MAS);}
"-"         {return(MENOS);}
";"         {return(PCOMA);}
"*"         {return(POR);}
"/"         {return(DIV);}
"("         {return(PARENTESISD);}
")"         {return(PARENTESISI);}
"'"			{return(COMILLAS);}
"{"			{return(LLAVESD);}
"}"			{return(LLAVESI);}
","			{return(COMA);}
"=="		{return(IGUALIGUAL);}
"!="		{return(DISTINTO);}
">"			{return(MAYOR);}
"<"			{return(MENOR);}
">="		{return(MAYORIGUAL);}
"<="		{return(MENORIGUAL);}
"!"			{return(NEGACION);}
":"			{return(DOSPUNTOS);}
"["			{return(CORCHETED);}
"]"			{return(CORCHETEI);}
"\n"        {linea++;}
[\t\r\f] {}
" "			{}
.            {printf("Error lexico en linea %d",linea);}
%%