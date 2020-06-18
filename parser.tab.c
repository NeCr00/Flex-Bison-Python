/* A Bison parser, made by GNU Bison 3.6.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  extern int yylineno;
   
  void yyerror(const char *s);

int line;


#line 88 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
struct Array functions;

#line 131 "parser.tab.c"

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
    AND_EXP = 304,                 /* AND_EXP  */
    NEWLINE = 305,                 /* NEWLINE  */
    LBRA = 306,                    /* LBRA  */
    RBRA = 307,                    /* RBRA  */
    PAPAKI = 308,                  /* PAPAKI  */
    QUOTATION = 309,               /* QUOTATION  */
    APOSTROPHE = 310,              /* APOSTROPHE  */
    ITEMS = 311,                   /* ITEMS  */
    ELLIPSIS = 312,                /* ELLIPSIS  */
    RIGHT_ASSIGN = 313,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 314,             /* LEFT_ASSIGN  */
    ADD_ASSIGN = 315,              /* ADD_ASSIGN  */
    EXA = 316,                     /* EXA  */
    SUB_ASSIGN = 317,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 318,              /* MUL_ASSIGN  */
    POW_ASSIGN = 319,              /* POW_ASSIGN  */
    DIV_ASSIGN = 320,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 321,              /* MOD_ASSIGN  */
    AND_ASSIGN = 322,              /* AND_ASSIGN  */
    PERCENT = 323,                 /* PERCENT  */
    OR_SIGN = 324,                 /* OR_SIGN  */
    XOR_ASSIGN = 325,              /* XOR_ASSIGN  */
    OR_ASSIGN = 326,               /* OR_ASSIGN  */
    RIGHT_OP = 327,                /* RIGHT_OP  */
    LEFT_OP = 328,                 /* LEFT_OP  */
    PTR_OP = 329,                  /* PTR_OP  */
    LE_OP = 330,                   /* LE_OP  */
    GE_OP = 331,                   /* GE_OP  */
    EQ_OP = 332,                   /* EQ_OP  */
    NE_OP = 333,                   /* NE_OP  */
    DOUBLESTAR = 334,              /* DOUBLESTAR  */
    DOUBLESLASH = 335,             /* DOUBLESLASH  */
    RANGE = 336,                   /* RANGE  */
    LR_OP = 337,                   /* LR_OP  */
    XOR = 338,                     /* XOR  */
    NOT_SIGN = 339,                /* NOT_SIGN  */
    PLUS = 340,                    /* PLUS  */
    MINUS = 341,                   /* MINUS  */
    STAR = 342,                    /* STAR  */
    SLASH = 343,                   /* SLASH  */
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
#line 28 "parser.y"

    struct Variable nval;
	

#line 250 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FALSE = 3,                      /* FALSE  */
  YYSYMBOL_NONE = 4,                       /* NONE  */
  YYSYMBOL_TRUE = 5,                       /* TRUE  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_AS = 7,                         /* AS  */
  YYSYMBOL_ASSERT = 8,                     /* ASSERT  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_CONTINUE = 11,                  /* CONTINUE  */
  YYSYMBOL_DEF = 12,                       /* DEF  */
  YYSYMBOL_DEL = 13,                       /* DEL  */
  YYSYMBOL_ELIF = 14,                      /* ELIF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_EXCEPT = 16,                    /* EXCEPT  */
  YYSYMBOL_FINALLY = 17,                   /* FINALLY  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_FROM = 19,                      /* FROM  */
  YYSYMBOL_GLOBAL = 20,                    /* GLOBAL  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_IMPORT = 22,                    /* IMPORT  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_DOT = 24,                       /* DOT  */
  YYSYMBOL_COL = 25,                       /* COL  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_IS = 27,                        /* IS  */
  YYSYMBOL_LAMBDA = 28,                    /* LAMBDA  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_COLON = 31,                     /* COLON  */
  YYSYMBOL_PASS = 32,                      /* PASS  */
  YYSYMBOL_RAISE = 33,                     /* RAISE  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_TRY = 35,                       /* TRY  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_WITH = 37,                      /* WITH  */
  YYSYMBOL_YIELD = 38,                     /* YIELD  */
  YYSYMBOL_PRINT = 39,                     /* PRINT  */
  YYSYMBOL_EXEC = 40,                      /* EXEC  */
  YYSYMBOL_INC = 41,                       /* INC  */
  YYSYMBOL_DEC = 42,                       /* DEC  */
  YYSYMBOL_EQUAL = 43,                     /* EQUAL  */
  YYSYMBOL_SETDEFAULT = 44,                /* SETDEFAULT  */
  YYSYMBOL_LPAR = 45,                      /* LPAR  */
  YYSYMBOL_RPAR = 46,                      /* RPAR  */
  YYSYMBOL_LESS_THAN_OP = 47,              /* LESS_THAN_OP  */
  YYSYMBOL_GREATER_THAN_OP = 48,           /* GREATER_THAN_OP  */
  YYSYMBOL_AND_EXP = 49,                   /* AND_EXP  */
  YYSYMBOL_NEWLINE = 50,                   /* NEWLINE  */
  YYSYMBOL_LBRA = 51,                      /* LBRA  */
  YYSYMBOL_RBRA = 52,                      /* RBRA  */
  YYSYMBOL_PAPAKI = 53,                    /* PAPAKI  */
  YYSYMBOL_QUOTATION = 54,                 /* QUOTATION  */
  YYSYMBOL_APOSTROPHE = 55,                /* APOSTROPHE  */
  YYSYMBOL_ITEMS = 56,                     /* ITEMS  */
  YYSYMBOL_ELLIPSIS = 57,                  /* ELLIPSIS  */
  YYSYMBOL_RIGHT_ASSIGN = 58,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 59,               /* LEFT_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 60,                /* ADD_ASSIGN  */
  YYSYMBOL_EXA = 61,                       /* EXA  */
  YYSYMBOL_SUB_ASSIGN = 62,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 63,                /* MUL_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 64,                /* POW_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 65,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 66,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 67,                /* AND_ASSIGN  */
  YYSYMBOL_PERCENT = 68,                   /* PERCENT  */
  YYSYMBOL_OR_SIGN = 69,                   /* OR_SIGN  */
  YYSYMBOL_XOR_ASSIGN = 70,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 71,                 /* OR_ASSIGN  */
  YYSYMBOL_RIGHT_OP = 72,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_OP = 73,                   /* LEFT_OP  */
  YYSYMBOL_PTR_OP = 74,                    /* PTR_OP  */
  YYSYMBOL_LE_OP = 75,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 76,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 77,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 78,                     /* NE_OP  */
  YYSYMBOL_DOUBLESTAR = 79,                /* DOUBLESTAR  */
  YYSYMBOL_DOUBLESLASH = 80,               /* DOUBLESLASH  */
  YYSYMBOL_RANGE = 81,                     /* RANGE  */
  YYSYMBOL_LR_OP = 82,                     /* LR_OP  */
  YYSYMBOL_XOR = 83,                       /* XOR  */
  YYSYMBOL_NOT_SIGN = 84,                  /* NOT_SIGN  */
  YYSYMBOL_PLUS = 85,                      /* PLUS  */
  YYSYMBOL_MINUS = 86,                     /* MINUS  */
  YYSYMBOL_STAR = 87,                      /* STAR  */
  YYSYMBOL_SLASH = 88,                     /* SLASH  */
  YYSYMBOL_DECINTEGER = 89,                /* DECINTEGER  */
  YYSYMBOL_OCTINTEGER = 90,                /* OCTINTEGER  */
  YYSYMBOL_HEXINTEGER = 91,                /* HEXINTEGER  */
  YYSYMBOL_POINTFLOAT = 92,                /* POINTFLOAT  */
  YYSYMBOL_EXPONENTFLOAT = 93,             /* EXPONENTFLOAT  */
  YYSYMBOL_IDENTIFIER = 94,                /* IDENTIFIER  */
  YYSYMBOL_SHORTSTRING = 95,               /* SHORTSTRING  */
  YYSYMBOL_LONGSTRING = 96,                /* LONGSTRING  */
  YYSYMBOL_IMAGNUMBER = 97,                /* IMAGNUMBER  */
  YYSYMBOL_98_l_ = 98,                     /* 'l'  */
  YYSYMBOL_99_L_ = 99,                     /* 'L'  */
  YYSYMBOL_YYACCEPT = 100,                 /* $accept  */
  YYSYMBOL_program = 101,                  /* program  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_return_stmt = 104,              /* return_stmt  */
  YYSYMBOL_call = 105,                     /* call  */
  YYSYMBOL_primary = 106,                  /* primary  */
  YYSYMBOL_lambda_form = 107,              /* lambda_form  */
  YYSYMBOL_lam_parameters = 108,           /* lam_parameters  */
  YYSYMBOL_print_stmt = 109,               /* print_stmt  */
  YYSYMBOL_expression_list = 110,          /* expression_list  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_atom = 112,                     /* atom  */
  YYSYMBOL_assignment_stmt = 113,          /* assignment_stmt  */
  YYSYMBOL_assignment_stmt_targer_list = 114, /* assignment_stmt_targer_list  */
  YYSYMBOL_target_list = 115,              /* target_list  */
  YYSYMBOL_target = 116,                   /* target  */
  YYSYMBOL_assignment_op = 117,            /* assignment_op  */
  YYSYMBOL_arithmetic_op = 118,            /* arithmetic_op  */
  YYSYMBOL_comparison_op = 119,            /* comparison_op  */
  YYSYMBOL_logical_op = 120,               /* logical_op  */
  YYSYMBOL_bitwise_op = 121,               /* bitwise_op  */
  YYSYMBOL_literal = 122,                  /* literal  */
  YYSYMBOL_import_stmt = 123,              /* import_stmt  */
  YYSYMBOL_module = 124,                   /* module  */
  YYSYMBOL_relative_module = 125,          /* relative_module  */
  YYSYMBOL_dots = 126,                     /* dots  */
  YYSYMBOL_modules = 127,                  /* modules  */
  YYSYMBOL_import_stmt_identifiers = 128,  /* import_stmt_identifiers  */
  YYSYMBOL_name = 129,                     /* name  */
  YYSYMBOL_if_stmt = 130,                  /* if_stmt  */
  YYSYMBOL_elif_stmt = 131,                /* elif_stmt  */
  YYSYMBOL_for_stmt = 132,                 /* for_stmt  */
  YYSYMBOL_for_target_list = 133,          /* for_target_list  */
  YYSYMBOL_for_target = 134,               /* for_target  */
  YYSYMBOL_funcdef = 135,                  /* funcdef  */
  YYSYMBOL_decorators = 136,               /* decorators  */
  YYSYMBOL_decorator = 137,                /* decorator  */
  YYSYMBOL_dotted_name = 138,              /* dotted_name  */
  YYSYMBOL_dot_identifiers = 139,          /* dot_identifiers  */
  YYSYMBOL_parameter_list = 140,           /* parameter_list  */
  YYSYMBOL_defparameter = 141,             /* defparameter  */
  YYSYMBOL_defparameters = 142,            /* defparameters  */
  YYSYMBOL_sublist = 143,                  /* sublist  */
  YYSYMBOL_parameter = 144,                /* parameter  */
  YYSYMBOL_parameters = 145,               /* parameters  */
  YYSYMBOL_funcname = 146,                 /* funcname  */
  YYSYMBOL_classdef = 147,                 /* classdef  */
  YYSYMBOL_inheritance = 148,              /* inheritance  */
  YYSYMBOL_classname = 149,                /* classname  */
  YYSYMBOL_dict_items = 150,               /* dict_items  */
  YYSYMBOL_dict_setdefault = 151,          /* dict_setdefault  */
  YYSYMBOL_dict_display = 152,             /* dict_display  */
  YYSYMBOL_key_datum_list = 153,           /* key_datum_list  */
  YYSYMBOL_key_datums = 154,               /* key_datums  */
  YYSYMBOL_key_datum = 155,                /* key_datum  */
  YYSYMBOL_attr_identifier = 156,          /* attr_identifier  */
  YYSYMBOL_identifier = 157,               /* identifier  */
  YYSYMBOL_stringliteral = 158,            /* stringliteral  */
  YYSYMBOL_longinteger = 159,              /* longinteger  */
  YYSYMBOL_integer = 160,                  /* integer  */
  YYSYMBOL_floatnumber = 161,              /* floatnumber  */
  YYSYMBOL_imagnumber = 162                /* imagnumber  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  91
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  376

#define YYMAXUTOK   352


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    93,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   117,   118,
     120,   122,   124,   126,   131,   133,   141,   142,   146,   147,
     149,   150,   151,   157,   158,   160,   162,   164,   166,   176,
     178,   180,   185,   188,   190,   192,   194,   198,   199,   200,
     201,   202,   203,   207,   209,   211,   213,   215,   217,   224,
     227,   229,   234,   236,   240,   242,   243,   246,   248,   250,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   272,   273,   274,   277,   278,   279,   280,   281,   282,
     285,   286,   287,   288,   289,   290,   291,   294,   295,   296,
     297,   298,   299,   305,   307,   309,   311,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   340,   341,   344,   345,   346,   349,
     350,   352,   353,   354,   355,   359,   360,   361,   362,   364,
     371,   372,   373,   374,   377,   378,   382,   383,   384,   387,
     388,   389,   392,   393,   398,   399,   400,   401,   404,   405,
     408,   409,   412,   413,   416,   417,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   432,   433,   436,   437,
     440,   441,   442,   443,   446,   447,   450,   451,   454,   460,
     461,   464,   465,   468,   473,   477,   481,   482,   485,   486,
     487,   488,   491,   492,   495,   500,   502,   504,   508,   514,
     516,   521,   523,   529,   531,   533,   538,   540,   544
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FALSE", "NONE",
  "TRUE", "AND", "AS", "ASSERT", "BREAK", "CLASS", "CONTINUE", "DEF",
  "DEL", "ELIF", "ELSE", "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL",
  "IF", "IMPORT", "COMMA", "DOT", "COL", "IN", "IS", "LAMBDA", "NOT", "OR",
  "COLON", "PASS", "RAISE", "RETURN", "TRY", "WHILE", "WITH", "YIELD",
  "PRINT", "EXEC", "INC", "DEC", "EQUAL", "SETDEFAULT", "LPAR", "RPAR",
  "LESS_THAN_OP", "GREATER_THAN_OP", "AND_EXP", "NEWLINE", "LBRA", "RBRA",
  "PAPAKI", "QUOTATION", "APOSTROPHE", "ITEMS", "ELLIPSIS", "RIGHT_ASSIGN",
  "LEFT_ASSIGN", "ADD_ASSIGN", "EXA", "SUB_ASSIGN", "MUL_ASSIGN",
  "POW_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "PERCENT",
  "OR_SIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "DOUBLESTAR", "DOUBLESLASH", "RANGE",
  "LR_OP", "XOR", "NOT_SIGN", "PLUS", "MINUS", "STAR", "SLASH",
  "DECINTEGER", "OCTINTEGER", "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT",
  "IDENTIFIER", "SHORTSTRING", "LONGSTRING", "IMAGNUMBER", "'l'", "'L'",
  "$accept", "program", "statement_list", "statement", "return_stmt",
  "call", "primary", "lambda_form", "lam_parameters", "print_stmt",
  "expression_list", "expression", "atom", "assignment_stmt",
  "assignment_stmt_targer_list", "target_list", "target", "assignment_op",
  "arithmetic_op", "comparison_op", "logical_op", "bitwise_op", "literal",
  "import_stmt", "module", "relative_module", "dots", "modules",
  "import_stmt_identifiers", "name", "if_stmt", "elif_stmt", "for_stmt",
  "for_target_list", "for_target", "funcdef", "decorators", "decorator",
  "dotted_name", "dot_identifiers", "parameter_list", "defparameter",
  "defparameters", "sublist", "parameter", "parameters", "funcname",
  "classdef", "inheritance", "classname", "dict_items", "dict_setdefault",
  "dict_display", "key_datum_list", "key_datums", "key_datum",
  "attr_identifier", "identifier", "stringliteral", "longinteger",
  "integer", "floatnumber", "imagnumber", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   108,    76
};
#endif

#define YYPACT_NINF (-258)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     276,   -54,   -54,     1,    -7,  1246,   -11,   -18,  1314,   496,
      20,   -54,   188,    43,   276,  -258,  -258,  -258,    48,  -258,
    -258,  -258,   579,    11,  -258,  -258,  -258,  -258,  -258,    14,
    -258,  -258,  -258,  -258,     7,   130,  -258,   187,  -258,    87,
    -258,     1,    13,  -258,  -258,  -258,    34,    39,    -5,  -258,
    1246,  1371,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
     574,  -258,  -258,  -258,  -258,   128,   138,  -258,  -258,    23,
    -258,  -258,   -54,   112,   206,  1246,   202,   128,   140,  1314,
     159,  1236,  1314,  1314,   159,   685,    -2,   128,   140,   143,
     165,  -258,  -258,   838,  1382,  -258,  -258,   159,   105,   113,
     172,    20,  -258,   -54,  -258,   -54,   -21,   -54,   276,   906,
     192,    72,     4,    20,  1110,   -54,    -3,  -258,    34,   760,
    -258,   828,   185,   220,  -258,  -258,   212,   222,  -258,   276,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  1246,  1246,  1246,  1246,
    1246,  1246,  1246,  1246,  1246,   -28,  -258,  -258,   160,   156,
     156,   -54,   226,  1236,   -54,  1246,   -54,   228,   760,  1246,
     207,     7,   159,   685,  -258,   209,  -258,   -54,   233,  -258,
      22,   128,  -258,  -258,   213,  -258,   214,   221,  -258,   223,
     128,   140,   276,  -258,    97,   276,    29,   229,   -54,   -54,
     216,   242,    52,   224,  -258,  -258,  -258,   227,   205,  -258,
     -54,  -258,   217,  -258,  1246,  -258,  1246,   248,  -258,  -258,
      41,  1304,  1304,  1372,  1372,  1236,  1236,  1236,  1236,  1236,
     156,  -258,  -258,   250,   215,   -54,   128,   140,  1236,  1246,
    1236,  -258,   231,  -258,   -54,  -258,    96,  1246,   236,  1178,
    -258,   276,   239,   255,   276,  -258,   256,   259,   241,   -54,
     -54,   268,  1246,  1314,   276,   103,   156,   -54,   269,  1236,
    -258,  1246,  1246,   262,   232,  -258,   226,   156,   171,   896,
    -258,  -258,   265,   254,   964,  -258,  -258,   101,  -258,    29,
     279,   276,   234,   276,  -258,   282,   260,  1236,   104,   182,
     156,   -17,  -258,   115,   284,   305,   -54,  -258,  1032,   276,
    1246,   283,   219,   156,  -258,   276,   286,  1246,  -258,  -258,
      29,   -54,   276,   243,   287,   289,   117,  -258,   -13,  -258,
     269,   156,   316,   276,   276,  1100,   276,  -258,   276,   276,
    1168,  -258,  -258,   -54,   276,   276,    18,  -258,   134,  -258,
    -258,   156,   276,   276,   276,   276,  -258,  -258,   276,   276,
    -258,    50,  -258,  -258,   276,  -258
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,    28,    18,    33,
       0,     0,   208,     0,     3,     5,    14,    13,     0,    15,
      10,     7,     0,     0,    64,     6,     8,     9,    11,     0,
     158,    12,    17,    16,    68,    24,   208,     0,   193,     0,
     188,     0,     0,   149,   152,   129,   126,     0,   128,   125,
       0,     0,   213,   214,   215,   216,   217,   209,   210,   218,
       0,    42,    53,    58,    57,    56,    54,   104,   105,    55,
     103,   106,     0,   107,     0,     0,     0,    30,    29,     0,
      19,    41,     0,     0,    35,    34,     0,    68,   205,     0,
     162,     1,     4,     0,     0,    60,    61,    59,     0,    56,
      54,    66,    62,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,     0,   130,   127,     0,
     196,     0,     0,   198,    90,    94,    93,    91,    92,     0,
      87,    86,    97,    79,    80,    70,    71,    72,    73,    74,
      75,    76,    81,    98,    77,    78,   102,   101,    88,    89,
      84,    85,    82,    83,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   212,   133,     0,
       0,     0,   109,    26,     0,     0,     0,     0,    41,     0,
       0,    56,    37,    36,    69,     0,   160,     0,   163,    20,
       0,    56,    63,    65,     0,   206,     0,     0,   207,     0,
      25,    24,   189,   191,     0,     0,     0,     0,     0,     0,
       0,   169,     0,   176,   184,   153,   150,     0,     0,   124,
       0,   123,   111,    52,     0,   197,   199,   200,    95,    96,
     140,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,   139,   108,     0,   133,     0,    32,    31,    27,     0,
      39,    38,     0,   164,     0,    21,     0,     0,     0,     0,
     192,   190,     0,   180,     0,   168,   166,     0,   178,     0,
       0,   174,     0,     0,     0,     0,     0,     0,   113,   204,
     202,   201,     0,     0,   142,   134,   110,     0,   131,    39,
     161,   165,     0,     0,     0,   194,    22,     0,   185,   181,
     182,   154,     0,     0,   173,   171,   179,   177,     0,   146,
       0,     0,   115,     0,   112,   135,     0,   203,     0,     0,
       0,     0,   134,     0,    40,     0,     0,     0,    23,   186,
     183,     0,   156,     0,     0,     0,     0,   119,     0,   117,
     114,     0,   137,     0,   141,     0,     0,   132,   155,     0,
       0,   187,   167,     0,     0,     0,     0,   116,     0,   121,
     136,     0,   144,     0,   143,   157,   195,   172,   147,   148,
     120,     0,   118,   138,   145,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,   218,   184,  -258,     8,   230,   302,  -258,  -258,
      16,   456,  -258,  -258,  -258,    10,   -64,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,    -1,  -258,  -258,   -66,  -257,  -142,
    -258,  -258,  -258,   292,  -258,  -258,  -258,   298,  -258,  -258,
      79,   116,  -258,  -258,  -197,  -258,   237,  -258,  -258,  -258,
    -258,   155,  -258,  -258,  -258,  -211,    78,     0,  -258,  -258,
    -258,  -258,  -258
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    76,    20,
     177,    81,    61,    21,    22,    23,    24,   160,   161,   162,
     163,   164,    62,    25,    46,    47,    48,    74,   278,   242,
      26,   284,    27,    42,    43,    28,    29,    30,    89,   188,
     210,   211,   212,   262,   213,   300,    39,    31,   110,    37,
      32,    63,    64,   122,   227,   123,    65,    66,    67,    68,
      69,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    38,    40,    44,    49,    73,    49,    78,   172,   263,
      88,    90,    72,    75,    35,   280,   196,    45,   313,   117,
      86,   101,   100,   196,    80,    84,   103,   113,   243,   337,
      95,   105,    98,   359,   101,   197,   113,   193,    97,   114,
      36,    44,   220,    91,   184,   179,    41,   118,    49,   216,
     215,     1,   -25,     2,   102,   282,   283,   340,   115,     3,
       4,   116,     5,     6,   370,    10,    36,    11,   255,     7,
     317,   168,    49,    36,   206,     8,    36,    36,    34,   358,
       9,    36,   100,    36,   221,    77,    10,    36,    87,    36,
     180,    36,    34,    93,    11,    36,   375,   206,   285,   182,
      99,    88,   329,    40,    86,   195,   198,   201,    35,   190,
     310,   214,    36,    88,    12,   219,   222,   206,   207,   169,
     179,   166,   167,    36,   179,   204,   311,   179,   101,    35,
     218,   269,   111,   351,   314,    12,   115,   105,   338,   270,
     356,   206,   292,   260,    36,   322,    36,   328,   192,   312,
     334,   208,   105,  -205,   106,    33,   -68,   371,   -25,   209,
     181,   339,   165,   357,   176,   198,    36,   240,   336,    33,
     244,    49,   191,   107,   247,   208,   198,   286,   323,    87,
     372,   347,   179,   209,   115,   200,    34,   253,   185,   187,
      36,    87,     1,   186,     2,   115,   165,   335,    92,   360,
       3,     4,    35,     5,     6,    35,   214,    34,   265,   266,
       7,   -67,   214,   170,   -67,   107,     8,   -24,   108,   373,
     275,     9,   287,   205,   276,   174,  -132,    10,   179,   171,
      35,   -67,   109,   175,   -67,    11,   274,   225,  -131,   115,
     277,   228,  -132,   226,   288,    49,   320,   321,   229,   245,
     241,   249,   246,   251,   291,   252,   214,   254,   256,   257,
     264,    35,   267,    33,    35,   268,   258,   272,   259,   304,
     305,   281,   273,    72,    35,   297,    12,   315,   299,   302,
      34,   290,   295,    34,    33,   298,     1,  -170,     2,   308,
     303,   306,   316,   319,     3,     4,   325,     5,     6,   214,
     326,    35,   330,    35,     7,   333,  -175,   277,    34,    35,
       8,   315,   341,   331,   346,     9,   342,   349,   354,    35,
     355,    10,   353,   361,    96,    35,   202,   104,   271,    11,
     214,   352,    35,   112,     0,   293,     0,   199,   342,    34,
     194,     0,    34,    35,    35,     0,    35,   230,    35,    35,
       0,     0,    34,   367,    35,    35,   315,    33,     0,     0,
      33,     0,    35,    35,    35,    35,     0,     0,    35,    35,
      12,   342,     0,     0,    35,     0,     0,     0,     0,    34,
       0,    34,     0,     0,     0,    33,    92,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    92,     0,    33,     0,     0,    33,
       0,    34,    34,   261,    34,     0,    34,    34,     0,    33,
       0,     0,    34,    34,     0,     0,     0,     0,     0,     0,
      34,    34,    34,    34,     0,    92,    34,    34,     0,     0,
       0,     0,    34,     0,     0,     0,    33,     0,    33,     0,
       0,    60,     0,     0,    33,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
      33,     0,   301,     0,     0,    92,     0,    33,     0,     0,
       0,     0,   309,    92,     0,     0,     0,     0,    33,    33,
       0,    33,     0,    33,    33,     0,   119,   121,     0,    33,
      33,     0,     0,     0,     0,     0,    92,    33,    33,    33,
      33,   332,     0,    33,    33,     0,     0,     0,    92,    33,
       0,   173,    92,     0,     0,   178,     0,   344,   178,   183,
       0,    82,     0,   348,     0,     0,    92,    51,    92,    92,
     178,     0,    92,    92,     0,     0,     0,     0,    92,     0,
       0,   362,     0,     0,   364,     0,     0,   365,    83,     0,
       0,     0,   368,   369,     0,     0,     0,     0,     0,     0,
     124,   374,     0,     0,     0,    52,    53,    54,    55,    56,
      36,    57,    58,    59,     0,     0,     0,     0,     0,     0,
     125,   126,     0,   127,   128,   129,     0,     7,     0,     0,
       0,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   130,   131,   132,    94,     0,     0,     0,     0,     0,
      51,   248,   133,   134,   135,   250,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    12,    57,    58,    59,     0,     0,     0,
     279,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   289,     0,     0,   -41,     0,
       0,   125,   126,   294,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,     0,   130,   131,   132,     0,     0,   121,   318,     0,
       0,     0,     0,   133,   134,   135,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
     148,   149,   150,   151,   152,   153,   124,     0,   154,   155,
     156,   157,   158,   159,     0,     0,   345,     0,     0,     0,
       0,     0,     0,   350,     0,     0,   125,   126,     0,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   130,   131,   132,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   124,   148,   149,   150,   151,   152,
     153,     0,     0,   154,   155,   156,   157,   158,   159,     0,
       0,     0,     0,     0,   125,   126,     0,   127,   128,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,   131,   132,     0,     0,
       0,     0,     0,    79,   189,     0,   133,   134,   135,    51,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   124,   148,   149,   150,   151,   152,   153,     0,
       0,   154,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,   125,   126,     0,   127,   128,    52,    53,    54,
      55,    56,    36,    57,    58,    59,     0,     0,     0,     0,
       0,     0,   324,   130,   131,   132,     0,     0,     0,     0,
       0,    79,   203,     0,   133,   134,   135,    51,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     124,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     155,   156,   157,   158,   159,     0,     0,   327,     0,     0,
     125,   126,     0,   127,   128,    52,    53,    54,    55,    56,
      36,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,     0,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   124,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,   125,   126,
       0,   127,   128,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   124,   148,   149,   150,
     151,   152,   153,     0,     0,   154,   155,   156,   157,   158,
     159,     0,     0,     0,     0,     0,   125,   126,     0,   127,
     128,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
       0,     0,     0,     0,     0,    79,     0,     0,   133,   134,
     135,    51,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   124,   148,   149,   150,   151,   152,
     153,     0,     0,   154,   155,   156,   157,   158,   159,     0,
       0,   217,     0,     0,   125,   126,     0,   127,   128,    52,
      53,    54,    55,    56,    36,    57,    58,    59,     0,     0,
       0,     0,     0,     0,   366,   130,   131,   132,     0,     0,
       0,     0,     0,    79,   296,     0,   133,   134,   135,    51,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   124,   148,   149,   150,   151,   152,   153,     0,
       0,   154,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,   125,   126,     0,   127,   128,    52,    53,    54,
      55,    56,    36,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,     0,     0,     0,     0,
       0,    50,     0,     0,   133,   134,   135,    51,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     124,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
     125,   126,     0,   127,   128,    52,    53,    54,    55,    56,
      36,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,     0,     0,     0,     0,     0,    79,
       0,     0,   133,   134,   135,    51,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   124,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   155,     0,
       0,   158,   159,     0,     0,     0,     0,     0,   125,   126,
       0,   127,   128,    52,    53,    54,    55,    56,    36,    57,
      58,    59,     0,     0,     0,     0,    50,     0,     0,   130,
     131,   132,    51,   120,     0,     0,     0,    94,     0,     0,
     133,   134,   135,    51,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
     151,   152,   153,     0,     0,   154,   155,     0,     0,     0,
      52,    53,    54,    55,    56,    36,    57,    58,    59,     0,
       0,    52,    53,    54,    55,    56,    12,    57,    58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,     6,     6,     7,    74,   206,
      10,    11,    23,    31,    14,   226,    44,    24,   275,    24,
      10,    23,    22,    44,     8,     9,    12,    23,   170,    46,
      22,    24,    22,    46,    23,    56,    23,   101,    22,    26,
      94,    41,    45,     0,    46,    23,    45,    48,    48,   113,
      46,    10,    45,    12,    43,    14,    15,   314,    24,    18,
      19,    22,    21,    22,    46,    45,    94,    53,    46,    28,
     281,    72,    72,    94,    45,    34,    94,    94,     0,   336,
      39,    94,    82,    94,    87,     7,    45,    94,    10,    94,
      82,    94,    14,    45,    53,    94,    46,    45,   240,    83,
      22,   101,   299,   103,    94,   105,   106,   107,   108,    93,
       7,   111,    94,   113,    94,   115,   116,    45,    46,     7,
      23,    98,    99,    94,    23,   109,    23,    23,    23,   129,
     114,    79,    45,   330,   276,    94,    24,    24,    23,    87,
      23,    45,    46,    46,    94,   287,    94,    46,    43,    46,
      46,    79,    24,    23,    24,     0,    43,    23,    45,    87,
      82,    46,    24,    46,    24,   165,    94,     7,   310,    14,
     171,   171,    94,    43,   174,    79,   176,   243,     7,   101,
      46,   323,    23,    87,    24,   107,   108,   187,    45,    24,
      94,   113,    10,    50,    12,    24,    24,    15,    14,   341,
      18,    19,   202,    21,    22,   205,   206,   129,   208,   209,
      28,    23,   212,     7,    26,    43,    34,    45,    31,   361,
     220,    39,     7,    31,     7,    23,     7,    45,    23,    23,
     230,    43,    45,    31,    46,    53,    31,    52,    23,    24,
      23,    29,    23,    23,   245,   245,    14,    15,    26,    23,
      94,    23,   174,    46,   254,    46,   256,    24,    45,    45,
      31,   261,    46,   108,   264,    23,    45,    43,    45,   269,
     270,    23,    45,    23,   274,   259,    94,   277,    23,    23,
     202,    50,    46,   205,   129,    46,    10,    46,    12,   273,
      31,    23,    23,    31,    18,    19,    31,    21,    22,   299,
      46,   301,    23,   303,    28,    23,    46,    23,   230,   309,
      34,   311,     7,    79,    31,    39,   316,    31,    31,   319,
      31,    45,    79,     7,    22,   325,   108,    29,   212,    53,
     330,   331,   332,    41,    -1,   256,    -1,   107,   338,   261,
     103,    -1,   264,   343,   344,    -1,   346,   129,   348,   349,
      -1,    -1,   274,   353,   354,   355,   356,   202,    -1,    -1,
     205,    -1,   362,   363,   364,   365,    -1,    -1,   368,   369,
      94,   371,    -1,    -1,   374,    -1,    -1,    -1,    -1,   301,
      -1,   303,    -1,    -1,    -1,   230,   202,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
     332,    -1,    -1,    -1,   230,    -1,   261,    -1,    -1,   264,
      -1,   343,   344,   205,   346,    -1,   348,   349,    -1,   274,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,
     362,   363,   364,   365,    -1,   261,   368,   369,    -1,    -1,
      -1,    -1,   374,    -1,    -1,    -1,   301,    -1,   303,    -1,
      -1,     5,    -1,    -1,   309,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,
     325,    -1,   264,    -1,    -1,   301,    -1,   332,    -1,    -1,
      -1,    -1,   274,   309,    -1,    -1,    -1,    -1,   343,   344,
      -1,   346,    -1,   348,   349,    -1,    50,    51,    -1,   354,
     355,    -1,    -1,    -1,    -1,    -1,   332,   362,   363,   364,
     365,   303,    -1,   368,   369,    -1,    -1,    -1,   344,   374,
      -1,    75,   348,    -1,    -1,    79,    -1,   319,    82,    83,
      -1,    45,    -1,   325,    -1,    -1,   362,    51,   364,   365,
      94,    -1,   368,   369,    -1,    -1,    -1,    -1,   374,    -1,
      -1,   343,    -1,    -1,   346,    -1,    -1,   349,    72,    -1,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,
       6,   363,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    -1,    28,    -1,    -1,
      -1,    -1,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    47,    48,    49,    45,    -1,    -1,    -1,    -1,    -1,
      51,   175,    58,    59,    60,   179,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
     224,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    23,    -1,
      -1,    26,    27,   257,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,   281,   282,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,     6,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,   327,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     6,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    58,    59,    60,    51,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     6,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    58,    59,    60,    51,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       6,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     6,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     6,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    58,    59,
      60,    51,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     6,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    81,    -1,    -1,    26,    27,    -1,    29,    30,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    58,    59,    60,    51,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     6,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    58,    59,    60,    51,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       6,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    58,    59,    60,    51,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     6,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    45,    -1,    -1,    47,
      48,    49,    51,    52,    -1,    -1,    -1,    45,    -1,    -1,
      58,    59,    60,    51,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      45,    53,    94,   101,   102,   103,   104,   105,   106,   107,
     109,   113,   114,   115,   116,   123,   130,   132,   135,   136,
     137,   147,   150,   151,   156,   157,    94,   149,   157,   146,
     157,    45,   133,   134,   157,    24,   124,   125,   126,   157,
      45,    51,    89,    90,    91,    92,    93,    95,    96,    97,
     111,   112,   122,   151,   152,   156,   157,   158,   159,   160,
     161,   162,    23,   124,   127,    31,   108,   156,   157,    45,
     110,   111,    45,    72,   110,   111,   115,   156,   157,   138,
     157,     0,   103,    45,    45,   105,   107,   110,   115,   156,
     157,    23,    43,    12,   137,    24,    24,    43,    31,    45,
     148,    45,   133,    23,    26,    24,    22,    24,   124,   111,
      52,   111,   153,   155,     6,    26,    27,    29,    30,    31,
      47,    48,    49,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    75,    76,
      77,    78,    79,    80,    83,    84,    85,    86,    87,    88,
     117,   118,   119,   120,   121,    24,    98,    99,   124,     7,
       7,    23,   127,   111,    23,    31,    24,   110,   111,    23,
     105,   156,   110,   111,    46,    45,    50,    24,   139,    46,
     110,   156,    43,   116,   146,   157,    44,    56,   157,   106,
     156,   157,   102,    46,   110,    31,    45,    46,    79,    87,
     140,   141,   142,   144,   157,    46,   116,    81,   110,   157,
      45,    87,   157,    46,    31,    52,    23,   154,    29,    26,
     102,   111,   111,   111,   111,   111,   111,   111,   111,   111,
       7,    94,   129,   129,   124,    23,   156,   157,   111,    23,
     111,    46,    46,   157,    24,    46,    45,    45,    45,    45,
      46,   102,   143,   144,    31,   157,   157,    46,    23,    79,
      87,   141,    43,    45,    31,   157,     7,    23,   128,   111,
     155,    23,    14,    15,   131,   129,   127,     7,   124,   111,
      50,   157,    46,   140,   111,    46,    46,   110,    46,    23,
     145,   102,    23,    31,   157,   157,    23,   111,   110,   102,
       7,    23,    46,   128,   129,   157,    23,   155,   111,    31,
      14,    15,   129,     7,    46,    31,    46,    23,    46,   144,
      23,    79,   102,    23,    46,    15,   129,    46,    23,    46,
     128,     7,   157,    31,   102,   111,    31,   129,   102,    31,
     111,   144,   157,    79,    31,    31,    23,    46,   128,    46,
     129,     7,   102,    31,   102,   102,    46,   157,   102,   102,
      46,    23,    46,   129,   102,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   115,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   127,   127,   128,   128,   128,   128,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   132,   133,
     133,   133,   134,   134,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   142,   142,
     143,   143,   143,   143,   144,   144,   145,   145,   146,   147,
     147,   148,   148,   149,   150,   151,   152,   152,   153,   153,
     153,   153,   154,   154,   155,   156,   156,   156,   157,   158,
     158,   159,   159,   160,   160,   160,   161,   161,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     4,     5,     6,     1,     1,     3,     4,     0,     1,
       1,     3,     3,     1,     2,     2,     3,     3,     4,     3,
       5,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       5,     4,     6,     5,     7,     6,     8,     7,     9,     7,
       9,     8,    10,     4,     3,     1,     1,     2,     1,     1,
       2,     3,     5,     2,     4,     2,     4,     3,     5,     1,
       4,     7,     5,     8,     4,     5,     6,     9,     9,     1,
       3,     2,     1,     3,     6,     7,     7,     8,     1,     2,
       3,     5,     1,     2,     2,     3,     2,     5,     2,     1,
       2,     3,     6,     3,     2,     3,     1,     3,     2,     3,
       1,     2,     2,     3,     1,     3,     2,     3,     1,     4,
       5,     2,     3,     1,     5,     8,     2,     3,     1,     2,
       2,     3,     2,     3,     3,     1,     3,     3,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5:
#line 98 "parser.y"
                   {line++;}
#line 1908 "parser.tab.c"
    break;

  case 20:
#line 121 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval); fun_check(&functions,(yyvsp[-2].nval));}
#line 1914 "parser.tab.c"
    break;

  case 21:
#line 123 "parser.y"
        {(yyval.nval) = (yyvsp[-3].nval); fun_check(&functions,(yyvsp[-3].nval));}
#line 1920 "parser.tab.c"
    break;

  case 22:
#line 125 "parser.y"
        {(yyval.nval) = (yyvsp[-4].nval); fun_check(&functions,(yyvsp[-2].nval));}
#line 1926 "parser.tab.c"
    break;

  case 23:
#line 127 "parser.y"
        {(yyval.nval) = (yyvsp[-5].nval); fun_check(&functions,(yyvsp[-3].nval));}
#line 1932 "parser.tab.c"
    break;

  case 24:
#line 132 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1938 "parser.tab.c"
    break;

  case 25:
#line 134 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1944 "parser.tab.c"
    break;

  case 29:
#line 148 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); (yyval.nval).type = LAM ;insertArray(&variables, (yyval.nval)); }
#line 1950 "parser.tab.c"
    break;

  case 34:
#line 159 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1956 "parser.tab.c"
    break;

  case 35:
#line 161 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1962 "parser.tab.c"
    break;

  case 36:
#line 163 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1968 "parser.tab.c"
    break;

  case 37:
#line 165 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1974 "parser.tab.c"
    break;

  case 38:
#line 167 "parser.y"
                {print((yyvsp[-1].nval),&variables); }
#line 1980 "parser.tab.c"
    break;

  case 39:
#line 177 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1986 "parser.tab.c"
    break;

  case 40:
#line 179 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1992 "parser.tab.c"
    break;

  case 41:
#line 181 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1998 "parser.tab.c"
    break;

  case 42:
#line 186 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2004 "parser.tab.c"
    break;

  case 43:
#line 189 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 2010 "parser.tab.c"
    break;

  case 44:
#line 191 "parser.y"
        {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 2016 "parser.tab.c"
    break;

  case 45:
#line 193 "parser.y"
        {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1); }
#line 2022 "parser.tab.c"
    break;

  case 46:
#line 195 "parser.y"
        {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 2028 "parser.tab.c"
    break;

  case 52:
#line 204 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2034 "parser.tab.c"
    break;

  case 53:
#line 208 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2040 "parser.tab.c"
    break;

  case 54:
#line 210 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2046 "parser.tab.c"
    break;

  case 55:
#line 212 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2052 "parser.tab.c"
    break;

  case 56:
#line 214 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2058 "parser.tab.c"
    break;

  case 57:
#line 216 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2064 "parser.tab.c"
    break;

  case 58:
#line 218 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2070 "parser.tab.c"
    break;

  case 59:
#line 225 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables));  }
#line 2076 "parser.tab.c"
    break;

  case 61:
#line 230 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables));}
#line 2082 "parser.tab.c"
    break;

  case 62:
#line 235 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2088 "parser.tab.c"
    break;

  case 64:
#line 241 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2094 "parser.tab.c"
    break;

  case 67:
#line 247 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2100 "parser.tab.c"
    break;

  case 68:
#line 249 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2106 "parser.tab.c"
    break;

  case 69:
#line 251 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2112 "parser.tab.c"
    break;

  case 103:
#line 306 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2118 "parser.tab.c"
    break;

  case 104:
#line 308 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2124 "parser.tab.c"
    break;

  case 105:
#line 310 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2130 "parser.tab.c"
    break;

  case 106:
#line 312 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2136 "parser.tab.c"
    break;

  case 188:
#line 455 "parser.y"
{(yyval.nval) = (yyvsp[0].nval); (yyval.nval).type = FUNCTION; insertArray(&functions, (yyval.nval));}
#line 2142 "parser.tab.c"
    break;

  case 194:
#line 474 "parser.y"
{items(&dictionary,&variables);}
#line 2148 "parser.tab.c"
    break;

  case 195:
#line 478 "parser.y"
        {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 2154 "parser.tab.c"
    break;

  case 204:
#line 496 "parser.y"
                { insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 2160 "parser.tab.c"
    break;

  case 205:
#line 501 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2166 "parser.tab.c"
    break;

  case 206:
#line 503 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 2172 "parser.tab.c"
    break;

  case 208:
#line 509 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 2178 "parser.tab.c"
    break;

  case 209:
#line 515 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2184 "parser.tab.c"
    break;

  case 210:
#line 517 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 2190 "parser.tab.c"
    break;

  case 211:
#line 522 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2196 "parser.tab.c"
    break;

  case 212:
#line 524 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2202 "parser.tab.c"
    break;

  case 213:
#line 530 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2208 "parser.tab.c"
    break;

  case 214:
#line 532 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2214 "parser.tab.c"
    break;

  case 215:
#line 534 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2220 "parser.tab.c"
    break;

  case 216:
#line 539 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2226 "parser.tab.c"
    break;

  case 217:
#line 541 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2232 "parser.tab.c"
    break;

  case 218:
#line 545 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2238 "parser.tab.c"
    break;


#line 2242 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 548 "parser.y"



int main(int argc, char** argv) {

  
  initArray(&variables, 5);  // initially 5 elements
  initArray(&dictionary,5);
  initArray(&functions,5);  //initially 5 elements

   extern int yydebug;
   yydebug = 1;

  // Open a file 
  FILE *myfile = fopen(argv[1], "r");
  //  is valid?
  if (!myfile) {
    
    return -1;
  }
  // read the file
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
 
}


void yyerror(const char* s) {
	fprintf(stderr, "Parse error in line %d\n", yylineno);
	exit(1);
}




