%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include <string.h>
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);

%}

%union

{
  float real;
  int entero;
  char cadena[1000];
  char letra[1];
}

%start Bloque

%token <real>   REAL
%token <entero> ENTERO
%token <cadena> PALABRA
%token <cadena> VARIABLE 
%token <letra>  LETRA
%token <cadena> INTEGER
%token <cadena> FLOAT
%token <cadena> CHARACTER
%token <cadena> CHAIN
%token MAS
%token MENOS
%token IGUAL
%token PCOMA
%token POR
%token DIV
%token PARENTESISD
%token PARENTESISI
%token COMA
%token DOSPUNTOS
%token IGUALIGUAL
%token DISTINTO
%token MAYOR
%token MENOR
%token MAYORIGUAL
%token MENORIGUAL
%token NEGACION
%token COMILLAS
%token PRINT
%token INPUT
%token WHATIS
%token LLAVESD
%token LLAVESI
%token IF
%token ELSE
%token DO
%token WHILE
%token FOR
%token SWITCH
%token CASE
%token BREAK
%token DEFAULT
%token FUNCTION
%token RETURN
%token VOID
%token CORCHETED
%token CORCHETEI
%type <cadena> Palabra
%type <letra> Letra
%left IGUALIGUAL
%left DISTINTO
%left MAYOR
%left MENOR
%left MAYORIGUAL
%left MENORIGUAL
%left MAS MENOS                             
%left POR DIV

%%

Bloque:     Instruccion PCOMA Bloque
                    |Instruccion
                     ;

Instruccion:     WHATIS Exp                   {printf("EXPRESION ALGEBRAICA\n");}
                    |WHATIS ENTERO            {printf("ENTERO\n");}
                    |WHATIS Variable CORCHETED ENTERO CORCHETEI {printf("ARREGLO POSICION\n");}
                    |WHATIS REAL              {printf("REAL\n");}
                    |WHATIS Palabra           {printf("PALABRA\n");}
                    |WHATIS Variable          {printf("VARIABLE\n");}
                    |Declaracion              {printf("DECLARACION\n");}
                    |Arreglo                  {printf("DECLARACION ARREGLO\n");}
                    |Asignacion               {printf("ASIGNACION\n");}
                    |WHATIS Letra             {printf("LETRA\n");}
                    |WHATIS Cadena            {printf("CADENA\n");}
                    |Print                    {printf("PRINT\n");}
                    |Input                    {printf("INPUT\n");}
                    |WHATIS Comparador        {printf("COMPARADOR\n");}
                    |If                       {printf("IF\n");}
                    |While                    {printf("WHILE\n");}
                    |Sumador                  {printf("SUMADOR\n");}
                    |Dowhile                  {printf("DOWHILE\n");}
                    |For                      {printf("FOR\n");}
                    |Switch                   {printf("SWITCH\n");}
                    |Function                 {printf("FUNCTION\n");}
                    |Callfunction             {printf("CALLFUNCTION\n");}
                    |
                     ;

Letra:      LETRA 
                     ;

Palabra:    PALABRA 
                     ;

Variable:   VARIABLE 
                    |PALABRA
                    |LETRA
                    |Variable CORCHETED Variable CORCHETEI
                     ;

Exp:      Exp Calc  
                    |Calc
                     ;        

Calc:  ExpA                              
                     ;

ExpA:       ENTERO
                    |REAL
                    |Variable
                    |MENOS ExpA
                    |ExpA MAS ExpA
                    |ExpA MENOS ExpA
                    |ExpA POR ExpA
                    |ExpA DIV ExpA
                    |PARENTESISD ExpA PARENTESISI
                     ;

Declaracion: INTEGER Variable IGUAL Exp            
                    |INTEGER Variable              
                    |FLOAT Variable IGUAL Exp      
                    |FLOAT Variable                
                    |CHARACTER Variable IGUAL
                    COMILLAS LETRA COMILLAS
                    |CHARACTER Variable IGUAL Variable         
                    |CHARACTER Variable            
                    |CHAIN Variable IGUAL 
                    COMILLAS ChainObject COMILLAS  
                    |CHAIN Variable IGUAL Variable
                    |CHAIN Variable                
                     ;

Asignacion: Variable IGUAL Exp                
                    |Variable IGUAL COMILLAS LETRA COMILLAS        
                    |Variable IGUAL COMILLAS ChainObject COMILLAS  
                    |Variable IGUAL Callfunction   
                    |Variable IGUAL Input   
                    |Variable IGUAL Variable
                     ;

Print:  PRINT PARENTESISD COMILLAS ChainObject COMILLAS PARENTESISI
                    | PRINT Variable
                     ;

Input:   INPUT PARENTESISD PARENTESISI
                     ;

ChainObject: PALABRA 
                    |VARIABLE 
                    |Cadena
                     ;

Cadena:    PalabraCadena Cadena 
                    | PalabraCadena 
                     ;

PalabraCadena: PALABRA 
                    |VARIABLE
                    |ENTERO 
                     ;

Comparador:   ENTERO
                    |VARIABLE
                    |PALABRA
                    |LETRA
                    |MENOS Comparador
                    |Comparador IGUALIGUAL Comparador
                    |Comparador DISTINTO Comparador
                    |Comparador MAYOR Comparador
                    |Comparador MENOR Comparador
                    |Comparador MAYORIGUAL Comparador
                    |Comparador MENORIGUAL Comparador
                    |PARENTESISD Comparador PARENTESISI
                     ;     

Sumador:      Variable MAS MAS
                    |Variable MENOS MENOS
                     ;

If: IF PARENTESISD Comparador PARENTESISI LLAVESD Bloque LLAVESI If
                    |ELSE If
                    |ELSE LLAVESD Bloque LLAVESI
                    |
                     ;

While: WHILE PARENTESISD Comparador PARENTESISI LLAVESD Bloque LLAVESI
                     ;

Dowhile: DO LLAVESD Bloque LLAVESI WHILE PARENTESISD Comparador PARENTESISI
                     ;

Valor:   Declaracion
                    |Asignacion
                     ;

For: FOR PARENTESISD Valor PCOMA Comparador PCOMA Sumador PARENTESISI LLAVESD Bloque LLAVESI
                     ;

Switch: SWITCH PARENTESISD Variable PARENTESISI LLAVESD Case LLAVESI
                     ;
                    
ValorCase: ENTERO
                    |REAL
                    |Palabra
                    |LETRA
                     ;

Case: CASE ValorCase DOSPUNTOS Bloque BREAK PCOMA Case
                    |CASE ValorCase DOSPUNTOS Bloque Case
                    |DEFAULT DOSPUNTOS Bloque BREAK PCOMA
                    |DEFAULT DOSPUNTOS Bloque
                    |
                     ;

TypeFunction:  INTEGER
                    |FLOAT
                    |CHARACTER
                    |CHAIN
                     ;

Parameters:   TypeFunction Variable COMA Parameters
                    |TypeFunction Variable
                    |
                     ;

Function: FUNCTION TypeFunction Variable PARENTESISD Parameters PARENTESISI LLAVESD Bloque RETURN Variable PCOMA LLAVESI
                    |FUNCTION VOID Variable PARENTESISD Parameters PARENTESISI LLAVESD Bloque LLAVESI
                     ;

Callparameters:   Variable COMA Callparameters
                    |Variable
                    |
                     ;

Callfunction: Variable PARENTESISD Callparameters PARENTESISI
                     ;

Arreglo:   TypeFunction CORCHETED CORCHETEI Variable IGUAL TypeFunction CORCHETED ENTERO CORCHETEI
                     ;

%%

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