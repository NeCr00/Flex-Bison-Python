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
/* "%code requires" blocks.  */
#line 19 "parser.y"


#include "expression.h"
struct Array variables;
struct Array dictionary;

#line 55 "parser.tab.h"

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
    SETDEFAULT = 299,
    LPAR = 300,
    RPAR = 301,
    LESS_THAN_OP = 302,
    GREATER_THAN_OP = 303,
    MINUS = 304,
    AND_EXP = 305,
    NEWLINE = 306,
    LBRA = 307,
    RBRA = 308,
    PAPAKI = 309,
    QUOTATION = 310,
    APOSTROPHE = 311,
    ITEMS = 312,
    ELLIPSIS = 313,
    RIGHT_ASSIGN = 314,
    LEFT_ASSIGN = 315,
    ADD_ASSIGN = 316,
    EXA = 317,
    SUB_ASSIGN = 318,
    MUL_ASSIGN = 319,
    POW_ASSIGN = 320,
    DIV_ASSIGN = 321,
    MOD_ASSIGN = 322,
    AND_ASSIGN = 323,
    PERCENT = 324,
    OR_SIGN = 325,
    XOR_ASSIGN = 326,
    OR_ASSIGN = 327,
    RIGHT_OP = 328,
    LEFT_OP = 329,
    PTR_OP = 330,
    LE_OP = 331,
    GE_OP = 332,
    EQ_OP = 333,
    NE_OP = 334,
    STAR = 335,
    DOUBLESTAR = 336,
    SLASH = 337,
    DOUBLESLASH = 338,
    RANGE = 339,
    LR_OP = 340,
    PLUS = 341,
    XOR = 342,
    NOT_SIGN = 343,
    DECINTEGER = 344,
    OCTINTEGER = 345,
    HEXINTEGER = 346,
    POINTFLOAT = 347,
    EXPONENTFLOAT = 348,
    IDENTIFIER = 349,
    SHORTSTRING = 350,
    LONGSTRING = 351,
    IMAGNUMBER = 352
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

    struct Variable nval;
	

#line 169 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
