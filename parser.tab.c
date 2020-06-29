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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "parser.y"


#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;

#line 130 "parser.tab.c"

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
#line 27 "parser.y"

    struct Variable nval;
	

#line 249 "parser.tab.c"

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
  YYSYMBOL_break_stmt = 104,               /* break_stmt  */
  YYSYMBOL_return_stmt = 105,              /* return_stmt  */
  YYSYMBOL_call = 106,                     /* call  */
  YYSYMBOL_primary = 107,                  /* primary  */
  YYSYMBOL_lambda_form = 108,              /* lambda_form  */
  YYSYMBOL_lam_parameters = 109,           /* lam_parameters  */
  YYSYMBOL_print_stmt = 110,               /* print_stmt  */
  YYSYMBOL_expression_list = 111,          /* expression_list  */
  YYSYMBOL_expression = 112,               /* expression  */
  YYSYMBOL_atom = 113,                     /* atom  */
  YYSYMBOL_assignment_stmt = 114,          /* assignment_stmt  */
  YYSYMBOL_assignment_stmt_targer_list = 115, /* assignment_stmt_targer_list  */
  YYSYMBOL_target_list = 116,              /* target_list  */
  YYSYMBOL_target = 117,                   /* target  */
  YYSYMBOL_assignment_op = 118,            /* assignment_op  */
  YYSYMBOL_arithmetic_op = 119,            /* arithmetic_op  */
  YYSYMBOL_comparison_op = 120,            /* comparison_op  */
  YYSYMBOL_logical_op = 121,               /* logical_op  */
  YYSYMBOL_bitwise_op = 122,               /* bitwise_op  */
  YYSYMBOL_literal = 123,                  /* literal  */
  YYSYMBOL_import_stmt = 124,              /* import_stmt  */
  YYSYMBOL_module = 125,                   /* module  */
  YYSYMBOL_relative_module = 126,          /* relative_module  */
  YYSYMBOL_dots = 127,                     /* dots  */
  YYSYMBOL_modules = 128,                  /* modules  */
  YYSYMBOL_import_stmt_identifiers = 129,  /* import_stmt_identifiers  */
  YYSYMBOL_name = 130,                     /* name  */
  YYSYMBOL_if_stmt = 131,                  /* if_stmt  */
  YYSYMBOL_elif_stmt = 132,                /* elif_stmt  */
  YYSYMBOL_for_stmt = 133,                 /* for_stmt  */
  YYSYMBOL_for_target_list = 134,          /* for_target_list  */
  YYSYMBOL_for_target = 135,               /* for_target  */
  YYSYMBOL_funcdef = 136,                  /* funcdef  */
  YYSYMBOL_decorators = 137,               /* decorators  */
  YYSYMBOL_decorator = 138,                /* decorator  */
  YYSYMBOL_dotted_name = 139,              /* dotted_name  */
  YYSYMBOL_dot_identifiers = 140,          /* dot_identifiers  */
  YYSYMBOL_parameter_list = 141,           /* parameter_list  */
  YYSYMBOL_defparameter = 142,             /* defparameter  */
  YYSYMBOL_defparameters = 143,            /* defparameters  */
  YYSYMBOL_sublist = 144,                  /* sublist  */
  YYSYMBOL_parameter = 145,                /* parameter  */
  YYSYMBOL_parameters = 146,               /* parameters  */
  YYSYMBOL_funcname = 147,                 /* funcname  */
  YYSYMBOL_classdef = 148,                 /* classdef  */
  YYSYMBOL_inheritance = 149,              /* inheritance  */
  YYSYMBOL_classname = 150,                /* classname  */
  YYSYMBOL_dict_items = 151,               /* dict_items  */
  YYSYMBOL_dict_setdefault = 152,          /* dict_setdefault  */
  YYSYMBOL_dict_display = 153,             /* dict_display  */
  YYSYMBOL_key_datum_list = 154,           /* key_datum_list  */
  YYSYMBOL_key_datums = 155,               /* key_datums  */
  YYSYMBOL_key_datum = 156,                /* key_datum  */
  YYSYMBOL_attr_identifier = 157,          /* attr_identifier  */
  YYSYMBOL_identifier = 158,               /* identifier  */
  YYSYMBOL_stringliteral = 159,            /* stringliteral  */
  YYSYMBOL_longinteger = 160,              /* longinteger  */
  YYSYMBOL_integer = 161,                  /* integer  */
  YYSYMBOL_floatnumber = 162,              /* floatnumber  */
  YYSYMBOL_imagnumber = 163                /* imagnumber  */
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
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

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
       0,    91,    91,    92,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   117,
     120,   121,   123,   125,   127,   129,   134,   136,   144,   145,
     150,   152,   153,   154,   160,   161,   163,   165,   167,   169,
     179,   181,   183,   188,   190,   192,   194,   196,   200,   201,
     202,   203,   204,   205,   209,   211,   213,   215,   217,   219,
     226,   229,   231,   236,   238,   242,   244,   245,   247,   249,
     251,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   273,   274,   275,   278,   279,   280,   281,   282,
     283,   286,   287,   288,   289,   290,   291,   292,   295,   296,
     297,   298,   299,   300,   306,   308,   310,   312,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   341,   342,   345,   346,   347,
     350,   351,   353,   354,   355,   356,   360,   361,   362,   363,
     365,   372,   373,   374,   375,   378,   379,   384,   385,   386,
     389,   390,   391,   394,   395,   400,   401,   402,   403,   406,
     407,   410,   411,   414,   415,   418,   419,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   434,   435,   438,
     439,   442,   443,   444,   445,   448,   449,   452,   453,   456,
     462,   463,   466,   467,   470,   475,   479,   483,   484,   487,
     488,   489,   490,   493,   494,   497,   502,   504,   506,   510,
     516,   518,   523,   525,   531,   533,   535,   540,   542,   546
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
  "$accept", "program", "statement_list", "statement", "break_stmt",
  "return_stmt", "call", "primary", "lambda_form", "lam_parameters",
  "print_stmt", "expression_list", "expression", "atom", "assignment_stmt",
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

#define YYPACT_NINF (-262)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     553,  -262,   -50,   -50,    -4,   -15,  1254,   -22,   -11,  1322,
     612,    -3,   -50,    98,    34,   553,  -262,  -262,  -262,  -262,
      20,  -262,  -262,  -262,   198,   110,  -262,  -262,  -262,  -262,
    -262,    16,  -262,  -262,  -262,  -262,     8,    23,  -262,   192,
    -262,    81,  -262,    -4,   216,  -262,  -262,  -262,   114,   125,
     -14,  -262,  1254,  1381,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,   692,  -262,  -262,  -262,  -262,   153,   174,  -262,
    -262,   -60,  -262,  -262,   -50,    24,   183,  1254,    14,   153,
     176,  1322,   190,  1312,  1322,  1322,   190,   768,    13,   153,
     176,   -10,   209,  -262,  -262,   778,  1390,  -262,  -262,   190,
     116,   151,   160,    -3,  -262,   -50,  -262,   -50,   -27,   -50,
     553,   914,   200,    55,   104,    -3,  1186,   -50,    43,  -262,
     114,   836,  -262,   904,   196,   221,  -262,  -262,   223,   224,
    -262,   553,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  1254,  1254,
    1254,  1254,  1254,  1254,  1254,  1254,  1254,   -19,  -262,  -262,
     141,   159,   159,   -50,   234,  1312,   -50,  1254,   -50,   237,
     836,  1254,   215,     8,   190,   768,  -262,   218,  -262,   -50,
     231,  -262,   105,   153,  -262,  -262,   217,  -262,   222,   228,
    -262,   229,   153,   176,   553,  -262,   106,   553,    17,   238,
     -50,   -50,   235,   245,    67,   240,  -262,  -262,  -262,   230,
     207,  -262,   -50,  -262,   212,  -262,  1254,  -262,  1254,   254,
    -262,  -262,    42,  1380,  1380,   602,   602,  1312,  1312,  1312,
    1312,  1312,   159,  -262,  -262,   255,   178,   -50,   153,   176,
    1312,  1254,  1312,  -262,   246,  -262,   -50,  -262,    77,  1254,
     251,   982,  -262,   553,   252,   257,   553,  -262,   276,   271,
     258,   -50,   -50,   283,  1254,  1322,   553,   112,   159,   -50,
     284,  1312,  -262,  1254,  1254,   277,    83,  -262,   234,   159,
     188,   972,  -262,  -262,   278,   266,  1040,  -262,  -262,   134,
    -262,    17,   291,   553,   236,   553,  -262,   293,   273,  1312,
     137,   206,   159,   -23,  -262,   140,   294,   313,   -50,  -262,
    1108,   553,  1254,   292,   213,   159,  -262,   553,   295,  1254,
    -262,  -262,    17,   -50,   553,   243,   297,   298,   145,  -262,
      12,  -262,   284,   159,   317,   553,   553,  1176,   553,  -262,
     553,   553,  1244,  -262,  -262,   -50,   553,   553,    22,  -262,
     146,  -262,  -262,   159,   553,   553,   553,   553,  -262,  -262,
     553,   553,  -262,    46,  -262,  -262,   553,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    19,     0,     0,     0,     0,     0,     0,     0,    20,
      34,     0,     0,   209,     0,     3,     5,    15,    14,    13,
       0,    16,    10,     7,     0,     0,    65,     6,     8,     9,
      11,     0,   159,    12,    18,    17,    69,    26,   209,     0,
     194,     0,   189,     0,     0,   150,   153,   130,   127,     0,
     129,   126,     0,     0,   214,   215,   216,   217,   218,   210,
     211,   219,     0,    43,    54,    59,    58,    57,    55,   105,
     106,    56,   104,   107,     0,   108,     0,     0,     0,    31,
      30,     0,    21,    42,     0,     0,    36,    35,     0,    69,
     206,     0,   163,     1,     4,     0,     0,    61,    62,    60,
       0,    57,    55,    67,    63,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,   131,
     128,     0,   197,     0,     0,   199,    91,    95,    94,    92,
      93,     0,    88,    87,    98,    80,    81,    71,    72,    73,
      74,    75,    76,    77,    82,    99,    78,    79,   103,   102,
      89,    90,    85,    86,    83,    84,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   213,
     134,     0,     0,     0,   110,    28,     0,     0,     0,     0,
      42,     0,     0,    57,    38,    37,    70,     0,   161,     0,
     164,    22,     0,    57,    64,    66,     0,   207,     0,     0,
     208,     0,    27,    26,   190,   192,     0,     0,     0,     0,
       0,     0,     0,   170,     0,   177,   185,   154,   151,     0,
       0,   125,     0,   124,   112,    53,     0,   198,   200,   201,
      96,    97,   141,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,   140,   109,     0,   134,     0,    33,    32,
      29,     0,    40,    39,     0,   165,     0,    23,     0,     0,
       0,     0,   193,   191,     0,   181,     0,   169,   167,     0,
     179,     0,     0,   175,     0,     0,     0,     0,     0,     0,
     114,   205,   203,   202,     0,     0,   143,   135,   111,     0,
     132,    40,   162,   166,     0,     0,     0,   195,    24,     0,
     186,   182,   183,   155,     0,     0,   174,   172,   180,   178,
       0,   147,     0,     0,   116,     0,   113,   136,     0,   204,
       0,     0,     0,     0,   135,     0,    41,     0,     0,     0,
      25,   187,   184,     0,   157,     0,     0,     0,     0,   120,
       0,   118,   115,     0,   138,     0,   142,     0,     0,   133,
     156,     0,     0,   188,   168,     0,     0,     0,     0,   117,
       0,   122,   137,     0,   145,     0,   144,   158,   196,   173,
     148,   149,   121,     0,   119,   139,   146,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,   232,   184,  -262,  -262,    -2,   226,   301,  -262,
    -262,     9,   461,  -262,  -262,  -262,     3,   126,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,    -1,  -262,  -262,   -63,  -261,
    -146,  -262,  -262,  -262,   287,  -262,  -262,  -262,   300,  -262,
    -262,    79,   122,  -262,  -262,  -187,  -262,   233,  -262,  -262,
    -262,  -262,   155,  -262,  -262,  -262,  -198,    78,     0,  -262,
    -262,  -262,  -262,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    78,
      22,   179,    83,    63,    23,    24,    25,    26,   162,   163,
     164,   165,   166,    64,    27,    48,    49,    50,    76,   280,
     244,    28,   286,    29,    44,    45,    30,    31,    32,    91,
     190,   212,   213,   214,   264,   215,   302,    41,    33,   112,
      39,    34,    65,    66,   124,   229,   125,    67,    68,    69,
      70,    71,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    74,    40,    42,    46,    51,    75,    51,    80,    47,
     119,    90,    92,   174,    88,    37,   315,   198,    82,    86,
      77,   265,    97,   339,   102,   198,   245,   100,   105,   199,
     282,   171,   107,    99,    93,   187,   103,   176,   168,   169,
     188,    43,    11,    46,    38,   177,  -206,   108,   117,   120,
      51,     1,     2,   -27,     3,   342,   284,   285,   361,   186,
       4,     5,   208,     6,     7,    95,   109,    38,   372,    12,
       8,    38,    38,   170,    51,    38,     9,   360,    36,    38,
      38,    10,   182,    38,   102,   319,    79,    11,   222,    89,
      38,    13,   377,    36,   184,    12,   287,   322,   323,    88,
     208,   209,   101,    90,   192,    42,    38,   197,   200,   203,
      37,    38,   208,   216,   331,    90,    38,   221,   224,   312,
     206,   -68,   208,   294,   -68,   220,   113,   115,   181,   181,
     223,    37,   316,   103,   210,   313,    13,    38,   117,   103,
      38,   -68,   211,   324,   -68,   353,   271,   118,   242,    38,
     217,   257,   262,   104,   272,    35,   210,   181,   314,   194,
     181,    38,   183,   340,   211,   117,   338,   200,   358,   373,
      35,    38,   246,    51,   193,   107,   249,   107,   200,   349,
     330,    89,   288,   336,   167,   289,   341,   202,    36,   255,
     172,   359,   374,    89,   -69,   325,   -27,   362,   167,    94,
     178,  -132,   117,   109,    37,   -26,   173,    37,   216,    36,
     267,   268,   117,   181,   216,     1,     2,   375,     3,   278,
    -133,   337,   277,   110,     4,     5,     8,     6,     7,   195,
     181,   207,    37,   189,     8,   279,  -133,   111,   276,   115,
       9,   218,   116,    96,   228,    10,   290,    51,   227,    53,
     231,    11,   230,   243,   248,   256,   293,   247,   216,    12,
     251,   253,   258,    37,   254,    35,    37,   259,   270,   266,
     299,   306,   307,   260,   261,   275,    37,   283,    74,   317,
     301,   269,    36,   274,   310,    36,    35,    54,    55,    56,
      57,    58,    13,    59,    60,    61,   292,   297,   300,   304,
      13,   216,   305,    37,  -171,    37,   308,   318,   321,   327,
      36,    37,   328,   317,   332,   333,   335,   279,   344,  -176,
     343,    37,   355,   348,   363,    98,   351,    37,   356,   357,
     114,   106,   216,   354,    37,   201,   273,   295,   196,     0,
     344,    36,   204,     0,    36,    37,    37,     0,    37,     0,
      37,    37,     0,     0,    36,   369,    37,    37,   317,    35,
       0,     0,    35,   232,    37,    37,    37,    37,     0,     0,
      37,    37,     0,   344,     0,     0,    37,     0,     0,     0,
       0,    36,     0,    36,     0,     0,     0,    35,    94,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,    94,     0,    35,     0,
       0,    35,     0,    36,    36,     0,    36,     0,    36,    36,
       0,    35,     0,     0,    36,    36,     0,     0,     0,   263,
       0,     0,    36,    36,    36,    36,     0,    94,    36,    36,
       0,     0,     0,     0,    36,     0,     0,     0,    35,     0,
      35,     0,     0,     0,     0,     0,    35,    62,     0,     0,
       0,    87,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,    94,     0,    35,
       0,     0,     0,     0,     0,    94,     0,     0,   303,     0,
      35,    35,     0,    35,     0,    35,    35,     0,   311,     0,
       0,    35,    35,   121,   123,     0,     0,     0,    94,    35,
      35,    35,    35,     0,     0,    35,    35,     0,     0,     0,
      94,    35,     0,     0,    94,     0,     0,   334,   175,     0,
       0,     0,   180,     0,     0,   180,   185,     0,    94,     0,
      94,    94,     0,   346,    94,    94,     0,   180,     0,   350,
      94,     0,     1,     2,     0,     3,     0,     0,     0,     0,
       0,     4,     5,     0,     6,     7,     0,   364,     0,     0,
     366,     8,     0,   367,     0,     0,     0,     9,   370,   371,
       0,     0,    10,     0,     0,     0,     0,   376,    11,     0,
       0,     0,     0,     0,     0,     0,    12,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   127,   128,
       0,   129,   130,     0,     0,     0,     0,     0,   250,     0,
       0,     0,   252,     0,     0,     0,     0,    13,     0,   132,
     133,   134,     0,     0,     0,     0,     0,    84,     0,     0,
     135,   136,   137,    53,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     153,   154,   155,     0,    85,   156,   157,   281,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,    54,    55,    56,    57,    58,    38,    59,    60,    61,
       0,     0,   291,     0,     0,     0,     0,     0,   127,   128,
     296,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   309,     0,     0,     0,   132,
     133,   134,     0,     0,   123,   320,     0,     0,     0,     0,
     135,   136,   137,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     153,   154,   155,     0,   126,   156,   157,   158,   159,   160,
     161,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     352,   -42,     0,     0,   127,   128,     0,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,     0,     0,
       0,     0,     0,    81,   191,     0,   135,   136,   137,    53,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   126,   150,   151,   152,   153,   154,   155,     0,
       0,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,     0,   127,   128,     0,   129,   130,    54,    55,    56,
      57,    58,    38,    59,    60,    61,     0,     0,     0,     0,
       0,     0,   225,   132,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     126,   150,   151,   152,   153,   154,   155,     0,     0,   156,
     157,   158,   159,   160,   161,     0,     0,     0,     0,     0,
     127,   128,     0,   129,   130,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   133,   134,     0,     0,     0,     0,     0,    81,
     205,     0,   135,   136,   137,    53,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   126,   150,
     151,   152,   153,   154,   155,     0,     0,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,     0,   127,   128,
       0,   129,   130,    54,    55,    56,    57,    58,    38,    59,
      60,    61,     0,     0,     0,     0,     0,     0,   326,   132,
     133,   134,     0,     0,     0,     0,     0,    81,   298,     0,
     135,   136,   137,    53,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   126,   150,   151,   152,
     153,   154,   155,     0,     0,   156,   157,   158,   159,   160,
     161,     0,     0,   329,     0,     0,   127,   128,     0,   129,
     130,    54,    55,    56,    57,    58,    38,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   126,   150,   151,   152,   153,   154,
     155,     0,     0,   156,   157,   158,   159,   160,   161,     0,
       0,     0,     0,     0,   127,   128,     0,   129,   130,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,     0,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   126,   150,   151,   152,   153,   154,   155,     0,
       0,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,     0,   127,   128,     0,   129,   130,   365,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,   133,   134,     0,     0,     0,     0,
       0,    81,     0,     0,   135,   136,   137,    53,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     126,   150,   151,   152,   153,   154,   155,     0,     0,   156,
     157,   158,   159,   160,   161,     0,     0,   219,     0,     0,
     127,   128,     0,   129,   130,    54,    55,    56,    57,    58,
      38,    59,    60,    61,     0,     0,     0,     0,     0,     0,
     368,   132,   133,   134,     0,     0,     0,     0,     0,    52,
       0,     0,   135,   136,   137,    53,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   126,   150,
     151,   152,   153,   154,   155,     0,     0,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,     0,   127,   128,
       0,   129,   130,    54,    55,    56,    57,    58,    38,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,     0,     0,     0,     0,     0,    81,     0,     0,
     135,   136,   137,    53,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   126,   150,   151,   152,
     153,   154,   155,     0,     0,   156,   157,   158,   159,   160,
     161,     0,     0,     0,     0,     0,   127,   128,     0,   129,
     130,    54,    55,    56,    57,    58,    38,    59,    60,    61,
       0,     0,     0,     0,     0,     0,    52,   132,   133,   134,
       0,     0,    53,   122,     0,    96,     0,     0,   135,   136,
     137,    53,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   150,   151,   152,   153,   154,
     155,     0,     0,   156,   157,     0,     0,   160,   161,     0,
      54,    55,    56,    57,    58,    38,    59,    60,    61,    54,
      55,    56,    57,    58,    13,    59,    60,    61
};

static const yytype_int16 yycheck[] =
{
       0,    23,     2,     3,     4,     5,     7,     7,     8,    24,
      24,    11,    12,    76,    11,    15,   277,    44,     9,    10,
      31,   208,    24,    46,    24,    44,   172,    24,    12,    56,
     228,     7,    24,    24,     0,    45,    23,    23,    98,    99,
      50,    45,    45,    43,    94,    31,    23,    24,    24,    50,
      50,     9,    10,    45,    12,   316,    14,    15,    46,    46,
      18,    19,    45,    21,    22,    45,    43,    94,    46,    53,
      28,    94,    94,    74,    74,    94,    34,   338,     0,    94,
      94,    39,    84,    94,    84,   283,     8,    45,    45,    11,
      94,    94,    46,    15,    85,    53,   242,    14,    15,    96,
      45,    46,    24,   103,    95,   105,    94,   107,   108,   109,
     110,    94,    45,   113,   301,   115,    94,   117,   118,     7,
     111,    23,    45,    46,    26,   116,    45,    23,    23,    23,
      87,   131,   278,    23,    79,    23,    94,    94,    24,    23,
      94,    43,    87,   289,    46,   332,    79,    22,     7,    94,
      46,    46,    46,    43,    87,     0,    79,    23,    46,    43,
      23,    94,    84,    23,    87,    24,   312,   167,    23,    23,
      15,    94,   173,   173,    96,    24,   176,    24,   178,   325,
      46,   103,   245,    46,    24,     7,    46,   109,   110,   189,
       7,    46,    46,   115,    43,     7,    45,   343,    24,    15,
      24,    23,    24,    43,   204,    45,    23,   207,   208,   131,
     210,   211,    24,    23,   214,     9,    10,   363,    12,     7,
       7,    15,   222,    31,    18,    19,    28,    21,    22,   103,
      23,    31,   232,    24,    28,    23,    23,    45,    31,    23,
      34,   115,    26,    45,    23,    39,   247,   247,    52,    51,
      26,    45,    29,    94,   176,    24,   256,    23,   258,    53,
      23,    46,    45,   263,    46,   110,   266,    45,    23,    31,
     261,   271,   272,    45,    45,    45,   276,    23,    23,   279,
      23,    46,   204,    43,   275,   207,   131,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    50,    46,    46,    23,
      94,   301,    31,   303,    46,   305,    23,    23,    31,    31,
     232,   311,    46,   313,    23,    79,    23,    23,   318,    46,
       7,   321,    79,    31,     7,    24,    31,   327,    31,    31,
      43,    31,   332,   333,   334,   109,   214,   258,   105,    -1,
     340,   263,   110,    -1,   266,   345,   346,    -1,   348,    -1,
     350,   351,    -1,    -1,   276,   355,   356,   357,   358,   204,
      -1,    -1,   207,   131,   364,   365,   366,   367,    -1,    -1,
     370,   371,    -1,   373,    -1,    -1,   376,    -1,    -1,    -1,
      -1,   303,    -1,   305,    -1,    -1,    -1,   232,   204,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,   232,    -1,   263,    -1,
      -1,   266,    -1,   345,   346,    -1,   348,    -1,   350,   351,
      -1,   276,    -1,    -1,   356,   357,    -1,    -1,    -1,   207,
      -1,    -1,   364,   365,   366,   367,    -1,   263,   370,   371,
      -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,   303,    -1,
     305,    -1,    -1,    -1,    -1,    -1,   311,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,   303,    -1,   334,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   266,    -1,
     345,   346,    -1,   348,    -1,   350,   351,    -1,   276,    -1,
      -1,   356,   357,    52,    53,    -1,    -1,    -1,   334,   364,
     365,   366,   367,    -1,    -1,   370,   371,    -1,    -1,    -1,
     346,   376,    -1,    -1,   350,    -1,    -1,   305,    77,    -1,
      -1,    -1,    81,    -1,    -1,    84,    85,    -1,   364,    -1,
     366,   367,    -1,   321,   370,   371,    -1,    96,    -1,   327,
     376,    -1,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    -1,   345,    -1,    -1,
     348,    28,    -1,   351,    -1,    -1,    -1,    34,   356,   357,
      -1,    -1,    39,    -1,    -1,    -1,    -1,   365,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    94,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      58,    59,    60,    51,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,    72,    83,    84,   226,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    26,    27,
     259,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,   283,   284,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,     6,    83,    84,    85,    86,    87,
      88,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    58,    59,    60,    51,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     6,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       6,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    58,    59,    60,    51,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     6,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      58,    59,    60,    51,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     6,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     6,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     6,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    58,    59,    60,    51,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       6,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    81,    -1,    -1,
      26,    27,    -1,    29,    30,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    58,    59,    60,    51,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     6,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      58,    59,    60,    51,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     6,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    47,    48,    49,
      -1,    -1,    51,    52,    -1,    45,    -1,    -1,    58,    59,
      60,    51,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    89,
      90,    91,    92,    93,    94,    95,    96,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    12,    18,    19,    21,    22,    28,    34,
      39,    45,    53,    94,   101,   102,   103,   104,   105,   106,
     107,   108,   110,   114,   115,   116,   117,   124,   131,   133,
     136,   137,   138,   148,   151,   152,   157,   158,    94,   150,
     158,   147,   158,    45,   134,   135,   158,    24,   125,   126,
     127,   158,    45,    51,    89,    90,    91,    92,    93,    95,
      96,    97,   112,   113,   123,   152,   153,   157,   158,   159,
     160,   161,   162,   163,    23,   125,   128,    31,   109,   157,
     158,    45,   111,   112,    45,    72,   111,   112,   116,   157,
     158,   139,   158,     0,   103,    45,    45,   106,   108,   111,
     116,   157,   158,    23,    43,    12,   138,    24,    24,    43,
      31,    45,   149,    45,   134,    23,    26,    24,    22,    24,
     125,   112,    52,   112,   154,   156,     6,    26,    27,    29,
      30,    31,    47,    48,    49,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      75,    76,    77,    78,    79,    80,    83,    84,    85,    86,
      87,    88,   118,   119,   120,   121,   122,    24,    98,    99,
     125,     7,     7,    23,   128,   112,    23,    31,    24,   111,
     112,    23,   106,   157,   111,   112,    46,    45,    50,    24,
     140,    46,   111,   157,    43,   117,   147,   158,    44,    56,
     158,   107,   157,   158,   102,    46,   111,    31,    45,    46,
      79,    87,   141,   142,   143,   145,   158,    46,   117,    81,
     111,   158,    45,    87,   158,    46,    31,    52,    23,   155,
      29,    26,   102,   112,   112,   112,   112,   112,   112,   112,
     112,   112,     7,    94,   130,   130,   125,    23,   157,   158,
     112,    23,   112,    46,    46,   158,    24,    46,    45,    45,
      45,    45,    46,   102,   144,   145,    31,   158,   158,    46,
      23,    79,    87,   142,    43,    45,    31,   158,     7,    23,
     129,   112,   156,    23,    14,    15,   132,   130,   128,     7,
     125,   112,    50,   158,    46,   141,   112,    46,    46,   111,
      46,    23,   146,   102,    23,    31,   158,   158,    23,   112,
     111,   102,     7,    23,    46,   129,   130,   158,    23,   156,
     112,    31,    14,    15,   130,     7,    46,    31,    46,    23,
      46,   145,    23,    79,   102,    23,    46,    15,   130,    46,
      23,    46,   129,     7,   158,    31,   102,   112,    31,   130,
     102,    31,   112,   145,   158,    79,    31,    31,    23,    46,
     129,    46,   130,     7,   102,    31,   102,   102,    46,   158,
     102,   102,    46,    23,    46,   130,   102,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     105,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   109,   109,   110,   110,   110,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   115,   115,   116,   116,   116,   117,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   122,   122,
     122,   122,   122,   122,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   129,   129,
     130,   131,   131,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     148,   148,   149,   149,   150,   151,   152,   153,   153,   154,
     154,   154,   154,   155,   155,   156,   157,   157,   157,   158,
     159,   159,   160,   160,   161,   161,   161,   162,   162,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     4,     5,     6,     1,     1,     3,     4,
       1,     1,     3,     3,     1,     2,     2,     3,     3,     4,
       3,     5,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     4,     6,     5,     7,     6,     8,     7,     9,
       7,     9,     8,    10,     4,     3,     1,     1,     2,     1,
       1,     2,     3,     5,     2,     4,     2,     4,     3,     5,
       1,     4,     7,     5,     8,     4,     5,     6,     9,     9,
       1,     3,     2,     1,     3,     6,     7,     7,     8,     1,
       2,     3,     5,     1,     2,     2,     3,     2,     5,     2,
       1,     2,     3,     6,     3,     2,     3,     1,     3,     2,
       3,     1,     2,     2,     3,     1,     3,     2,     3,     1,
       4,     5,     2,     3,     1,     5,     8,     2,     3,     1,
       2,     2,     3,     2,     3,     3,     1,     3,     3,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1
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
#line 91 "parser.y"
        {printf("Success! You are awesome. \n");}
#line 1910 "parser.tab.c"
    break;

  case 3:
#line 93 "parser.y"
        {printf("Success! You are awesome. \n");}
#line 1916 "parser.tab.c"
    break;

  case 26:
#line 135 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1922 "parser.tab.c"
    break;

  case 27:
#line 137 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1928 "parser.tab.c"
    break;

  case 30:
#line 151 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); (yyval.nval).type = LAM ;insertArray(&variables, (yyval.nval)); }
#line 1934 "parser.tab.c"
    break;

  case 35:
#line 162 "parser.y"
                {printf(">>  "); print((yyvsp[0].nval),&variables); }
#line 1940 "parser.tab.c"
    break;

  case 36:
#line 164 "parser.y"
                {printf(">>  "); print((yyvsp[0].nval),&variables); }
#line 1946 "parser.tab.c"
    break;

  case 37:
#line 166 "parser.y"
                {printf(">>  "); print((yyvsp[0].nval),&variables); }
#line 1952 "parser.tab.c"
    break;

  case 38:
#line 168 "parser.y"
                {printf(">>  "); print((yyvsp[0].nval),&variables); }
#line 1958 "parser.tab.c"
    break;

  case 39:
#line 170 "parser.y"
                {printf(">>  "); print((yyvsp[-1].nval),&variables); }
#line 1964 "parser.tab.c"
    break;

  case 40:
#line 180 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1970 "parser.tab.c"
    break;

  case 41:
#line 182 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1976 "parser.tab.c"
    break;

  case 42:
#line 184 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1982 "parser.tab.c"
    break;

  case 43:
#line 189 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1988 "parser.tab.c"
    break;

  case 44:
#line 191 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1994 "parser.tab.c"
    break;

  case 45:
#line 193 "parser.y"
        {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 2000 "parser.tab.c"
    break;

  case 46:
#line 195 "parser.y"
        {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1); }
#line 2006 "parser.tab.c"
    break;

  case 47:
#line 197 "parser.y"
        {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 2012 "parser.tab.c"
    break;

  case 53:
#line 206 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2018 "parser.tab.c"
    break;

  case 54:
#line 210 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2024 "parser.tab.c"
    break;

  case 55:
#line 212 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2030 "parser.tab.c"
    break;

  case 56:
#line 214 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2036 "parser.tab.c"
    break;

  case 57:
#line 216 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2042 "parser.tab.c"
    break;

  case 58:
#line 218 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2048 "parser.tab.c"
    break;

  case 59:
#line 220 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2054 "parser.tab.c"
    break;

  case 60:
#line 227 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables));  }
#line 2060 "parser.tab.c"
    break;

  case 62:
#line 232 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables));}
#line 2066 "parser.tab.c"
    break;

  case 63:
#line 237 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2072 "parser.tab.c"
    break;

  case 65:
#line 243 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2078 "parser.tab.c"
    break;

  case 68:
#line 248 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2084 "parser.tab.c"
    break;

  case 69:
#line 250 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2090 "parser.tab.c"
    break;

  case 70:
#line 252 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2096 "parser.tab.c"
    break;

  case 104:
#line 307 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2102 "parser.tab.c"
    break;

  case 105:
#line 309 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2108 "parser.tab.c"
    break;

  case 106:
#line 311 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2114 "parser.tab.c"
    break;

  case 107:
#line 313 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2120 "parser.tab.c"
    break;

  case 195:
#line 476 "parser.y"
{items(&dictionary,&variables);}
#line 2126 "parser.tab.c"
    break;

  case 196:
#line 480 "parser.y"
        {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 2132 "parser.tab.c"
    break;

  case 205:
#line 498 "parser.y"
                { insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 2138 "parser.tab.c"
    break;

  case 206:
#line 503 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2144 "parser.tab.c"
    break;

  case 207:
#line 505 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 2150 "parser.tab.c"
    break;

  case 209:
#line 511 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 2156 "parser.tab.c"
    break;

  case 210:
#line 517 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2162 "parser.tab.c"
    break;

  case 211:
#line 519 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 2168 "parser.tab.c"
    break;

  case 212:
#line 524 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2174 "parser.tab.c"
    break;

  case 213:
#line 526 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2180 "parser.tab.c"
    break;

  case 214:
#line 532 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2186 "parser.tab.c"
    break;

  case 215:
#line 534 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2192 "parser.tab.c"
    break;

  case 216:
#line 536 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2198 "parser.tab.c"
    break;

  case 217:
#line 541 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2204 "parser.tab.c"
    break;

  case 218:
#line 543 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2210 "parser.tab.c"
    break;

  case 219:
#line 547 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2216 "parser.tab.c"
    break;


#line 2220 "parser.tab.c"

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

#line 550 "parser.y"



int main(int argc, char** argv) {

  
  initArray(&variables, 5);  // initially 5 elements
  initArray(&dictionary,5);


   extern int yydebug;
   //yydebug = 1;

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
	fprintf(stderr, "Line: %d --> Parser error\n", yylineno);
	exit(1);
}




