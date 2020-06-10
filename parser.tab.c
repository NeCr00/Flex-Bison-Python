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
 
  void yyerror(const char *s);




#line 87 "parser.tab.c"

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
#line 18 "parser.y"


#include "expression.h"
struct Array variables;
struct Array dictionary;

#line 129 "parser.tab.c"

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
   

#line 248 "parser.tab.c"

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
  YYSYMBOL_MINUS = 49,                     /* MINUS  */
  YYSYMBOL_AND_EXP = 50,                   /* AND_EXP  */
  YYSYMBOL_NEWLINE = 51,                   /* NEWLINE  */
  YYSYMBOL_LBRA = 52,                      /* LBRA  */
  YYSYMBOL_RBRA = 53,                      /* RBRA  */
  YYSYMBOL_PAPAKI = 54,                    /* PAPAKI  */
  YYSYMBOL_QUOTATION = 55,                 /* QUOTATION  */
  YYSYMBOL_APOSTROPHE = 56,                /* APOSTROPHE  */
  YYSYMBOL_ITEMS = 57,                     /* ITEMS  */
  YYSYMBOL_ELLIPSIS = 58,                  /* ELLIPSIS  */
  YYSYMBOL_RIGHT_ASSIGN = 59,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 60,               /* LEFT_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 61,                /* ADD_ASSIGN  */
  YYSYMBOL_EXA = 62,                       /* EXA  */
  YYSYMBOL_SUB_ASSIGN = 63,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 64,                /* MUL_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 65,                /* POW_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 66,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 67,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 68,                /* AND_ASSIGN  */
  YYSYMBOL_PERCENT = 69,                   /* PERCENT  */
  YYSYMBOL_OR_SIGN = 70,                   /* OR_SIGN  */
  YYSYMBOL_XOR_ASSIGN = 71,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 72,                 /* OR_ASSIGN  */
  YYSYMBOL_RIGHT_OP = 73,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_OP = 74,                   /* LEFT_OP  */
  YYSYMBOL_PTR_OP = 75,                    /* PTR_OP  */
  YYSYMBOL_LE_OP = 76,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 77,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 78,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 79,                     /* NE_OP  */
  YYSYMBOL_STAR = 80,                      /* STAR  */
  YYSYMBOL_DOUBLESTAR = 81,                /* DOUBLESTAR  */
  YYSYMBOL_SLASH = 82,                     /* SLASH  */
  YYSYMBOL_DOUBLESLASH = 83,               /* DOUBLESLASH  */
  YYSYMBOL_RANGE = 84,                     /* RANGE  */
  YYSYMBOL_LR_OP = 85,                     /* LR_OP  */
  YYSYMBOL_PLUS = 86,                      /* PLUS  */
  YYSYMBOL_XOR = 87,                       /* XOR  */
  YYSYMBOL_NOT_SIGN = 88,                  /* NOT_SIGN  */
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
  YYSYMBOL_start = 101,                    /* start  */
  YYSYMBOL_program = 102,                  /* program  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_return_stmt = 105,              /* return_stmt  */
  YYSYMBOL_call = 106,                     /* call  */
  YYSYMBOL_primary = 107,                  /* primary  */
  YYSYMBOL_lambda_form = 108,              /* lambda_form  */
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
  YYSYMBOL_identifier = 156,               /* identifier  */
  YYSYMBOL_attr_identifier = 157,          /* attr_identifier  */
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
#define YYFINAL  97
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  369

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
       0,    79,    79,    83,    85,    88,    89,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   108,
     109,   111,   113,   115,   117,   122,   124,   130,   131,   136,
     137,   139,   141,   143,   145,   155,   157,   159,   164,   166,
     168,   170,   172,   174,   177,   178,   179,   180,   181,   184,
     186,   188,   190,   192,   194,   201,   203,   207,   209,   211,
     213,   214,   217,   219,   221,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   243,   244,   245,   248,
     249,   250,   251,   252,   253,   256,   257,   258,   259,   260,
     261,   262,   265,   266,   267,   268,   269,   270,   276,   278,
     280,   282,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   311,
     312,   315,   316,   317,   320,   321,   323,   324,   325,   326,
     330,   331,   332,   333,   335,   342,   343,   344,   345,   348,
     349,   353,   354,   355,   358,   359,   360,   363,   364,   369,
     370,   371,   372,   375,   376,   379,   380,   383,   384,   387,
     388,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   403,   404,   407,   408,   411,   412,   413,   414,   417,
     418,   421,   422,   425,   430,   431,   434,   435,   438,   443,
     447,   451,   452,   455,   456,   457,   458,   461,   462,   465,
     470,   474,   476,   481,   483,   488,   490,   496,   498,   500,
     505,   507,   511
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
  "LESS_THAN_OP", "GREATER_THAN_OP", "MINUS", "AND_EXP", "NEWLINE", "LBRA",
  "RBRA", "PAPAKI", "QUOTATION", "APOSTROPHE", "ITEMS", "ELLIPSIS",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "EXA", "SUB_ASSIGN",
  "MUL_ASSIGN", "POW_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "PERCENT", "OR_SIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP",
  "PTR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR",
  "SLASH", "DOUBLESLASH", "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN",
  "DECINTEGER", "OCTINTEGER", "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT",
  "IDENTIFIER", "SHORTSTRING", "LONGSTRING", "IMAGNUMBER", "'l'", "'L'",
  "$accept", "start", "program", "statement_list", "statement",
  "return_stmt", "call", "primary", "lambda_form", "print_stmt",
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
  "identifier", "attr_identifier", "stringliteral", "longinteger",
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

#define YYPACT_NINF (-248)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-202)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     208,   -61,   -61,   -27,    -3,  1288,    -7,   -19,  1308,    51,
       1,   -61,   166,    52,  -248,   208,  -248,  -248,  -248,    94,
    -248,  -248,  -248,  1317,    17,  -248,  -248,  -248,  -248,  -248,
      43,  -248,  -248,  -248,  -248,   231,    14,  -248,   232,  -248,
     116,  -248,   -27,   258,  -248,  -248,  -248,   107,   137,    -2,
    -248,  1288,   443,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   619,  -248,  -248,  -248,  -248,   171,   178,  -248,  -248,
     188,  -248,  -248,   -61,   183,   194,  1288,    13,   -61,   -61,
     173,   185,    84,   163,  -248,  1308,   192,  1249,  1308,  1308,
     192,   697,     8,  -248,   178,   -21,   209,  -248,  -248,   452,
    1317,  -248,   192,    22,   195,   207,     1,  -248,   -61,  -248,
     114,   -61,   -61,   208,   478,   206,   -10,    76,     1,   544,
     -61,    -8,  -248,   107,   766,  -248,   835,   193,   216,  -248,
    -248,   230,   244,  -248,   208,  -248,  -248,  1288,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  1288,  -248,
    1288,  -248,  1288,  -248,  -248,  1288,  1288,  1288,  1288,  1288,
     239,  -248,  -248,   186,   196,   196,   -61,   270,  1249,   249,
     273,   275,  -248,  1288,   197,   -61,   -61,   276,  1288,   278,
     766,  1288,   251,    14,   192,   697,  -248,   259,  -248,   -61,
     283,  -248,    86,   178,  -248,  -248,   264,   265,   266,   267,
     290,   178,  -248,   208,  -248,   103,   208,   284,   271,  -248,
    -248,   277,    67,  -248,   -61,  -248,   218,  -248,  1288,  -248,
    1288,   295,  -248,  -248,    29,  1249,  1249,  1249,  1249,  1249,
    1249,  1249,  1249,  1249,   196,  -248,  -248,   296,   145,   -61,
    -248,    13,   297,   240,  1249,   301,  -248,   214,  1249,  1288,
    1249,  -248,   279,  -248,   -61,  -248,    56,  1288,   281,  1255,
    -248,   208,   208,   300,  1308,   208,   110,   196,   -61,   305,
    1249,  -248,  1288,  1288,   302,   274,  -248,   270,   196,   190,
    -248,    13,   -61,   254,   904,  -248,  -248,   312,   286,   973,
    -248,  -248,   128,   208,   208,   150,   569,   196,    59,  -248,
     157,   313,   337,   -61,  -248,  1042,   208,  1288,   320,   225,
     196,  -248,  -248,   -61,  -248,   208,   321,  1288,  -248,   208,
     322,   323,   165,  -248,    68,  -248,   305,   196,   348,   208,
     208,  1111,   208,  -248,  -248,   208,   208,  1180,   208,   208,
      69,  -248,   175,  -248,  -248,   196,   208,   208,   208,   208,
    -248,   208,   208,  -248,    73,  -248,  -248,   208,  -248
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,    19,    29,
       0,     0,   200,     0,     2,     4,     6,    15,    14,     0,
      16,    11,     8,     0,     0,    59,     7,     9,    10,    12,
       0,   153,    13,    18,    17,    25,    63,   200,     0,   188,
       0,   183,     0,     0,   144,   147,   124,   121,     0,   123,
     120,     0,     0,   207,   208,   209,   210,   211,   203,   204,
     212,     0,    38,    49,    54,    53,    50,    52,    99,   100,
      51,    98,   101,     0,   102,     0,     0,     0,     0,     0,
       0,   164,     0,   171,   179,     0,    20,    37,     0,     0,
      31,    30,     0,   201,    63,     0,   157,     1,     5,     0,
       0,    56,    55,     0,    50,    52,    61,    57,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
       0,     0,   125,   122,     0,   191,     0,     0,   193,    85,
      89,    88,    86,    87,     0,    82,    81,     0,    92,    74,
      75,    65,    66,    67,    68,    69,    70,    71,    76,    93,
      72,    73,    97,    96,    83,    84,    79,    80,     0,    77,
       0,    78,     0,    94,    95,     0,     0,     0,     0,     0,
       0,   205,   206,   128,     0,     0,     0,   104,    27,     0,
     175,   161,   163,     0,   173,     0,     0,   169,     0,     0,
      37,     0,     0,    52,    33,    32,    64,     0,   155,     0,
     158,    21,     0,    52,    58,    60,     0,     0,     0,     0,
      25,    26,   202,   184,   186,     0,     0,     0,     0,   148,
     145,     0,     0,   119,     0,   118,   106,    39,     0,   192,
     194,   195,    90,    91,   135,    41,    43,    42,    40,    44,
      45,    46,    47,    48,     0,   134,   103,     0,   128,     0,
     180,   176,   177,     0,    28,   166,   168,   174,   172,     0,
      35,    34,     0,   159,     0,    22,     0,     0,     0,     0,
     187,   185,     0,     0,     0,     0,     0,     0,     0,   108,
     199,   197,   196,     0,     0,   137,   129,   105,     0,   126,
     181,   178,     0,     0,    35,   156,   160,     0,     0,     0,
     189,    23,     0,   149,     0,     0,   141,     0,     0,   110,
       0,   107,   130,     0,   198,     0,     0,     0,     0,   129,
       0,   182,   162,     0,    36,     0,     0,     0,    24,   151,
       0,     0,     0,   114,     0,   112,   109,     0,   132,     0,
     136,     0,     0,   127,   167,   150,     0,     0,     0,     0,
       0,   111,     0,   116,   131,     0,   139,     0,   138,   152,
     190,   142,   143,   115,     0,   113,   133,   140,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,   -81,   113,  -248,     5,   252,  -248,  -248,
      11,   394,  -248,  -248,  -248,     4,   151,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,     7,  -248,  -248,   -66,  -247,  -150,
    -248,  -248,  -248,   318,  -248,  -248,  -248,   335,  -248,  -248,
    -111,   289,  -248,  -248,   -69,  -248,   260,  -248,  -248,  -248,
    -248,   160,  -248,  -248,  -248,  -213,     0,    66,  -248,  -248,
    -248,  -248,  -248
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     189,    87,    62,    22,    23,    24,    25,   165,   166,   167,
     168,   169,    63,    26,    47,    48,    49,    75,   279,   246,
      27,   285,    28,    43,    44,    29,    30,    31,    95,   200,
      80,    81,    82,   179,    83,   252,    40,    32,   115,    38,
      33,    64,    65,   127,   231,   128,    66,    67,    68,    69,
      70,    71,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    39,    41,    45,    50,   218,    50,    84,   180,   177,
      93,    96,    76,    74,    92,    35,    73,   281,    42,    86,
      90,    46,   122,   104,   197,   247,    77,   103,   101,   310,
     198,   106,   213,    37,   102,    77,   217,   224,   112,     1,
     106,     2,    45,   283,   284,   106,    10,     3,     4,    50,
       5,     6,    97,   234,   196,   108,   123,     7,    77,   -26,
     107,    78,    79,     8,   336,   204,    36,    37,     9,   314,
      78,    79,   225,    50,    10,    37,    94,    84,   181,   182,
     173,    36,    84,    11,    37,   352,    37,    37,   104,   105,
     191,    37,    37,   192,   286,    12,    88,    11,   275,   118,
     194,    77,   297,    52,    92,   333,    93,    37,    41,   191,
     202,   210,   212,    35,   353,   363,    84,   307,    93,   368,
     223,   226,   219,    12,    89,   215,   191,   311,    98,    77,
     222,   120,   265,   308,    35,   271,    78,    79,   319,    99,
      53,    54,    55,    56,    57,    37,    58,    59,    60,   270,
      37,   191,   288,    37,   193,   298,   309,   332,   207,   121,
      34,   116,    37,    37,   185,   186,   203,    37,  -126,   120,
     343,   208,    94,   191,   328,    34,    50,   211,    37,    36,
     334,   287,   290,   248,    94,   255,   256,   354,   350,   -62,
     174,   303,   -62,   244,   306,   170,   330,   320,   364,   263,
      36,   175,   112,   335,   183,   366,   188,   120,   184,   -62,
     120,   351,   -62,    35,   120,   191,    35,   176,     1,   170,
       2,   365,   321,   329,   276,   277,     3,     4,  -165,     5,
       6,   112,  -127,   199,    35,   340,     7,   216,   111,   230,
     -25,   278,     8,  -165,   345,  -170,   229,     9,  -127,    50,
     -63,    84,   -26,    10,  -201,   110,   289,   205,   356,   232,
    -170,   358,    11,   113,   296,   359,    84,   361,   362,   220,
     233,    35,    35,    34,   111,    35,   367,   114,   312,    36,
     302,   118,    36,   207,   119,   305,   171,   172,   317,   318,
     245,    84,   322,   249,    34,   250,   251,   261,   253,   257,
      36,   259,    12,    35,    35,   262,    35,   264,   312,   266,
     267,   268,   269,   338,  -201,   272,    35,   273,   282,    73,
     291,   292,   274,   344,   293,    35,    98,   300,   313,    35,
     295,   304,   326,   316,   338,   323,   278,    36,    36,    35,
      35,    36,    35,   325,   337,    35,    35,    98,    35,    35,
     312,   342,   346,   348,   349,   355,    35,    35,    35,    35,
     117,    35,    35,   209,   338,   109,     0,    35,   206,    36,
      36,   187,    36,    34,     0,     0,    34,     0,     0,     0,
       0,     0,    36,     0,    98,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    34,    36,     0,     0,     0,    61,
       0,     0,     0,    91,     0,    36,    36,     0,    36,     0,
       0,    36,    36,     0,    36,    36,    98,     0,     0,    98,
       0,     0,    36,    36,    36,    36,     0,    36,    36,     0,
       0,    34,    34,    36,     0,    34,     0,     0,     0,     0,
       0,     0,    98,     0,     0,   124,   126,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,    98,     0,
       0,     0,     0,    34,    34,     0,    34,     0,     0,    98,
     178,    98,    98,     0,    98,    98,    34,     0,     0,   190,
      98,     0,   190,   195,     0,    34,     0,     0,    51,    34,
       0,     0,     0,     0,   190,    52,   125,    85,   201,    34,
      34,     0,    34,     0,    52,    34,    34,     0,    34,    34,
       0,     0,     0,     0,     0,     0,    34,    34,    34,    34,
       0,    34,    34,    85,   214,     0,     0,    34,     0,     0,
      52,   235,    53,    54,    55,    56,    57,    37,    58,    59,
      60,    53,    54,    55,    56,    57,    37,    58,    59,    60,
       0,     0,   236,     0,   237,     0,   238,     0,     0,   239,
     240,   241,   242,   243,     0,     0,     0,    53,    54,    55,
      56,    57,    37,    58,    59,    60,     0,   254,     0,     1,
       0,     2,   258,     0,   331,   260,     0,     3,     4,    85,
       5,     6,     0,     0,     0,     0,    52,     7,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,   280,    11,   126,   129,     0,     0,   221,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    37,    58,
      59,    60,     0,     0,     0,   130,   131,     0,   132,   133,
     134,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,   299,     0,    12,     0,     0,   135,   136,   137,   138,
       0,     0,     0,     0,     0,     0,   126,   315,   139,   140,
     141,     0,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   129,     0,   162,   163,   164,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   347,     0,   130,   131,     0,   132,   133,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,   138,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   140,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   129,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,   162,   163,   164,     0,     0,     0,     0,
       0,     0,   130,   131,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   135,   136,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,   139,   140,   141,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   129,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,   162,   163,   164,     0,     0,     0,     0,     0,
       0,   130,   131,     0,   132,   133,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   140,   141,     0,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     129,   154,   155,   156,   157,   158,   159,   160,   161,     0,
       0,   162,   163,   164,     0,     0,     0,     0,     0,     0,
     130,   131,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     324,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   129,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
     162,   163,   164,     0,     0,     0,   327,     0,     0,   130,
     131,     0,   132,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   141,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   129,   154,
     155,   156,   157,   158,   159,   160,   161,     0,     0,   162,
     163,   164,     0,     0,     0,     0,     0,     0,   130,   131,
       0,   132,   133,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   139,   140,   141,     0,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   129,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,   162,   163,
     164,     0,     0,     0,     0,     0,     0,   130,   131,     0,
     132,   133,   357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
     139,   140,   141,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   129,   154,   155,   156,
     157,   158,   159,   160,   161,     0,     0,   162,   163,   164,
       0,     0,     0,     0,     0,     0,   130,   131,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,     0,   139,
     140,   141,     0,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   129,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   162,   163,   164,     0,
       0,     0,     0,     0,     0,   130,   131,     0,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
      85,   301,     0,     0,     0,     0,     0,    52,   139,   140,
     141,     0,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,    51,     0,   162,   163,   164,     0,     0,
      52,     0,     0,     0,    53,    54,    55,    56,    57,    37,
      58,    59,    60,    85,     0,     0,     0,     0,     0,     0,
      52,     0,   100,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    37,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    37,    58,    59,    60,    53,    54,    55,    56,
      57,    12,    58,    59,    60
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,   116,     6,     7,    77,    75,
      10,    11,    31,     6,    10,    15,    23,   230,    45,     8,
       9,    24,    24,    23,    45,   175,    45,    23,    23,   276,
      51,    23,   113,    94,    23,    45,    46,    45,    24,    10,
      23,    12,    42,    14,    15,    23,    45,    18,    19,    49,
      21,    22,     0,   134,    46,    12,    49,    28,    45,    45,
      43,    80,    81,    34,   311,    43,     0,    94,    39,   282,
      80,    81,    80,    73,    45,    94,    10,    77,    78,    79,
      73,    15,    82,    54,    94,   332,    94,    94,    88,    23,
      23,    94,    94,    88,   244,    94,    45,    54,    31,    23,
      89,    45,    46,    52,   100,    46,   106,    94,   108,    23,
      99,   111,   112,   113,    46,    46,   116,     7,   118,    46,
     120,   121,    46,    94,    73,   114,    23,   277,    15,    45,
     119,    24,    46,    23,   134,   216,    80,    81,   288,    45,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    46,
      94,    23,     7,    94,    88,   266,    46,   307,    44,    22,
       0,    45,    94,    94,    80,    81,   100,    94,    23,    24,
     320,    57,   106,    23,    46,    15,   176,   111,    94,   113,
      23,   247,   251,   176,   118,   185,   186,   337,    23,    23,
       7,   272,    26,     7,   275,    24,    46,     7,    23,   199,
     134,     7,    24,    46,    31,   355,    43,    24,    23,    43,
      24,    46,    46,   213,    24,    23,   216,    23,    10,    24,
      12,    46,   291,   304,   224,     7,    18,    19,    31,    21,
      22,    24,     7,    24,   234,   316,    28,    31,    43,    23,
      45,    23,    34,    46,   325,    31,    53,    39,    23,   249,
      43,   251,    45,    45,    23,    24,   249,   106,   339,    29,
      46,   342,    54,    31,   264,   346,   266,   348,   349,   118,
      26,   271,   272,   113,    43,   275,   357,    45,   278,   213,
     269,    23,   216,    44,    26,   274,    98,    99,    14,    15,
      94,   291,   292,    23,   134,    46,    23,    46,    23,    23,
     234,    23,    94,   303,   304,    46,   306,    24,   308,    45,
      45,    45,    45,   313,    24,    31,   316,    46,    23,    23,
      23,    81,    45,   323,    23,   325,   213,    46,    23,   329,
      51,    31,    46,    31,   334,    81,    23,   271,   272,   339,
     340,   275,   342,    31,     7,   345,   346,   234,   348,   349,
     350,    31,    31,    31,    31,     7,   356,   357,   358,   359,
      42,   361,   362,   111,   364,    30,    -1,   367,   108,   303,
     304,    82,   306,   213,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,   316,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,   325,    -1,    -1,   234,   329,    -1,    -1,    -1,     5,
      -1,    -1,    -1,     9,    -1,   339,   340,    -1,   342,    -1,
      -1,   345,   346,    -1,   348,   349,   303,    -1,    -1,   306,
      -1,    -1,   356,   357,   358,   359,    -1,   361,   362,    -1,
      -1,   271,   272,   367,    -1,   275,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,   345,    -1,
      -1,    -1,    -1,   303,   304,    -1,   306,    -1,    -1,   356,
      76,   358,   359,    -1,   361,   362,   316,    -1,    -1,    85,
     367,    -1,    88,    89,    -1,   325,    -1,    -1,    45,   329,
      -1,    -1,    -1,    -1,   100,    52,    53,    45,    46,   339,
     340,    -1,   342,    -1,    52,   345,   346,    -1,   348,   349,
      -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,
      -1,   361,   362,    45,    46,    -1,    -1,   367,    -1,    -1,
      52,   137,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,   158,    -1,   160,    -1,   162,    -1,    -1,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,   183,    -1,    10,
      -1,    12,   188,    -1,    15,   191,    -1,    18,    19,    45,
      21,    22,    -1,    -1,    -1,    -1,    52,    28,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    54,   230,     6,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    26,    27,    -1,    29,    30,
      31,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,    94,    -1,    -1,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,   282,   283,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,     6,    -1,    86,    87,    88,    -1,    -1,
      -1,   317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,   327,    -1,    26,    27,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     6,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     6,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       6,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     6,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     6,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     6,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     6,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     6,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    45,    -1,    86,    87,    88,    -1,    -1,
      52,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    89,    90,    91,    92,
      93,    94,    95,    96,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      45,    54,    94,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   113,   114,   115,   116,   123,   130,   132,   135,
     136,   137,   147,   150,   151,   156,   157,    94,   149,   156,
     146,   156,    45,   133,   134,   156,    24,   124,   125,   126,
     156,    45,    52,    89,    90,    91,    92,    93,    95,    96,
      97,   111,   112,   122,   151,   152,   156,   157,   158,   159,
     160,   161,   162,    23,   124,   127,    31,    45,    80,    81,
     140,   141,   142,   144,   156,    45,   110,   111,    45,    73,
     110,   111,   115,   156,   157,   138,   156,     0,   104,    45,
      45,   106,   110,   115,   156,   157,    23,    43,    12,   137,
      24,    43,    24,    31,    45,   148,    45,   133,    23,    26,
      24,    22,    24,   124,   111,    53,   111,   153,   155,     6,
      26,    27,    29,    30,    31,    47,    48,    49,    50,    59,
      60,    61,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    76,    77,    78,    79,    80,    81,
      82,    83,    86,    87,    88,   117,   118,   119,   120,   121,
      24,    98,    99,   124,     7,     7,    23,   127,   111,   143,
     144,   156,   156,    31,    23,    80,    81,   141,    43,   110,
     111,    23,   106,   157,   110,   111,    46,    45,    51,    24,
     139,    46,   110,   157,    43,   116,   146,    44,    57,   107,
     156,   157,   156,   103,    46,   110,    31,    46,   140,    46,
     116,    84,   110,   156,    45,    80,   156,    46,    31,    53,
      23,   154,    29,    26,   103,   111,   111,   111,   111,   111,
     111,   111,   111,   111,     7,    94,   129,   129,   124,    23,
      46,    23,   145,    23,   111,   156,   156,    23,   111,    23,
     111,    46,    46,   156,    24,    46,    45,    45,    45,    45,
      46,   103,    31,    46,    45,    31,   156,     7,    23,   128,
     111,   155,    23,    14,    15,   131,   129,   127,     7,   124,
     144,    23,    81,    23,   111,    51,   156,    46,   140,   111,
      46,    46,   110,   103,    31,   110,   103,     7,    23,    46,
     128,   129,   156,    23,   155,   111,    31,    14,    15,   129,
       7,   144,   156,    81,    46,    31,    46,    23,    46,   103,
      46,    15,   129,    46,    23,    46,   128,     7,   156,    31,
     103,   111,    31,   129,   156,   103,    31,   111,    31,    31,
      23,    46,   128,    46,   129,     7,   103,    31,   103,   103,
      46,   103,   103,    46,    23,    46,   129,   103,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   144,
     144,   145,   145,   146,   147,   147,   148,   148,   149,   150,
     151,   152,   152,   153,   153,   153,   153,   154,   154,   155,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   160,
     161,   161,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     4,     5,     6,     1,     1,     3,     4,     1,
       2,     2,     3,     3,     4,     3,     5,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     5,     4,     6,     5,     7,
       6,     8,     7,     9,     7,     9,     8,    10,     4,     3,
       1,     1,     2,     1,     1,     2,     3,     5,     2,     4,
       2,     4,     3,     5,     1,     4,     7,     5,     8,     4,
       5,     6,     9,     9,     1,     3,     2,     1,     3,     6,
       7,     7,     8,     1,     2,     3,     5,     1,     2,     2,
       3,     2,     5,     2,     1,     2,     3,     6,     3,     2,
       3,     1,     3,     2,     3,     1,     2,     2,     3,     1,
       3,     2,     3,     1,     4,     5,     2,     3,     1,     5,
       8,     2,     3,     1,     2,     2,     3,     2,     3,     3,
       1,     1,     3,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1
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
  case 2:
#line 80 "parser.y"
        {}
#line 1891 "parser.tab.c"
    break;

  case 21:
#line 112 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);}
#line 1897 "parser.tab.c"
    break;

  case 22:
#line 114 "parser.y"
        {(yyval.nval) = (yyvsp[-3].nval);}
#line 1903 "parser.tab.c"
    break;

  case 23:
#line 116 "parser.y"
        {(yyval.nval) = (yyvsp[-4].nval);}
#line 1909 "parser.tab.c"
    break;

  case 24:
#line 118 "parser.y"
        {(yyval.nval) = (yyvsp[-5].nval);}
#line 1915 "parser.tab.c"
    break;

  case 25:
#line 123 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1921 "parser.tab.c"
    break;

  case 26:
#line 125 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1927 "parser.tab.c"
    break;

  case 30:
#line 138 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1933 "parser.tab.c"
    break;

  case 31:
#line 140 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1939 "parser.tab.c"
    break;

  case 32:
#line 142 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1945 "parser.tab.c"
    break;

  case 33:
#line 144 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1951 "parser.tab.c"
    break;

  case 34:
#line 146 "parser.y"
                {print((yyvsp[-1].nval),&variables); }
#line 1957 "parser.tab.c"
    break;

  case 35:
#line 156 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1963 "parser.tab.c"
    break;

  case 36:
#line 158 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1969 "parser.tab.c"
    break;

  case 37:
#line 160 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1975 "parser.tab.c"
    break;

  case 38:
#line 165 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1981 "parser.tab.c"
    break;

  case 39:
#line 167 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1987 "parser.tab.c"
    break;

  case 40:
#line 169 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 1993 "parser.tab.c"
    break;

  case 41:
#line 171 "parser.y"
        {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables); printf("value is : %f\n",(yyval.nval).fval); }
#line 1999 "parser.tab.c"
    break;

  case 42:
#line 173 "parser.y"
        {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2005 "parser.tab.c"
    break;

  case 43:
#line 175 "parser.y"
        {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2011 "parser.tab.c"
    break;

  case 49:
#line 185 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2017 "parser.tab.c"
    break;

  case 50:
#line 187 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2023 "parser.tab.c"
    break;

  case 51:
#line 189 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2029 "parser.tab.c"
    break;

  case 52:
#line 191 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2035 "parser.tab.c"
    break;

  case 53:
#line 193 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2041 "parser.tab.c"
    break;

  case 54:
#line 195 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2047 "parser.tab.c"
    break;

  case 55:
#line 202 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables)); printf("value isddd : %f\n",(yyvsp[0].nval).fval); }
#line 2053 "parser.tab.c"
    break;

  case 57:
#line 208 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2059 "parser.tab.c"
    break;

  case 59:
#line 212 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2065 "parser.tab.c"
    break;

  case 62:
#line 218 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2071 "parser.tab.c"
    break;

  case 63:
#line 220 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2077 "parser.tab.c"
    break;

  case 64:
#line 222 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2083 "parser.tab.c"
    break;

  case 98:
#line 277 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2089 "parser.tab.c"
    break;

  case 99:
#line 279 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2095 "parser.tab.c"
    break;

  case 100:
#line 281 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2101 "parser.tab.c"
    break;

  case 101:
#line 283 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2107 "parser.tab.c"
    break;

  case 189:
#line 444 "parser.y"
{items(&dictionary,&variables);}
#line 2113 "parser.tab.c"
    break;

  case 190:
#line 448 "parser.y"
        {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 2119 "parser.tab.c"
    break;

  case 199:
#line 466 "parser.y"
                { insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 2125 "parser.tab.c"
    break;

  case 200:
#line 471 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 2131 "parser.tab.c"
    break;

  case 201:
#line 475 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2137 "parser.tab.c"
    break;

  case 202:
#line 477 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 2143 "parser.tab.c"
    break;

  case 203:
#line 482 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2149 "parser.tab.c"
    break;

  case 204:
#line 484 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 2155 "parser.tab.c"
    break;

  case 205:
#line 489 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2161 "parser.tab.c"
    break;

  case 206:
#line 491 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2167 "parser.tab.c"
    break;

  case 207:
#line 497 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2173 "parser.tab.c"
    break;

  case 208:
#line 499 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2179 "parser.tab.c"
    break;

  case 209:
#line 501 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2185 "parser.tab.c"
    break;

  case 210:
#line 506 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2191 "parser.tab.c"
    break;

  case 211:
#line 508 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2197 "parser.tab.c"
    break;

  case 212:
#line 512 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2203 "parser.tab.c"
    break;


#line 2207 "parser.tab.c"

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

#line 515 "parser.y"



int main(int argc, char** argv) {

  
  initArray(&variables, 5);  // initially 5 elements
  initArray(&dictionary,5); //initially 5 elements
   extern int yydebug;
   // yydebug = 1;
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
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}




