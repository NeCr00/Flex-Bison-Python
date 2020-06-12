/* A Bison parser, made by GNU Bison 3.5.3.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.3"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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

#line 137 "parser.tab.c"

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
	

#line 251 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   1461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

#define YYUNDEFTOK  2
#define YYMAXUTOK   352


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
     471,   473,   477,   483,   485,   490,   492,   498,   500,   502,
     507,   509,   513
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "NONE", "TRUE", "AND", "AS",
  "ASSERT", "BREAK", "CLASS", "CONTINUE", "DEF", "DEL", "ELIF", "ELSE",
  "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF", "IMPORT", "COMMA",
  "DOT", "COL", "IN", "IS", "LAMBDA", "NOT", "OR", "COLON", "PASS",
  "RAISE", "RETURN", "TRY", "WHILE", "WITH", "YIELD", "PRINT", "EXEC",
  "INC", "DEC", "EQUAL", "SETDEFAULT", "LPAR", "RPAR", "LESS_THAN_OP",
  "GREATER_THAN_OP", "MINUS", "AND_EXP", "NEWLINE", "LBRA", "RBRA",
  "PAPAKI", "QUOTATION", "APOSTROPHE", "ITEMS", "ELLIPSIS", "RIGHT_ASSIGN",
  "LEFT_ASSIGN", "ADD_ASSIGN", "EXA", "SUB_ASSIGN", "MUL_ASSIGN",
  "POW_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "PERCENT",
  "OR_SIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "SLASH",
  "DOUBLESLASH", "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN", "DECINTEGER",
  "OCTINTEGER", "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT", "IDENTIFIER",
  "SHORTSTRING", "LONGSTRING", "IMAGNUMBER", "'l'", "'L'", "$accept",
  "program", "statement_list", "statement", "return_stmt", "call",
  "primary", "lambda_form", "print_stmt", "expression_list", "expression",
  "atom", "assignment_stmt", "assignment_stmt_targer_list", "target_list",
  "target", "assignment_op", "arithmetic_op", "comparison_op",
  "logical_op", "bitwise_op", "literal", "import_stmt", "module",
  "relative_module", "dots", "modules", "import_stmt_identifiers", "name",
  "if_stmt", "elif_stmt", "for_stmt", "for_target_list", "for_target",
  "funcdef", "decorators", "decorator", "dotted_name", "dot_identifiers",
  "parameter_list", "defparameter", "defparameters", "sublist",
  "parameter", "parameters", "funcname", "classdef", "inheritance",
  "classname", "dict_items", "dict_setdefault", "dict_display",
  "key_datum_list", "key_datums", "key_datum", "attr_identifier",
  "identifier", "stringliteral", "longinteger", "integer", "floatnumber",
  "imagnumber", YY_NULLPTR
};
#endif

# ifdef YYPRINT
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
# endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -56,   -56,   -12,    -8,  1346,    -6,    61,  1355,   479,
       5,   -56,   145,    44,    46,  -244,  -244,  -244,     8,  -244,
    -244,  -244,  1364,   169,  -244,  -244,  -244,  -244,  -244,    42,
    -244,  -244,  -244,  -244,   165,     4,  -244,    98,  -244,    73,
    -244,   -12,   216,  -244,  -244,  -244,    70,   109,    -1,  -244,
    1346,   206,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
     653,  -244,  -244,  -244,  -244,   141,   174,  -244,  -244,   131,
    -244,  -244,   -56,    19,    23,  1346,     7,   -56,   -56,   178,
     182,    99,   180,  -244,  1355,   209,  1283,  1355,  1355,   209,
     731,    14,   141,   210,   -20,   219,  -244,  -244,   508,  1364,
    -244,   209,   172,    12,    89,     5,  -244,   -56,  -244,   -56,
     -15,   -56,    46,   578,   213,    57,    16,     5,  1284,   -56,
     -10,  -244,    70,   800,  -244,   869,   193,   224,  -244,  -244,
     220,   222,  -244,    46,  -244,  -244,  1346,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  1346,  -244,  1346,
    -244,  1346,  -244,  -244,  1346,  1346,  1346,  1346,  1346,     1,
    -244,  -244,   183,   161,   161,   -56,   233,  1283,   211,   237,
     238,  -244,  1346,   185,   -56,   -56,   241,  1346,   246,   800,
    1346,   228,   165,   209,   731,  -244,   -56,   235,  -244,   -56,
     258,  -244,   103,   141,  -244,  -244,   225,  -244,   242,   243,
    -244,   244,   141,   210,    46,  -244,   107,    46,   259,   245,
    -244,  -244,   249,   205,  -244,   -56,  -244,   201,  -244,  1346,
    -244,  1346,   283,  -244,  -244,   425,  1283,  1283,  1283,  1283,
    1283,  1283,  1283,  1283,  1283,   161,  -244,  -244,   285,   195,
     -56,  -244,     7,   287,   230,  1283,   289,  -244,   191,  1283,
    1346,  1283,  -244,   262,  -244,   -56,  -244,    76,  1346,   269,
    1293,  -244,    46,    46,   288,  1355,    46,   140,   161,   -56,
     293,  1283,  -244,  1346,  1346,   292,   226,  -244,   233,   161,
     196,  -244,     7,   -56,   239,   938,  -244,  -244,   296,   272,
    1007,  -244,  -244,   112,    46,    46,   116,   600,   161,    20,
    -244,   151,   305,   322,   -56,  -244,  1076,    46,  1346,   300,
     204,   161,  -244,  -244,   -56,  -244,    46,   301,  1346,  -244,
      46,   302,   303,   154,  -244,    58,  -244,   293,   161,   329,
      46,    46,  1145,    46,  -244,  -244,    46,    46,  1214,    46,
      46,    78,  -244,   160,  -244,  -244,   161,    46,    46,    46,
      46,  -244,    46,    46,  -244,    79,  -244,  -244,    46,  -244
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,    18,    28,
       0,     0,   202,     0,     3,     5,    14,    13,     0,    15,
      10,     7,     0,     0,    58,     6,     8,     9,    11,     0,
     152,    12,    17,    16,    62,    24,   202,     0,   187,     0,
     182,     0,     0,   143,   146,   123,   120,     0,   122,   119,
       0,     0,   207,   208,   209,   210,   211,   203,   204,   212,
       0,    37,    48,    53,    52,    51,    49,    98,    99,    50,
      97,   100,     0,   101,     0,     0,     0,     0,     0,     0,
     163,     0,   170,   178,     0,    19,    36,     0,     0,    30,
      29,     0,    62,   199,     0,   156,     1,     4,     0,     0,
      55,    54,     0,    51,    49,    60,    56,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
       0,   124,   121,     0,   190,     0,     0,   192,    84,    88,
      87,    85,    86,     0,    81,    80,     0,    91,    73,    74,
      64,    65,    66,    67,    68,    69,    70,    75,    92,    71,
      72,    96,    95,    82,    83,    78,    79,     0,    76,     0,
      77,     0,    93,    94,     0,     0,     0,     0,     0,     0,
     205,   206,   127,     0,     0,     0,   103,    26,     0,   174,
     160,   162,     0,   172,     0,     0,   168,     0,     0,    36,
       0,     0,    51,    32,    31,    63,     0,     0,   154,     0,
     157,    20,     0,    51,    57,    59,     0,   200,     0,     0,
     201,     0,    25,    24,   183,   185,     0,     0,     0,     0,
     147,   144,     0,     0,   118,     0,   117,   105,    38,     0,
     191,   193,   194,    89,    90,   134,    40,    42,    41,    39,
      43,    44,    45,    46,    47,     0,   133,   102,     0,   127,
       0,   179,   175,   176,     0,    27,   165,   167,   173,   171,
       0,    34,    33,     0,   158,     0,    21,     0,     0,     0,
       0,   186,   184,     0,     0,     0,     0,     0,     0,     0,
     107,   198,   196,   195,     0,     0,   136,   128,   104,     0,
     125,   180,   177,     0,     0,    34,   155,   159,     0,     0,
       0,   188,    22,     0,   148,     0,     0,   140,     0,     0,
     109,     0,   106,   129,     0,   197,     0,     0,     0,     0,
     128,     0,   181,   161,     0,    35,     0,     0,     0,    23,
     150,     0,     0,     0,   113,     0,   111,   108,     0,   131,
       0,   135,     0,     0,   126,   166,   149,     0,     0,     0,
       0,     0,   110,     0,   115,   130,     0,   138,     0,   137,
     151,   189,   141,   142,   114,     0,   112,   132,   139,   116
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,   -72,   199,  -244,     2,   227,  -244,  -244,    10,
     427,  -244,  -244,  -244,    -2,   121,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,     3,  -244,  -244,   -61,  -243,  -162,  -244,
    -244,  -244,   298,  -244,  -244,  -244,   308,  -244,  -244,  -100,
     261,  -244,  -244,   -71,  -244,   248,  -244,  -244,  -244,  -244,
     150,  -244,  -244,  -244,  -210,    49,     0,  -244,  -244,  -244,
    -244,  -244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,   188,
      86,    61,    21,    22,    23,    24,   164,   165,   166,   167,
     168,    62,    25,    46,    47,    48,    74,   280,   247,    26,
     286,    27,    42,    43,    28,    29,    30,    94,   200,    79,
      80,    81,   178,    82,   253,    39,    31,   114,    37,    32,
      63,    64,   126,   232,   127,    65,    66,    67,    68,    69,
      70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    38,    40,    44,    49,   179,    49,    83,    91,    73,
      93,    95,   248,   176,    35,   219,    45,    72,    85,    89,
     102,   282,   104,   121,   100,   197,   173,  -199,   110,   208,
     174,   198,   101,    41,   311,   225,   109,   105,    36,   117,
     214,    44,   209,   119,    96,   208,   175,   111,    49,    34,
      10,   122,    76,    98,   107,   -62,     1,   -25,     2,    92,
     195,   235,   220,    34,     3,     4,   334,     5,     6,   337,
     226,   103,    49,   315,     7,   172,    83,   180,   181,    36,
       8,    83,    36,   287,    36,     9,    36,   104,    36,   191,
     353,    10,    75,    36,   119,    36,    11,    91,   193,    12,
      11,    36,    76,   218,   354,    93,    76,    40,   202,   207,
     210,   213,    35,   169,    36,    83,   312,    93,   115,   224,
     227,    76,   298,   216,   364,   369,   190,   320,   223,   112,
     190,   120,   111,    35,   -24,   190,   192,    77,    78,   190,
      12,    77,    78,   113,    76,   272,   333,   308,   203,   266,
      33,    36,    36,   271,    92,    36,    77,    78,   329,   344,
     212,    34,   331,   309,    33,   109,    92,   299,   -61,   210,
      36,   -61,    36,    36,   335,    49,   355,   351,   249,   184,
     185,   291,    34,   365,   256,   257,   310,   288,   -61,   109,
     245,   -61,   105,    36,   367,   105,   210,   336,   169,   264,
     352,   304,   289,   321,   307,   183,   366,   119,   278,   182,
     -25,  -126,   106,    97,    35,   204,  -164,    35,  -125,   119,
     119,   322,  -169,   187,   279,   277,   205,  -126,   190,   170,
     171,  -164,   190,   330,   196,    35,   276,  -169,   221,   117,
     318,   319,   118,   199,   217,   341,   230,   231,   234,   233,
      49,    50,    83,   290,   346,   246,   250,   251,    51,   124,
     252,   254,    33,    34,   258,   297,    34,    83,   357,   260,
     267,   359,    35,    35,   262,   360,    35,   362,   363,   313,
     303,   263,   265,    33,    34,   306,   368,   268,   269,   270,
     273,   274,    83,   323,   275,    52,    53,    54,    55,    56,
      36,    57,    58,    59,    35,    35,   283,    35,    72,   313,
     292,   293,   294,   296,   339,   301,   314,    35,   327,   305,
     324,    34,    34,   317,   345,    34,    35,   326,   279,   338,
      35,   343,   347,   349,   350,   339,   356,   108,   211,   116,
      35,    35,   186,    35,     0,     0,    35,    35,     0,    35,
      35,   313,     0,    34,    34,   206,    34,    35,    35,    35,
      35,     0,    35,    35,    33,   339,    34,    33,    35,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    34,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    34,
      34,     0,    34,     0,     0,    34,    34,     0,    34,    34,
       0,     0,     0,     0,     0,     0,    34,    34,    34,    34,
       0,    34,    34,    97,     0,     0,     0,    34,     0,     0,
       0,     0,    33,    33,     0,     0,    33,     0,     0,     0,
       0,     0,    60,     0,    97,     1,    90,     2,     0,   284,
     285,     0,     0,     3,     4,     0,     5,     6,     0,     0,
       0,     0,     0,     7,    33,    33,     0,    33,     0,     8,
       0,     0,     0,     0,     9,     0,     0,    33,     0,     0,
      10,    97,     0,     0,     0,     0,    33,   123,   125,    11,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    33,     0,    33,     0,     0,    33,    33,     0,    33,
      33,     0,   177,    97,     0,     0,    97,    33,    33,    33,
      33,   189,    33,    33,   189,   194,     0,     0,    33,    12,
       0,     0,     0,     0,    87,     0,   189,     0,     0,    97,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,    88,    84,   201,     0,    97,     0,    97,    97,
      51,    97,    97,   236,     0,     0,     0,    97,    52,    53,
      54,    55,    56,    36,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,     0,   239,     0,
       0,   240,   241,   242,   243,   244,     0,    52,    53,    54,
      55,    56,    36,    57,    58,    59,     0,     0,     0,   255,
       1,     0,     2,     0,   259,   332,     0,   261,     3,     4,
       0,     5,     6,    84,   215,     0,     0,     0,     7,     0,
      51,     0,     0,     0,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,   281,     0,   125,   128,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    36,    57,    58,    59,     0,     0,     0,   129,
     130,     0,   131,   132,   133,     0,     0,   295,     0,     0,
       0,     0,     0,     0,    12,   300,     0,     0,     0,     0,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
     125,   316,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,   157,   158,   159,   160,   128,     0,   161,
     162,   163,     0,     0,     0,   342,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   348,     0,   129,   130,     0,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   128,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,   161,   162,   163,
       0,     0,     0,     0,     0,     0,   129,   130,     0,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   128,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,   161,   162,   163,     0,
       0,     0,     0,     0,     0,   129,   130,     0,   131,   132,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   128,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,   161,   162,   163,     0,     0,
       0,     0,     0,     0,   129,   130,     0,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   325,   134,   135,   136,   137,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   128,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,   161,   162,   163,     0,     0,     0,
     328,     0,     0,   129,   130,     0,   131,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   128,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,   161,   162,   163,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,   340,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   128,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,   161,   162,   163,     0,     0,     0,     0,     0,
       0,   129,   130,     0,   131,   132,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     128,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,   161,   162,   163,     0,     0,     0,     0,     0,     0,
     129,   130,     0,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   128,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     161,   162,   163,     0,     0,     0,     0,     0,     0,   129,
     130,     0,   131,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
     134,   135,   136,   137,     0,     0,    51,     0,    84,   302,
       0,     0,   138,   139,   140,    51,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,   156,   157,   158,   159,   160,     0,   222,   161,
     162,   163,     0,    52,    53,    54,    55,    56,    36,    57,
      58,    59,    52,    53,    54,    55,    56,    36,    57,    58,
      59,    50,     0,     0,     0,     0,     0,     0,    51,     0,
      84,     0,     0,     0,     0,     0,     0,    51,     0,    99,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      36,    57,    58,    59,    52,    53,    54,    55,    56,    36,
      57,    58,    59,    52,    53,    54,    55,    56,    12,    57,
      58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,    76,     6,     7,    10,     6,
      10,    11,   174,    74,    14,   115,    24,    23,     8,     9,
      22,   231,    22,    24,    22,    45,     7,    23,    24,    44,
       7,    51,    22,    45,   277,    45,    24,    23,    94,    23,
     112,    41,    57,    24,     0,    44,    23,    43,    48,     0,
      45,    48,    45,    45,    12,    43,    10,    45,    12,    10,
      46,   133,    46,    14,    18,    19,    46,    21,    22,   312,
      80,    22,    72,   283,    28,    72,    76,    77,    78,    94,
      34,    81,    94,   245,    94,    39,    94,    87,    94,    87,
     333,    45,    31,    94,    24,    94,    54,    99,    88,    94,
      54,    94,    45,    46,    46,   105,    45,   107,    98,   109,
     110,   111,   112,    24,    94,   115,   278,   117,    45,   119,
     120,    45,    46,   113,    46,    46,    23,   289,   118,    31,
      23,    22,    43,   133,    45,    23,    87,    80,    81,    23,
      94,    80,    81,    45,    45,   217,   308,     7,    99,    46,
       0,    94,    94,    46,   105,    94,    80,    81,    46,   321,
     111,   112,    46,    23,    14,    24,   117,   267,    23,   169,
      94,    26,    94,    94,    23,   175,   338,    23,   175,    80,
      81,   252,   133,    23,   184,   185,    46,   248,    43,    24,
       7,    46,    23,    94,   356,    23,   196,    46,    24,   199,
      46,   273,     7,     7,   276,    23,    46,    24,     7,    31,
      45,     7,    43,    14,   214,    43,    31,   217,    23,    24,
      24,   292,    31,    43,    23,   225,   105,    23,    23,    98,
      99,    46,    23,   305,    24,   235,    31,    46,   117,    23,
      14,    15,    26,    24,    31,   317,    53,    23,    26,    29,
     250,    45,   252,   250,   326,    94,    23,    46,    52,    53,
      23,    23,   112,   214,    23,   265,   217,   267,   340,    23,
      45,   343,   272,   273,    46,   347,   276,   349,   350,   279,
     270,    46,    24,   133,   235,   275,   358,    45,    45,    45,
      31,    46,   292,   293,    45,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   304,   305,    23,   307,    23,   309,
      23,    81,    23,    51,   314,    46,    23,   317,    46,    31,
      81,   272,   273,    31,   324,   276,   326,    31,    23,     7,
     330,    31,    31,    31,    31,   335,     7,    29,   111,    41,
     340,   341,    81,   343,    -1,    -1,   346,   347,    -1,   349,
     350,   351,    -1,   304,   305,   107,   307,   357,   358,   359,
     360,    -1,   362,   363,   214,   365,   317,   217,   368,    -1,
      -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   340,
     341,    -1,   343,    -1,    -1,   346,   347,    -1,   349,   350,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,
      -1,   362,   363,   214,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,   272,   273,    -1,    -1,   276,    -1,    -1,    -1,
      -1,    -1,     5,    -1,   235,    10,     9,    12,    -1,    14,
      15,    -1,    -1,    18,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,   304,   305,    -1,   307,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,   317,    -1,    -1,
      45,   272,    -1,    -1,    -1,    -1,   326,    50,    51,    54,
     330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,   341,    -1,   343,    -1,    -1,   346,   347,    -1,   349,
     350,    -1,    75,   304,    -1,    -1,   307,   357,   358,   359,
     360,    84,   362,   363,    87,    88,    -1,    -1,   368,    94,
      -1,    -1,    -1,    -1,    45,    -1,    99,    -1,    -1,   330,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    45,    46,    -1,   357,    -1,   359,   360,
      52,   362,   363,   136,    -1,    -1,    -1,   368,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   159,    -1,   161,    -1,
      -1,   164,   165,   166,   167,   168,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,   182,
      10,    -1,    12,    -1,   187,    15,    -1,   190,    18,    19,
      -1,    21,    22,    45,    46,    -1,    -1,    -1,    28,    -1,
      52,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,   229,    -1,   231,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    26,
      27,    -1,    29,    30,    31,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    94,   268,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
     283,   284,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,     6,    -1,    86,
      87,    88,    -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,   328,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     6,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     6,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     6,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    -1,    -1,    -1,
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
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      47,    48,    49,    50,    -1,    -1,    52,    -1,    45,    46,
      -1,    -1,    59,    60,    61,    52,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    84,    86,
      87,    88,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    89,    90,    91,    92,    93,    94,    95,
      96,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      45,    54,    94,   101,   102,   103,   104,   105,   106,   107,
     108,   112,   113,   114,   115,   122,   129,   131,   134,   135,
     136,   146,   149,   150,   155,   156,    94,   148,   156,   145,
     156,    45,   132,   133,   156,    24,   123,   124,   125,   156,
      45,    52,    89,    90,    91,    92,    93,    95,    96,    97,
     110,   111,   121,   150,   151,   155,   156,   157,   158,   159,
     160,   161,    23,   123,   126,    31,    45,    80,    81,   139,
     140,   141,   143,   156,    45,   109,   110,    45,    73,   109,
     110,   114,   155,   156,   137,   156,     0,   103,    45,    45,
     105,   109,   114,   155,   156,    23,    43,    12,   136,    24,
      24,    43,    31,    45,   147,    45,   132,    23,    26,    24,
      22,    24,   123,   110,    53,   110,   152,   154,     6,    26,
      27,    29,    30,    31,    47,    48,    49,    50,    59,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    76,    77,    78,    79,    80,    81,    82,
      83,    86,    87,    88,   116,   117,   118,   119,   120,    24,
      98,    99,   123,     7,     7,    23,   126,   110,   142,   143,
     156,   156,    31,    23,    80,    81,   140,    43,   109,   110,
      23,   105,   155,   109,   110,    46,    24,    45,    51,    24,
     138,    46,   109,   155,    43,   115,   145,   156,    44,    57,
     156,   106,   155,   156,   102,    46,   109,    31,    46,   139,
      46,   115,    84,   109,   156,    45,    80,   156,    46,    31,
      53,    23,   153,    29,    26,   102,   110,   110,   110,   110,
     110,   110,   110,   110,   110,     7,    94,   128,   128,   123,
      23,    46,    23,   144,    23,   110,   156,   156,    23,   110,
      23,   110,    46,    46,   156,    24,    46,    45,    45,    45,
      45,    46,   102,    31,    46,    45,    31,   156,     7,    23,
     127,   110,   154,    23,    14,    15,   130,   128,   126,     7,
     123,   143,    23,    81,    23,   110,    51,   156,    46,   139,
     110,    46,    46,   109,   102,    31,   109,   102,     7,    23,
      46,   127,   128,   156,    23,   154,   110,    31,    14,    15,
     128,     7,   143,   156,    81,    46,    31,    46,    23,    46,
     102,    46,    15,   128,    46,    23,    46,   127,     7,   156,
      31,   102,   110,    31,   128,   156,   102,    31,   110,    31,
      31,    23,    46,   127,    46,   128,     7,   102,    31,   102,
     102,    46,   102,   102,    46,    23,    46,   128,   102,    46
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
     155,   155,   156,   157,   157,   158,   158,   159,   159,   159,
     160,   160,   161
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
       3,     3,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
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

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
#line 1934 "parser.tab.c"
    break;

  case 20:
#line 111 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);}
#line 1940 "parser.tab.c"
    break;

  case 21:
#line 113 "parser.y"
        {(yyval.nval) = (yyvsp[-3].nval);}
#line 1946 "parser.tab.c"
    break;

  case 22:
#line 115 "parser.y"
        {(yyval.nval) = (yyvsp[-4].nval);}
#line 1952 "parser.tab.c"
    break;

  case 23:
#line 117 "parser.y"
        {(yyval.nval) = (yyvsp[-5].nval);}
#line 1958 "parser.tab.c"
    break;

  case 24:
#line 122 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1964 "parser.tab.c"
    break;

  case 25:
#line 124 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1970 "parser.tab.c"
    break;

  case 29:
#line 137 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1976 "parser.tab.c"
    break;

  case 30:
#line 139 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1982 "parser.tab.c"
    break;

  case 31:
#line 141 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1988 "parser.tab.c"
    break;

  case 32:
#line 143 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1994 "parser.tab.c"
    break;

  case 33:
#line 145 "parser.y"
                {print((yyvsp[-1].nval),&variables); }
#line 2000 "parser.tab.c"
    break;

  case 34:
#line 155 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2006 "parser.tab.c"
    break;

  case 35:
#line 157 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2012 "parser.tab.c"
    break;

  case 36:
#line 159 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2018 "parser.tab.c"
    break;

  case 37:
#line 164 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2024 "parser.tab.c"
    break;

  case 38:
#line 166 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2030 "parser.tab.c"
    break;

  case 39:
#line 168 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2036 "parser.tab.c"
    break;

  case 40:
#line 170 "parser.y"
        {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables); printf("value is : %f\n",(yyval.nval).fval); }
#line 2042 "parser.tab.c"
    break;

  case 41:
#line 172 "parser.y"
        {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2048 "parser.tab.c"
    break;

  case 42:
#line 174 "parser.y"
        {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 2054 "parser.tab.c"
    break;

  case 48:
#line 184 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2060 "parser.tab.c"
    break;

  case 49:
#line 186 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2066 "parser.tab.c"
    break;

  case 50:
#line 188 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2072 "parser.tab.c"
    break;

  case 51:
#line 190 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2078 "parser.tab.c"
    break;

  case 52:
#line 192 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2084 "parser.tab.c"
    break;

  case 53:
#line 194 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2090 "parser.tab.c"
    break;

  case 54:
#line 201 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval),&variables));  }
#line 2096 "parser.tab.c"
    break;

  case 56:
#line 207 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2102 "parser.tab.c"
    break;

  case 58:
#line 211 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2108 "parser.tab.c"
    break;

  case 61:
#line 217 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2114 "parser.tab.c"
    break;

  case 62:
#line 219 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2120 "parser.tab.c"
    break;

  case 63:
#line 221 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 2126 "parser.tab.c"
    break;

  case 97:
#line 276 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2132 "parser.tab.c"
    break;

  case 98:
#line 278 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2138 "parser.tab.c"
    break;

  case 99:
#line 280 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2144 "parser.tab.c"
    break;

  case 100:
#line 282 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2150 "parser.tab.c"
    break;

  case 188:
#line 443 "parser.y"
{items(&dictionary,&variables);}
#line 2156 "parser.tab.c"
    break;

  case 189:
#line 447 "parser.y"
        {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 2162 "parser.tab.c"
    break;

  case 198:
#line 465 "parser.y"
                { insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 2168 "parser.tab.c"
    break;

  case 199:
#line 470 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 2174 "parser.tab.c"
    break;

  case 200:
#line 472 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 2180 "parser.tab.c"
    break;

  case 202:
#line 478 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 2186 "parser.tab.c"
    break;

  case 203:
#line 484 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2192 "parser.tab.c"
    break;

  case 204:
#line 486 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 2198 "parser.tab.c"
    break;

  case 205:
#line 491 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2204 "parser.tab.c"
    break;

  case 206:
#line 493 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2210 "parser.tab.c"
    break;

  case 207:
#line 499 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2216 "parser.tab.c"
    break;

  case 208:
#line 501 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2222 "parser.tab.c"
    break;

  case 209:
#line 503 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2228 "parser.tab.c"
    break;

  case 210:
#line 508 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2234 "parser.tab.c"
    break;

  case 211:
#line 510 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2240 "parser.tab.c"
    break;

  case 212:
#line 514 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2246 "parser.tab.c"
    break;


#line 2250 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 517 "parser.y"



int main(int argc, char** argv) {

  
  initArray(&variables, 5);  // initially 5 elements
  initArray(&dictionary,5); //initially 5 elements
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
	fprintf(stderr, "Parse error in line %d\n", yylineno);
	exit(1);
}




