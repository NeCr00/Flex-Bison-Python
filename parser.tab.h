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
    IDENTIFIER = 296,
    SHORTSTRING = 297,
    LONGSTRING = 298,
    INC = 299,
    DEC = 300,
    EQUAL = 301,
    DECINTEGER = 302,
    OCTINTEGER = 303,
    LPAR = 304,
    RPAR = 305,
    HEXINTEGER = 306,
    POINTFLOAT = 307,
    EXPONENTFLOAT = 308,
    IMAGNUMBER = 309,
    LESS_THAN_OP = 310,
    GREATER_THAN_OP = 311,
    MINUS = 312,
    AND_EXP = 313,
    NEWLINE = 314,
    ELLIPSIS = 315,
    RIGHT_ASSIGN = 316,
    LEFT_ASSIGN = 317,
    ADD_ASSIGN = 318,
    SUB_ASSIGN = 319,
    MUL_ASSIGN = 320,
    POW_ASSIGN = 321,
    DIV_ASSIGN = 322,
    MOD_ASSIGN = 323,
    AND_ASSIGN = 324,
    PERCENT = 325,
    OR_SIGN = 326,
    XOR_ASSIGN = 327,
    OR_ASSIGN = 328,
    RIGHT_OP = 329,
    LEFT_OP = 330,
    PTR_OP = 331,
    LE_OP = 332,
    GE_OP = 333,
    EQ_OP = 334,
    NE_OP = 335,
    STAR = 336,
    DOUBLESTAR = 337,
    SLASH = 338,
    DOUBLESLASH = 339,
    RANGE = 340,
    LR_OP = 341,
    PLUS = 342,
    XOR = 343,
    NOT_SIGN = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
