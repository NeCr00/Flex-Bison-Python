/* A Bison parser, made by GNU Bison 3.5.3.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FALSE = 258,
    NONE = 259,
    TRUE = 260,
    AND = 261,
    AS = 262,
    ASSERT = 263,
    BREAK = 264,
    CLASS = 265,
    CONTINUE = 266,
    DEF = 267,
    DEL = 268,
    ELIF = 269,
    ELSE = 270,
    EXCEPT = 271,
    FINALLY = 272,
    FOR = 273,
    FROM = 274,
    GLOBAL = 275,
    IF = 276,
    IMPORT = 277,
    COMMA = 278,
    DOT = 279,
    COL = 280,
    IN = 281,
    IS = 282,
    LAMBDA = 283,
    NOT = 284,
    OR = 285,
    COLON = 286,
    PASS = 287,
    RAISE = 288,
    RETURN = 289,
    TRY = 290,
    WHILE = 291,
    WITH = 292,
    YIELD = 293,
    PRINT = 294,
    EXEC = 295,
    INC = 296,
    DEC = 297,
    EQUAL = 298,
    LPAR = 299,
    RPAR = 300,
    LESS_THAN_OP = 301,
    GREATER_THAN_OP = 302,
    MINUS = 303,
    AND_EXP = 304,
    NEWLINE = 305,
    LBRA = 306,
    RBRA = 307,
    PAPAKI = 308,
    ELLIPSIS = 309,
    RIGHT_ASSIGN = 310,
    LEFT_ASSIGN = 311,
    ADD_ASSIGN = 312,
    EXA = 313,
    SUB_ASSIGN = 314,
    MUL_ASSIGN = 315,
    POW_ASSIGN = 316,
    DIV_ASSIGN = 317,
    MOD_ASSIGN = 318,
    AND_ASSIGN = 319,
    PERCENT = 320,
    OR_SIGN = 321,
    XOR_ASSIGN = 322,
    OR_ASSIGN = 323,
    RIGHT_OP = 324,
    LEFT_OP = 325,
    PTR_OP = 326,
    LE_OP = 327,
    GE_OP = 328,
    EQ_OP = 329,
    NE_OP = 330,
    STAR = 331,
    DOUBLESTAR = 332,
    SLASH = 333,
    DOUBLESLASH = 334,
    RANGE = 335,
    LR_OP = 336,
    PLUS = 337,
    XOR = 338,
    NOT_SIGN = 339,
    DECINTEGER = 340,
    OCTINTEGER = 341,
    HEXINTEGER = 342,
    POINTFLOAT = 343,
    EXPONENTFLOAT = 344,
    IMAGNUMBER = 345,
    IDENTIFIER = 346,
    SHORTSTRING = 347,
    LONGSTRING = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

   int             intVal;
   double          floatVal;
   char*           ident;
 

#line 158 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
