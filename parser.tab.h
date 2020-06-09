/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "parser.y" /* yacc.c:1909  */


#include "expression.h"
struct Array variables;

#line 50 "parser.tab.h" /* yacc.c:1909  */

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
    QUOTATION = 309,
    APOSTROPHE = 310,
    ELLIPSIS = 311,
    RIGHT_ASSIGN = 312,
    LEFT_ASSIGN = 313,
    ADD_ASSIGN = 314,
    EXA = 315,
    SUB_ASSIGN = 316,
    MUL_ASSIGN = 317,
    POW_ASSIGN = 318,
    DIV_ASSIGN = 319,
    MOD_ASSIGN = 320,
    AND_ASSIGN = 321,
    PERCENT = 322,
    OR_SIGN = 323,
    IMAGNUMBER = 324,
    XOR_ASSIGN = 325,
    OR_ASSIGN = 326,
    RIGHT_OP = 327,
    LEFT_OP = 328,
    PTR_OP = 329,
    LE_OP = 330,
    GE_OP = 331,
    EQ_OP = 332,
    NE_OP = 333,
    STAR = 334,
    DOUBLESTAR = 335,
    SLASH = 336,
    DOUBLESLASH = 337,
    RANGE = 338,
    LR_OP = 339,
    PLUS = 340,
    XOR = 341,
    NOT_SIGN = 342,
    DECINTEGER = 343,
    OCTINTEGER = 344,
    HEXINTEGER = 345,
    POINTFLOAT = 346,
    EXPONENTFLOAT = 347,
    IDENTIFIER = 348,
    SHORTSTRING = 349,
    LONGSTRING = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "parser.y" /* yacc.c:1909  */

    struct Variable nval;
   

#line 163 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
