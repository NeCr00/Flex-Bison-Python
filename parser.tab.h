/* A Bison parser, made by GNU Bison 3.6.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 18 "parser.y"


#include "expression.h"
struct Array variables;
struct Array dictionary;

#line 56 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FALSE = 258,                   /* FALSE  */
    NONE = 259,                    /* NONE  */
    TRUE = 260,                    /* TRUE  */
    AND = 261,                     /* AND  */
    AS = 262,                      /* AS  */
    ASSERT = 263,                  /* ASSERT  */
    BREAK = 264,                   /* BREAK  */
    CLASS = 265,                   /* CLASS  */
    CONTINUE = 266,                /* CONTINUE  */
    DEF = 267,                     /* DEF  */
    DEL = 268,                     /* DEL  */
    ELIF = 269,                    /* ELIF  */
    ELSE = 270,                    /* ELSE  */
    EXCEPT = 271,                  /* EXCEPT  */
    FINALLY = 272,                 /* FINALLY  */
    FOR = 273,                     /* FOR  */
    FROM = 274,                    /* FROM  */
    GLOBAL = 275,                  /* GLOBAL  */
    IF = 276,                      /* IF  */
    IMPORT = 277,                  /* IMPORT  */
    COMMA = 278,                   /* COMMA  */
    DOT = 279,                     /* DOT  */
    COL = 280,                     /* COL  */
    IN = 281,                      /* IN  */
    IS = 282,                      /* IS  */
    LAMBDA = 283,                  /* LAMBDA  */
    NOT = 284,                     /* NOT  */
    OR = 285,                      /* OR  */
    COLON = 286,                   /* COLON  */
    PASS = 287,                    /* PASS  */
    RAISE = 288,                   /* RAISE  */
    RETURN = 289,                  /* RETURN  */
    TRY = 290,                     /* TRY  */
    WHILE = 291,                   /* WHILE  */
    WITH = 292,                    /* WITH  */
    YIELD = 293,                   /* YIELD  */
    PRINT = 294,                   /* PRINT  */
    EXEC = 295,                    /* EXEC  */
    INC = 296,                     /* INC  */
    DEC = 297,                     /* DEC  */
    EQUAL = 298,                   /* EQUAL  */
    SETDEFAULT = 299,              /* SETDEFAULT  */
    LPAR = 300,                    /* LPAR  */
    RPAR = 301,                    /* RPAR  */
    LESS_THAN_OP = 302,            /* LESS_THAN_OP  */
    GREATER_THAN_OP = 303,         /* GREATER_THAN_OP  */
    MINUS = 304,                   /* MINUS  */
    AND_EXP = 305,                 /* AND_EXP  */
    NEWLINE = 306,                 /* NEWLINE  */
    LBRA = 307,                    /* LBRA  */
    RBRA = 308,                    /* RBRA  */
    PAPAKI = 309,                  /* PAPAKI  */
    QUOTATION = 310,               /* QUOTATION  */
    APOSTROPHE = 311,              /* APOSTROPHE  */
    ITEMS = 312,                   /* ITEMS  */
    ELLIPSIS = 313,                /* ELLIPSIS  */
    RIGHT_ASSIGN = 314,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 315,             /* LEFT_ASSIGN  */
    ADD_ASSIGN = 316,              /* ADD_ASSIGN  */
    EXA = 317,                     /* EXA  */
    SUB_ASSIGN = 318,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 319,              /* MUL_ASSIGN  */
    POW_ASSIGN = 320,              /* POW_ASSIGN  */
    DIV_ASSIGN = 321,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 322,              /* MOD_ASSIGN  */
    AND_ASSIGN = 323,              /* AND_ASSIGN  */
    PERCENT = 324,                 /* PERCENT  */
    OR_SIGN = 325,                 /* OR_SIGN  */
    XOR_ASSIGN = 326,              /* XOR_ASSIGN  */
    OR_ASSIGN = 327,               /* OR_ASSIGN  */
    RIGHT_OP = 328,                /* RIGHT_OP  */
    LEFT_OP = 329,                 /* LEFT_OP  */
    PTR_OP = 330,                  /* PTR_OP  */
    LE_OP = 331,                   /* LE_OP  */
    GE_OP = 332,                   /* GE_OP  */
    EQ_OP = 333,                   /* EQ_OP  */
    NE_OP = 334,                   /* NE_OP  */
    STAR = 335,                    /* STAR  */
    DOUBLESTAR = 336,              /* DOUBLESTAR  */
    SLASH = 337,                   /* SLASH  */
    DOUBLESLASH = 338,             /* DOUBLESLASH  */
    RANGE = 339,                   /* RANGE  */
    LR_OP = 340,                   /* LR_OP  */
    PLUS = 341,                    /* PLUS  */
    XOR = 342,                     /* XOR  */
    NOT_SIGN = 343,                /* NOT_SIGN  */
    DECINTEGER = 344,              /* DECINTEGER  */
    OCTINTEGER = 345,              /* OCTINTEGER  */
    HEXINTEGER = 346,              /* HEXINTEGER  */
    POINTFLOAT = 347,              /* POINTFLOAT  */
    EXPONENTFLOAT = 348,           /* EXPONENTFLOAT  */
    IDENTIFIER = 349,              /* IDENTIFIER  */
    SHORTSTRING = 350,             /* SHORTSTRING  */
    LONGSTRING = 351,              /* LONGSTRING  */
    IMAGNUMBER = 352               /* IMAGNUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parser.y"

    struct Variable nval;
   

#line 175 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
