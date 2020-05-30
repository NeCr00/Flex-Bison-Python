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
    IN = 279,
    IS = 280,
    LAMBDA = 281,
    NOT = 282,
    OR = 283,
    PASS = 284,
    RAISE = 285,
    RETURN = 286,
    TRY = 287,
    WHILE = 288,
    WITH = 289,
    YIELD = 290,
    PRINT = 291,
    EXEC = 292,
    IDENTIFIER = 293,
    SHORTSTRING = 294,
    LONGSTRING = 295,
    EX = 296,
    DECINTEGER = 297,
    OCTINTEGER = 298,
    HEXINTEGER = 299,
    POINTFLOAT = 300,
    EXPONENTFLOAT = 301,
    IMAGNUMBER = 302,
    LESS_THAN_OP = 303,
    GREATER_THAN_OP = 304,
    MINUS = 305,
    AND_EXP = 306,
    NEWLINE = 307,
    ELLIPSIS = 308,
    RIGHT_ASSIGN = 309,
    LEFT_ASSIGN = 310,
    ADD_ASSIGN = 311,
    COLON = 312,
    SUB_ASSIGN = 313,
    MUL_ASSIGN = 314,
    POW_ASSIGN = 315,
    DIV_ASSIGN = 316,
    MOD_ASSIGN = 317,
    AND_ASSIGN = 318,
    PERCENT = 319,
    OR_SIGN = 320,
    XOR_ASSIGN = 321,
    OR_ASSIGN = 322,
    RIGHT_OP = 323,
    LEFT_OP = 324,
    PTR_OP = 325,
    LE_OP = 326,
    GE_OP = 327,
    EQ_OP = 328,
    NE_OP = 329,
    STAR = 330,
    DOUBLESTAR = 331,
    SLASH = 332,
    DOUBLESLASH = 333,
    LR_OP = 334,
    PLUS = 335,
    XOR = 336
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
