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
  YYSYMBOL_program = 101,                  /* program  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_return_stmt = 104,              /* return_stmt  */
  YYSYMBOL_call = 105,                     /* call  */
  YYSYMBOL_primary = 106,                  /* primary  */
  YYSYMBOL_lambda_form = 107,              /* lambda_form  */
  YYSYMBOL_print_stmt = 108,               /* print_stmt  */
  YYSYMBOL_expression_list = 109,          /* expression_list  */
  YYSYMBOL_expression = 110,               /* expression  */
  YYSYMBOL_atom = 111,                     /* atom  */
  YYSYMBOL_assignment_stmt = 112,          /* assignment_stmt  */
  YYSYMBOL_assignment_stmt_targer_list = 113, /* assignment_stmt_targer_list  */
  YYSYMBOL_target_list = 114,              /* target_list  */
  YYSYMBOL_target = 115,                   /* target  */
  YYSYMBOL_assignment_op = 116,            /* assignment_op  */
  YYSYMBOL_arithmetic_op = 117,            /* arithmetic_op  */
  YYSYMBOL_comparison_op = 118,            /* comparison_op  */
  YYSYMBOL_logical_op = 119,               /* logical_op  */
  YYSYMBOL_bitwise_op = 120,               /* bitwise_op  */
  YYSYMBOL_literal = 121,                  /* literal  */
  YYSYMBOL_import_stmt = 122,              /* import_stmt  */
  YYSYMBOL_module = 123,                   /* module  */
  YYSYMBOL_relative_module = 124,          /* relative_module  */
  YYSYMBOL_dots = 125,                     /* dots  */
  YYSYMBOL_modules = 126,                  /* modules  */
  YYSYMBOL_import_stmt_identifiers = 127,  /* import_stmt_identifiers  */
  YYSYMBOL_name = 128,                     /* name  */
  YYSYMBOL_if_stmt = 129,                  /* if_stmt  */
  YYSYMBOL_elif_stmt = 130,                /* elif_stmt  */
  YYSYMBOL_for_stmt = 131,                 /* for_stmt  */
  YYSYMBOL_for_target_list = 132,          /* for_target_list  */
  YYSYMBOL_for_target = 133,               /* for_target  */
  YYSYMBOL_funcdef = 134,                  /* funcdef  */
  YYSYMBOL_decorators = 135,               /* decorators  */
  YYSYMBOL_decorator = 136,                /* decorator  */
  YYSYMBOL_dotted_name = 137,              /* dotted_name  */
  YYSYMBOL_dot_identifiers = 138,          /* dot_identifiers  */
  YYSYMBOL_parameter_list = 139,           /* parameter_list  */
  YYSYMBOL_defparameter = 140,             /* defparameter  */
  YYSYMBOL_defparameters = 141,            /* defparameters  */
  YYSYMBOL_sublist = 142,                  /* sublist  */
  YYSYMBOL_parameter = 143,                /* parameter  */
  YYSYMBOL_parameters = 144,               /* parameters  */
  YYSYMBOL_funcname = 145,                 /* funcname  */
  YYSYMBOL_classdef = 146,                 /* classdef  */
  YYSYMBOL_inheritance = 147,              /* inheritance  */
  YYSYMBOL_classname = 148,                /* classname  */
  YYSYMBOL_dict_items = 149,               /* dict_items  */
  YYSYMBOL_dict_setdefault = 150,          /* dict_setdefault  */
  YYSYMBOL_dict_display = 151,             /* dict_display  */
  YYSYMBOL_key_datum_list = 152,           /* key_datum_list  */
  YYSYMBOL_key_datums = 153,               /* key_datums  */
  YYSYMBOL_key_datum = 154,                /* key_datum  */
  YYSYMBOL_identifier = 155,               /* identifier  */
  YYSYMBOL_attr_identifier = 156,          /* attr_identifier  */
  YYSYMBOL_stringliteral = 157,            /* stringliteral  */
  YYSYMBOL_longinteger = 158,              /* longinteger  */
  YYSYMBOL_integer = 159,                  /* integer  */
  YYSYMBOL_floatnumber = 160,              /* floatnumber  */
  YYSYMBOL_imagnumber = 161                /* imagnumber  */
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
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  368

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
       0,    81,    81,    83,    87,    88,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   107,   108,
     110,   112,   114,   116,   121,   123,   129,   130,   135,   136,
     138,   140,   142,   144,   154,   156,   158,   163,   165,   167,
     169,   171,   173,   176,   177,   178,   179,   180,   183,   185,
     187,   189,   191,   193,   200,   202,   206,   208,   210,   212,
     213,   216,   218,   220,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   242,   243,   244,   247,   248,
     249,   250,   251,   252,   255,   256,   257,   258,   259,   260,
     261,   264,   265,   266,   267,   268,   269,   275,   277,   279,
     281,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   310,   311,
     314,   315,   316,   319,   320,   322,   323,   324,   325,   329,
     330,   331,   332,   334,   341,   342,   343,   344,   347,   348,
     352,   353,   354,   357,   358,   359,   362,   363,   368,   369,
     370,   371,   374,   375,   378,   379,   382,   383,   386,   387,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     402,   403,   406,   407,   410,   411,   412,   413,   416,   417,
     420,   421,   424,   429,   430,   433,   434,   437,   442,   446,
     450,   451,   454,   455,   456,   457,   460,   461,   464,   469,
     473,   475,   480,   482,   487,   489,   495,   497,   499,   504,
     506,   510
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
  "$accept", "program", "statement_list", "statement", "return_stmt",
  "call", "primary", "lambda_form", "print_stmt", "expression_list",
  "expression", "atom", "assignment_stmt", "assignment_stmt_targer_list",
  "target_list", "target", "assignment_op", "arithmetic_op",
  "comparison_op", "logical_op", "bitwise_op", "literal", "import_stmt",
  "module", "relative_module", "dots", "modules",
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

#define YYPACT_NINF (-229)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-201)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     438,   -58,   -58,    -2,    -6,   608,   -10,   -11,   637,    99,
       1,   -58,   195,    40,   438,  -229,  -229,  -229,    57,  -229,
    -229,  -229,  1280,    10,  -229,  -229,  -229,  -229,  -229,    12,
    -229,  -229,  -229,  -229,   202,    94,  -229,    68,  -229,    79,
    -229,    -2,   120,  -229,  -229,  -229,    30,   134,    -5,  -229,
     608,   204,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
     598,  -229,  -229,  -229,  -229,   162,   192,  -229,  -229,   169,
    -229,  -229,   -58,   220,    19,   608,     7,   -58,   -58,   183,
     213,    28,   212,  -229,   637,   217,  1241,   637,   637,   217,
     689,     9,  -229,   192,   -16,   218,  -229,  -229,   477,  1280,
    -229,   217,    14,   157,   187,     1,  -229,   -58,  -229,   190,
     -58,   -58,   438,   506,   238,   123,    70,     1,   542,   -58,
      69,  -229,    30,   758,  -229,   827,   206,   250,  -229,  -229,
     246,   254,  -229,   438,  -229,  -229,   608,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,   608,  -229,   608,
    -229,   608,  -229,  -229,   608,   608,   608,   608,   608,   240,
    -229,  -229,   222,   191,   191,   -58,   263,  1241,   241,   265,
     266,  -229,   608,   197,   -58,   -58,   269,   608,   281,   758,
     608,   260,    94,   217,   689,  -229,   262,  -229,   -58,   285,
    -229,   107,   192,  -229,  -229,   271,   272,   273,   276,   286,
     192,  -229,   438,  -229,   114,   438,   280,   268,  -229,  -229,
     282,   235,  -229,   -58,  -229,   148,  -229,   608,  -229,   608,
     302,  -229,  -229,    46,  1241,  1241,  1241,  1241,  1241,  1241,
    1241,  1241,  1241,   191,  -229,  -229,   303,    21,   -58,  -229,
       7,   306,   249,  1241,   308,  -229,   208,  1241,   608,  1241,
    -229,   283,  -229,   -58,  -229,   128,   608,   289,  1247,  -229,
     438,   438,   301,   637,   438,    16,   191,   -58,   313,  1241,
    -229,   608,   608,   309,   264,  -229,   263,   191,   228,  -229,
       7,   -58,   256,   896,  -229,  -229,   311,   297,   965,  -229,
    -229,   119,   438,   438,   153,   113,   191,   -15,  -229,   160,
     323,   343,   -58,  -229,  1034,   438,   608,   322,   230,   191,
    -229,  -229,   -58,  -229,   438,   328,   608,  -229,   438,   336,
     337,   174,  -229,     4,  -229,   313,   191,   363,   438,   438,
    1103,   438,  -229,  -229,   438,   438,  1172,   438,   438,    51,
    -229,   178,  -229,  -229,   191,   438,   438,   438,   438,  -229,
     438,   438,  -229,    83,  -229,  -229,   438,  -229
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,    18,    28,
       0,     0,   199,     0,     3,     5,    14,    13,     0,    15,
      10,     7,     0,     0,    58,     6,     8,     9,    11,     0,
     152,    12,    17,    16,    24,    62,   199,     0,   187,     0,
     182,     0,     0,   143,   146,   123,   120,     0,   122,   119,
       0,     0,   206,   207,   208,   209,   210,   202,   203,   211,
       0,    37,    48,    53,    52,    49,    51,    98,    99,    50,
      97,   100,     0,   101,     0,     0,     0,     0,     0,     0,
     163,     0,   170,   178,     0,    19,    36,     0,     0,    30,
      29,     0,   200,    62,     0,   156,     1,     4,     0,     0,
      55,    54,     0,    49,    51,    60,    56,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
       0,   124,   121,     0,   190,     0,     0,   192,    84,    88,
      87,    85,    86,     0,    81,    80,     0,    91,    73,    74,
      64,    65,    66,    67,    68,    69,    70,    75,    92,    71,
      72,    96,    95,    82,    83,    78,    79,     0,    76,     0,
      77,     0,    93,    94,     0,     0,     0,     0,     0,     0,
     204,   205,   127,     0,     0,     0,   103,    26,     0,   174,
     160,   162,     0,   172,     0,     0,   168,     0,     0,    36,
       0,     0,    51,    32,    31,    63,     0,   154,     0,   157,
      20,     0,    51,    57,    59,     0,     0,     0,     0,    24,
      25,   201,   183,   185,     0,     0,     0,     0,   147,   144,
       0,     0,   118,     0,   117,   105,    38,     0,   191,   193,
     194,    89,    90,   134,    40,    42,    41,    39,    43,    44,
      45,    46,    47,     0,   133,   102,     0,   127,     0,   179,
     175,   176,     0,    27,   165,   167,   173,   171,     0,    34,
      33,     0,   158,     0,    21,     0,     0,     0,     0,   186,
     184,     0,     0,     0,     0,     0,     0,     0,   107,   198,
     196,   195,     0,     0,   136,   128,   104,     0,   125,   180,
     177,     0,     0,    34,   155,   159,     0,     0,     0,   188,
      22,     0,   148,     0,     0,   140,     0,     0,   109,     0,
     106,   129,     0,   197,     0,     0,     0,     0,   128,     0,
     181,   161,     0,    35,     0,     0,     0,    23,   150,     0,
       0,     0,   113,     0,   111,   108,     0,   131,     0,   135,
       0,     0,   126,   166,   149,     0,     0,     0,     0,     0,
     110,     0,   115,   130,     0,   138,     0,   137,   151,   189,
     141,   142,   114,     0,   112,   132,   139,   116
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,    98,   199,  -229,    -1,   261,  -229,  -229,     8,
     425,  -229,  -229,  -229,     5,   155,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,     3,  -229,  -229,   -66,  -228,  -149,  -229,
    -229,  -229,   333,  -229,  -229,  -229,   346,  -229,  -229,  -103,
     295,  -229,  -229,   -71,  -229,   274,  -229,  -229,  -229,  -229,
     150,  -229,  -229,  -229,  -191,     0,    49,  -229,  -229,  -229,
    -229,  -229
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,   188,
      86,    61,    21,    22,    23,    24,   164,   165,   166,   167,
     168,    62,    25,    46,    47,    48,    74,   278,   245,    26,
     284,    27,    42,    43,    28,    29,    30,    94,   199,    79,
      80,    81,   178,    82,   251,    39,    31,   114,    37,    32,
      63,    64,   126,   230,   127,    65,    66,    67,    68,    69,
      70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    38,    40,    44,    49,   179,    49,    83,   176,    73,
      92,    95,   217,    72,    34,    91,    85,    89,    45,   121,
      75,   100,   103,   306,   107,   246,   174,   102,   287,   196,
     101,   332,   105,   105,    76,   197,    36,   105,   280,   307,
      96,    44,   175,    41,  -125,   119,    10,   309,    49,    35,
     352,   122,    76,   106,   119,   195,     1,   203,     2,    93,
     282,   283,   308,    35,     3,     4,    11,     5,     6,    77,
      78,   104,    49,    76,     7,   172,    83,   180,   181,    36,
       8,    83,   335,    36,    36,     9,   191,   103,    36,    36,
     313,    10,    36,   117,   285,    12,   193,   362,    36,   112,
      11,    36,    98,   351,    91,    92,   201,    40,   184,   185,
     209,   211,    34,   113,   223,    83,   218,    92,   111,   222,
     225,   214,    36,     1,   115,     2,   221,   310,   330,   367,
     190,     3,     4,    34,     5,     6,   192,   190,   318,   -25,
      12,     7,   190,   117,    87,    36,   118,     8,   202,   224,
      33,    51,     9,   264,    93,   276,   120,   331,    10,   210,
     269,    35,   297,    36,    33,   327,    93,    11,    76,   216,
     342,   277,    88,    76,   296,    49,   190,    36,   247,   289,
     286,   169,    35,   333,   254,   255,   169,   353,    52,    53,
      54,    55,    56,    36,    57,    58,    59,   349,   262,   329,
     110,   363,   -24,    77,    78,   365,   334,    12,    77,    78,
     212,   111,    34,    97,   182,    34,   111,    36,   -61,   320,
     350,   -61,    36,   275,   364,  -200,   109,   173,  -164,   243,
     -62,   233,   -25,    34,   206,   319,   183,  -126,   -61,  -169,
     190,   -61,   198,  -164,   119,   110,   119,   207,    49,    50,
      83,   288,   119,  -126,  -169,   187,    51,   124,   190,   228,
     204,    35,    33,   295,    35,    83,   274,   170,   171,   215,
      34,    34,   219,   229,    34,   231,   301,   311,   316,   317,
     232,   304,    35,    33,   206,   244,   248,   249,   250,   252,
      83,   321,   256,    52,    53,    54,    55,    56,    36,    57,
      58,    59,    34,    34,   258,    34,   260,   311,   261,   263,
    -200,   271,   337,   270,   272,    34,   265,   266,   267,    35,
      35,   268,   343,    35,    34,   281,    72,   273,    34,   290,
     291,   292,   303,   337,   294,   299,   312,   322,    34,    34,
     315,    34,   324,   325,    34,    34,   277,    34,    34,   311,
     336,    35,    35,   341,    35,    34,    34,    34,    34,   345,
      34,    34,    33,   337,    35,    33,    34,   347,   348,   302,
     354,   208,   305,    35,   116,   108,   186,    35,     0,     0,
       0,   205,     0,    33,     0,     0,     0,    35,    35,     0,
      35,     0,     0,    35,    35,     0,    35,    35,     0,     0,
       0,   328,     0,     0,    35,    35,    35,    35,     0,    35,
      35,    97,     0,   339,     0,    35,     0,     0,     0,     0,
      33,    33,   344,     0,    33,     0,     0,     0,     0,     0,
      60,     0,    97,     0,    90,     0,   355,     0,     0,   357,
       0,     0,     0,   358,     0,   360,   361,     0,     1,     0,
       2,     0,    33,    33,   366,    33,     3,     4,     0,     5,
       6,     0,     0,     0,     0,    33,     7,     0,     0,    97,
       0,     0,     8,     0,    33,   123,   125,     9,    33,     0,
       0,     0,     0,    10,     0,     0,     0,     0,    33,    33,
       0,    33,    11,     0,    33,    33,     0,    33,    33,     0,
     177,    97,     0,     0,    97,    33,    33,    33,    33,   189,
      33,    33,   189,   194,     0,     0,    33,     0,     0,     0,
       0,     0,    84,   200,   189,     0,     0,    97,     0,    51,
       0,     0,    12,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    84,   213,     0,    97,     0,    97,    97,    51,    97,
      97,   234,     0,     0,     0,    97,    52,    53,    54,    55,
      56,    36,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,   235,     0,   236,     0,   237,    84,     0,   238,
     239,   240,   241,   242,    51,    52,    53,    54,    55,    56,
      36,    57,    58,    59,   128,     0,     0,   253,     0,     0,
       0,     0,   257,     0,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   220,   131,   132,   133,
       0,    52,    53,    54,    55,    56,    36,    57,    58,    59,
       0,     0,     0,     0,     0,   134,   135,   136,   137,     0,
       0,     0,   279,    50,   125,     0,     0,   138,   139,   140,
      51,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,   156,   157,   158,
     159,   160,    84,   293,   161,   162,   163,     0,     0,    51,
       0,   298,     0,     0,     0,   128,     0,    52,    53,    54,
      55,    56,    36,    57,    58,    59,   125,   314,     0,     0,
       0,     0,   -36,     0,     0,   129,   130,     0,   131,   132,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    36,    57,    58,    59,     0,   134,   135,   136,   137,
       0,   340,     0,     0,     0,     0,     0,     0,   138,   139,
     140,   346,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   128,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,   161,   162,   163,     0,     0,
       0,     0,     0,     0,   129,   130,     0,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   134,   135,   136,   137,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   128,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,   161,   162,   163,     0,     0,     0,
       0,     0,     0,   129,   130,     0,   131,   132,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   128,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,   161,   162,   163,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   323,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   128,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,   161,   162,   163,     0,     0,     0,   326,     0,
       0,   129,   130,     0,   131,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     128,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,   161,   162,   163,     0,     0,     0,     0,     0,     0,
     129,   130,     0,   131,   132,   338,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   128,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     161,   162,   163,     0,     0,     0,     0,     0,     0,   129,
     130,     0,   131,   132,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   128,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,   161,
     162,   163,     0,     0,     0,     0,     0,     0,   129,   130,
       0,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   359,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   128,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,   161,   162,
     163,     0,     0,     0,     0,     0,     0,   129,   130,     0,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,    84,   300,     0,     0,     0,     0,     0,    51,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
     156,   157,   158,   159,   160,    99,     0,   161,   162,   163,
       0,     0,    51,     0,     0,     0,    52,    53,    54,    55,
      56,    36,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    12,    57,    58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,    76,     6,     7,    74,     6,
      10,    11,   115,    23,    14,    10,     8,     9,    24,    24,
      31,    22,    22,     7,    12,   174,     7,    22,     7,    45,
      22,    46,    23,    23,    45,    51,    94,    23,   229,    23,
       0,    41,    23,    45,    23,    24,    45,   275,    48,     0,
      46,    48,    45,    43,    24,    46,    10,    43,    12,    10,
      14,    15,    46,    14,    18,    19,    54,    21,    22,    80,
      81,    22,    72,    45,    28,    72,    76,    77,    78,    94,
      34,    81,   310,    94,    94,    39,    87,    87,    94,    94,
     281,    45,    94,    23,   243,    94,    88,    46,    94,    31,
      54,    94,    45,   331,    99,   105,    98,   107,    80,    81,
     110,   111,   112,    45,    45,   115,    46,   117,    24,   119,
     120,   113,    94,    10,    45,    12,   118,   276,    15,    46,
      23,    18,    19,   133,    21,    22,    87,    23,   287,    45,
      94,    28,    23,    23,    45,    94,    26,    34,    99,    80,
       0,    52,    39,    46,   105,     7,    22,   306,    45,   110,
      46,   112,   265,    94,    14,    46,   117,    54,    45,    46,
     319,    23,    73,    45,    46,   175,    23,    94,   175,   250,
     246,    24,   133,    23,   184,   185,    24,   336,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    23,   198,    46,
      43,    23,    45,    80,    81,   354,    46,    94,    80,    81,
     112,    24,   212,    14,    31,   215,    24,    94,    23,   290,
      46,    26,    94,   223,    46,    23,    24,     7,    31,     7,
      43,   133,    45,   233,    44,     7,    23,     7,    43,    31,
      23,    46,    24,    46,    24,    43,    24,    57,   248,    45,
     250,   248,    24,    23,    46,    43,    52,    53,    23,    53,
     105,   212,   112,   263,   215,   265,    31,    98,    99,    31,
     270,   271,   117,    23,   274,    29,   268,   277,    14,    15,
      26,   273,   233,   133,    44,    94,    23,    46,    23,    23,
     290,   291,    23,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   302,   303,    23,   305,    46,   307,    46,    24,
      24,    31,   312,   215,    46,   315,    45,    45,    45,   270,
     271,    45,   322,   274,   324,    23,    23,    45,   328,    23,
      81,    23,    31,   333,    51,    46,    23,    81,   338,   339,
      31,   341,    31,    46,   344,   345,    23,   347,   348,   349,
       7,   302,   303,    31,   305,   355,   356,   357,   358,    31,
     360,   361,   212,   363,   315,   215,   366,    31,    31,   271,
       7,   110,   274,   324,    41,    29,    81,   328,    -1,    -1,
      -1,   107,    -1,   233,    -1,    -1,    -1,   338,   339,    -1,
     341,    -1,    -1,   344,   345,    -1,   347,   348,    -1,    -1,
      -1,   303,    -1,    -1,   355,   356,   357,   358,    -1,   360,
     361,   212,    -1,   315,    -1,   366,    -1,    -1,    -1,    -1,
     270,   271,   324,    -1,   274,    -1,    -1,    -1,    -1,    -1,
       5,    -1,   233,    -1,     9,    -1,   338,    -1,    -1,   341,
      -1,    -1,    -1,   345,    -1,   347,   348,    -1,    10,    -1,
      12,    -1,   302,   303,   356,   305,    18,    19,    -1,    21,
      22,    -1,    -1,    -1,    -1,   315,    28,    -1,    -1,   270,
      -1,    -1,    34,    -1,   324,    50,    51,    39,   328,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,   338,   339,
      -1,   341,    54,    -1,   344,   345,    -1,   347,   348,    -1,
      75,   302,    -1,    -1,   305,   355,   356,   357,   358,    84,
     360,   361,    87,    88,    -1,    -1,   366,    -1,    -1,    -1,
      -1,    -1,    45,    46,    99,    -1,    -1,   328,    -1,    52,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   339,    -1,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,   355,    -1,   357,   358,    52,   360,
     361,   136,    -1,    -1,    -1,   366,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,   159,    -1,   161,    45,    -1,   164,
     165,   166,   167,   168,    52,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     6,    -1,    -1,   182,    -1,    -1,
      -1,    -1,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    84,    29,    30,    31,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      -1,    -1,   227,    45,   229,    -1,    -1,    59,    60,    61,
      52,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    45,   258,    86,    87,    88,    -1,    -1,    52,
      -1,   266,    -1,    -1,    -1,     6,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   281,   282,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    47,    48,    49,    50,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,   326,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     6,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     6,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,
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
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       6,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     6,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     6,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     6,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    45,    -1,    86,    87,    88,
      -1,    -1,    52,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      45,    54,    94,   101,   102,   103,   104,   105,   106,   107,
     108,   112,   113,   114,   115,   122,   129,   131,   134,   135,
     136,   146,   149,   150,   155,   156,    94,   148,   155,   145,
     155,    45,   132,   133,   155,    24,   123,   124,   125,   155,
      45,    52,    89,    90,    91,    92,    93,    95,    96,    97,
     110,   111,   121,   150,   151,   155,   156,   157,   158,   159,
     160,   161,    23,   123,   126,    31,    45,    80,    81,   139,
     140,   141,   143,   155,    45,   109,   110,    45,    73,   109,
     110,   114,   155,   156,   137,   155,     0,   103,    45,    45,
     105,   109,   114,   155,   156,    23,    43,    12,   136,    24,
      43,    24,    31,    45,   147,    45,   132,    23,    26,    24,
      22,    24,   123,   110,    53,   110,   152,   154,     6,    26,
      27,    29,    30,    31,    47,    48,    49,    50,    59,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    76,    77,    78,    79,    80,    81,    82,
      83,    86,    87,    88,   116,   117,   118,   119,   120,    24,
      98,    99,   123,     7,     7,    23,   126,   110,   142,   143,
     155,   155,    31,    23,    80,    81,   140,    43,   109,   110,
      23,   105,   156,   109,   110,    46,    45,    51,    24,   138,
      46,   109,   156,    43,   115,   145,    44,    57,   106,   155,
     156,   155,   102,    46,   109,    31,    46,   139,    46,   115,
      84,   109,   155,    45,    80,   155,    46,    31,    53,    23,
     153,    29,    26,   102,   110,   110,   110,   110,   110,   110,
     110,   110,   110,     7,    94,   128,   128,   123,    23,    46,
      23,   144,    23,   110,   155,   155,    23,   110,    23,   110,
      46,    46,   155,    24,    46,    45,    45,    45,    45,    46,
     102,    31,    46,    45,    31,   155,     7,    23,   127,   110,
     154,    23,    14,    15,   130,   128,   126,     7,   123,   143,
      23,    81,    23,   110,    51,   155,    46,   139,   110,    46,
      46,   109,   102,    31,   109,   102,     7,    23,    46,   127,
     128,   155,    23,   154,   110,    31,    14,    15,   128,     7,
     143,   155,    81,    46,    31,    46,    23,    46,   102,    46,
      15,   128,    46,    23,    46,   127,     7,   155,    31,   102,
     110,    31,   128,   155,   102,    31,   110,    31,    31,    23,
      46,   127,    46,   128,     7,   102,    31,   102,   102,    46,
     102,   102,    46,    23,    46,   128,   102,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   127,   127,   128,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   146,   146,   147,   147,   148,   149,   150,
     151,   151,   152,   152,   152,   152,   153,   153,   154,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   160,
     160,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     4,     5,     6,     1,     1,     3,     4,     1,     2,
       2,     3,     3,     4,     3,     5,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     5,     4,     6,     5,     7,     6,
       8,     7,     9,     7,     9,     8,    10,     4,     3,     1,
       1,     2,     1,     1,     2,     3,     5,     2,     4,     2,
       4,     3,     5,     1,     4,     7,     5,     8,     4,     5,
       6,     9,     9,     1,     3,     2,     1,     3,     6,     7,
       7,     8,     1,     2,     3,     5,     1,     2,     2,     3,
       2,     5,     2,     1,     2,     3,     6,     3,     2,     3,
       1,     3,     2,     3,     1,     2,     2,     3,     1,     3,
       2,     3,     1,     4,     5,     2,     3,     1,     5,     8,
       2,     3,     1,     2,     2,     3,     2,     3,     3,     1,
       1,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1
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
#line 88 "parser.y"
                   {line++;}
#line 1883 "parser.tab.c"
    break;

  case 20:
#line 111 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);}
#line 1889 "parser.tab.c"
    break;

  case 21:
#line 113 "parser.y"
        {(yyval.nval) = (yyvsp[-3].nval);}
#line 1895 "parser.tab.c"
    break;

  case 22:
#line 115 "parser.y"
        {(yyval.nval) = (yyvsp[-4].nval);}
#line 1901 "parser.tab.c"
    break;

  case 23:
#line 117 "parser.y"
        {(yyval.nval) = (yyvsp[-5].nval);}
#line 1907 "parser.tab.c"
    break;

  case 24:
#line 122 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1913 "parser.tab.c"
    break;

  case 25:
#line 124 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1919 "parser.tab.c"
    break;

  case 29:
#line 137 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1925 "parser.tab.c"
    break;

  case 30:
#line 139 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1931 "parser.tab.c"
    break;

  case 31:
#line 141 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1937 "parser.tab.c"
    break;

  case 32:
#line 143 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1943 "parser.tab.c"
    break;

  case 33:
#line 145 "parser.y"
                {print((yyvsp[-1].nval),&variables); }
#line 1949 "parser.tab.c"
    break;

  case 34:
#line 155 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1955 "parser.tab.c"
    break;

  case 35:
#line 157 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1961 "parser.tab.c"
    break;

  case 36:
#line 159 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1967 "parser.tab.c"
    break;

  case 37:
#line 164 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1973 "parser.tab.c"
    break;

  case 38:
#line 166 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1979 "parser.tab.c"
    break;

  case 39:
#line 168 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 1985 "parser.tab.c"
    break;

  case 40:
#line 170 "parser.y"
        {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables); printf("value is : %f\n",(yyval.nval).fval); }
#line 1991 "parser.tab.c"
    break;

  case 41:
#line 172 "parser.y"
        {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 1997 "parser.tab.c"
    break;

  case 42:
#line 174 "parser.y"
        {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2003 "parser.tab.c"
    break;

  case 48:
#line 184 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2009 "parser.tab.c"
    break;

  case 49:
#line 186 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2015 "parser.tab.c"
    break;

  case 50:
#line 188 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2021 "parser.tab.c"
    break;

  case 51:
#line 190 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2027 "parser.tab.c"
    break;

  case 52:
#line 192 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2033 "parser.tab.c"
    break;

  case 53:
#line 194 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2039 "parser.tab.c"
    break;

  case 54:
#line 201 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables)); printf("value isddd : %f\n",(yyvsp[0].nval).fval); }
#line 2045 "parser.tab.c"
    break;

  case 56:
#line 207 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2051 "parser.tab.c"
    break;

  case 58:
#line 211 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2057 "parser.tab.c"
    break;

  case 61:
#line 217 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2063 "parser.tab.c"
    break;

  case 62:
#line 219 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2069 "parser.tab.c"
    break;

  case 63:
#line 221 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2075 "parser.tab.c"
    break;

  case 97:
#line 276 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2081 "parser.tab.c"
    break;

  case 98:
#line 278 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2087 "parser.tab.c"
    break;

  case 99:
#line 280 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2093 "parser.tab.c"
    break;

  case 100:
#line 282 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2099 "parser.tab.c"
    break;

  case 188:
#line 443 "parser.y"
{items(&dictionary,&variables);}
#line 2105 "parser.tab.c"
    break;

  case 189:
#line 447 "parser.y"
        {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 2111 "parser.tab.c"
    break;

  case 198:
#line 465 "parser.y"
                { insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 2117 "parser.tab.c"
    break;

  case 199:
#line 470 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 2123 "parser.tab.c"
    break;

  case 200:
#line 474 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2129 "parser.tab.c"
    break;

  case 201:
#line 476 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 2135 "parser.tab.c"
    break;

  case 202:
#line 481 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2141 "parser.tab.c"
    break;

  case 203:
#line 483 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 2147 "parser.tab.c"
    break;

  case 204:
#line 488 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2153 "parser.tab.c"
    break;

  case 205:
#line 490 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2159 "parser.tab.c"
    break;

  case 206:
#line 496 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2165 "parser.tab.c"
    break;

  case 207:
#line 498 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2171 "parser.tab.c"
    break;

  case 208:
#line 500 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2177 "parser.tab.c"
    break;

  case 209:
#line 505 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2183 "parser.tab.c"
    break;

  case 210:
#line 507 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2189 "parser.tab.c"
    break;

  case 211:
#line 511 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2195 "parser.tab.c"
    break;


#line 2199 "parser.tab.c"

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

#line 514 "parser.y"



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
	fprintf(stderr, "Parse error in line %d\n", yylineno);
	exit(1);
}




