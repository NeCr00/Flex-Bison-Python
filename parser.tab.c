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
 
  void yyerror(const char *s);




#line 86 "parser.tab.c"

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
#line 18 "parser.y"


#include "expression.h"


#line 135 "parser.tab.c"

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
#line 25 "parser.y"

    struct Number nval;
    char  *text;

#line 247 "parser.tab.c"

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
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

#define YYUNDEFTOK  2
#define YYMAXUTOK   350


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
       2,     2,     2,     2,     2,     2,    97,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,     2,
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
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    70,    73,    74,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    91,    92,    94,    95,
      96,    97,   101,   102,   107,   108,   113,   114,   116,   117,
     118,   119,   129,   131,   132,   136,   138,   140,   142,   144,
     146,   149,   150,   151,   152,   153,   156,   158,   159,   160,
     166,   167,   171,   172,   174,   175,   176,   179,   180,   181,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   202,   203,   204,   207,   208,   209,   210,   211,   212,
     215,   216,   217,   218,   219,   220,   221,   224,   225,   226,
     227,   228,   229,   233,   235,   236,   238,   239,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   267,   268,   271,   272,   273,
     276,   277,   279,   280,   281,   282,   286,   287,   288,   289,
     291,   298,   299,   300,   301,   304,   305,   309,   310,   311,
     314,   315,   316,   319,   320,   325,   326,   327,   328,   331,
     332,   335,   336,   339,   340,   343,   344,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   359,   360,   363,
     364,   367,   368,   369,   370,   373,   374,   377,   378,   381,
     386,   387,   390,   391,   394,   399,   400,   403,   404,   405,
     406,   409,   410,   413,   417,   420,   421,   424,   426,   431,
     431,   434,   436,   438,   443,   445,   449
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
  "INC", "DEC", "EQUAL", "LPAR", "RPAR", "LESS_THAN_OP", "GREATER_THAN_OP",
  "MINUS", "AND_EXP", "NEWLINE", "LBRA", "RBRA", "PAPAKI", "QUOTATION",
  "APOSTROPHE", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN",
  "EXA", "SUB_ASSIGN", "MUL_ASSIGN", "POW_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "PERCENT", "OR_SIGN", "IMAGNUMBER",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "SLASH", "DOUBLESLASH",
  "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN", "DECINTEGER", "OCTINTEGER",
  "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT", "IDENTIFIER", "SHORTSTRING",
  "LONGSTRING", "'l'", "'L'", "$accept", "program", "statement_list",
  "statement", "return_stmt", "call", "primary", "lambda_form",
  "print_stmt", "expression_list", "expression", "atom", "assignment_stmt",
  "assignment_stmt_targer_list", "target_list", "target", "assignment_op",
  "arithmetic_op", "comparison_op", "logical_op", "bitwise_op", "literal",
  "import_stmt", "module", "relative_module", "dots", "modules",
  "import_stmt_identifiers", "name", "if_stmt", "elif_stmt", "for_stmt",
  "for_target_list", "for_target", "funcdef", "decorators", "decorator",
  "dotted_name", "dot_identifiers", "parameter_list", "defparameter",
  "defparameters", "sublist", "parameter", "parameters", "funcname",
  "classdef", "inheritance", "classname", "dict_display", "key_datum_list",
  "key_datums", "key_datum", "identifier", "attr_identifier",
  "stringliteral", "longinteger", "integer", "floatnumber", "imagnumber", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   108,    76
};
# endif

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-196)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     178,   -60,   -60,   -23,    -5,  1143,   -14,     7,  1170,   450,
     -13,   -60,   107,    40,   178,  -239,  -239,  -239,    52,  -239,
    -239,  -239,  1197,     1,  -239,  -239,  -239,  -239,  -239,    14,
    -239,  -239,   189,   127,  -239,   180,  -239,    99,  -239,   -23,
     192,  -239,  -239,  -239,    18,   151,    -4,  -239,  1143,  1072,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,   587,  -239,
    -239,  -239,   163,   177,  -239,  -239,   138,  -239,  -239,   -60,
      34,   184,  1143,   -10,   -60,   -60,   173,   186,   -17,   170,
    -239,  1170,   196,  1033,  1170,  1170,   196,   655,    78,  -239,
     177,    84,   197,  -239,  -239,   516,  1197,  -239,   196,   141,
      11,   131,   -13,  -239,   -60,  -239,   -60,   -60,   178,  1081,
     194,    65,    82,   -13,  1108,   -60,    -8,  -239,    18,   718,
    -239,   781,   171,   204,  -239,  -239,   200,   212,  -239,   178,
    -239,  -239,  1143,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  1143,  -239,  1143,  -239,  1143,  -239,  -239,
    1143,  1143,  1143,  1143,  1143,  -239,  -239,   159,   152,   152,
     -60,   216,  1033,   199,   223,   224,  -239,  1143,    -2,   -60,
     -60,   227,  1143,   228,   718,  1143,   208,   127,   196,   655,
    -239,   210,  -239,   -60,   233,  -239,    97,   177,  -239,  -239,
     219,   220,   163,   177,  -239,   178,  -239,   102,   178,   229,
     221,  -239,  -239,   225,   154,  -239,   -60,  -239,   187,  -239,
    1143,  -239,  1143,   247,  -239,  -239,    38,  1033,  1033,  1033,
    1033,  1033,  1033,  1033,  1033,  1033,   152,  -239,  -239,   250,
     179,   -60,  -239,   -10,   251,   198,  1033,   253,  -239,    93,
    1033,  1143,  1033,  -239,   230,  -239,   -60,  -239,    74,  1135,
    -239,   178,   178,   246,  1170,   178,    91,   152,   -60,   256,
    1033,  -239,  1143,  1143,   252,   222,  -239,   216,   152,   165,
    -239,   -10,   -60,   205,   844,  -239,  -239,   257,   241,  -239,
     103,   178,   178,   112,   375,   152,     2,  -239,   114,   264,
     282,   -60,  -239,   907,   178,  1143,   259,   191,   152,  -239,
    -239,   -60,  -239,   178,   262,  -239,   178,   266,   267,   116,
    -239,     4,  -239,   256,   152,   288,   178,   178,   970,   178,
    -239,  -239,   178,   178,   178,   178,    19,  -239,   118,  -239,
    -239,   152,   178,   178,   178,   178,   178,   178,  -239,    47,
    -239,  -239,   178,  -239
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,    16,    26,
       0,     0,   194,     0,     3,     5,    14,    13,     0,    15,
      10,     7,     0,     0,    54,     6,     8,     9,    11,     0,
     149,    12,   195,    58,   194,     0,   184,     0,   179,     0,
       0,   140,   143,   120,   117,     0,   119,   116,     0,     0,
     206,   201,   202,   203,   204,   205,   197,   198,     0,    35,
      46,    49,    47,    48,    95,    96,    93,    94,    97,     0,
      98,     0,     0,     0,     0,     0,     0,   160,     0,   167,
     175,     0,    17,    34,     0,     0,    28,    27,     0,   195,
      58,     0,   153,     1,     4,     0,     0,    51,    50,     0,
      47,    48,    56,    52,     0,   150,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,   121,   118,     0,
     185,     0,     0,   187,    80,    84,    83,    81,    82,     0,
      77,    76,     0,    87,    69,    70,    60,    61,    62,    63,
      64,    65,    66,    71,    88,    67,    68,    92,    91,    78,
      79,    74,    75,     0,    72,     0,    73,     0,    89,    90,
       0,     0,     0,     0,     0,   199,   200,   124,     0,     0,
       0,   100,    24,     0,   171,   157,   159,     0,   169,     0,
       0,   165,     0,     0,    34,     0,     0,    48,    30,    29,
      59,     0,   151,     0,   154,    18,     0,    48,    53,    55,
       0,     0,    22,    23,   196,   180,   182,     0,     0,     0,
       0,   144,   141,     0,     0,   115,     0,   114,   102,    36,
       0,   186,   188,   189,    85,    86,   131,    38,    40,    39,
      37,    41,    42,    43,    44,    45,     0,   130,    99,     0,
     124,     0,   176,   172,   173,     0,    25,   162,   164,   170,
     168,     0,    32,    31,     0,   155,     0,    19,     0,     0,
     183,   181,     0,     0,     0,     0,     0,     0,     0,   104,
     193,   191,   190,     0,     0,   133,   125,   101,     0,   122,
     177,   174,     0,     0,    32,   152,   156,     0,     0,    20,
       0,   145,     0,     0,   137,     0,     0,   106,     0,   103,
     126,     0,   192,     0,     0,     0,     0,   125,     0,   178,
     158,     0,    33,     0,     0,    21,   147,     0,     0,     0,
     110,     0,   108,   105,     0,   128,     0,   132,     0,     0,
     123,   163,   146,     0,     0,     0,     0,   107,     0,   112,
     127,     0,   135,     0,   134,   148,   138,   139,   111,     0,
     109,   129,   136,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,   255,    23,  -239,    10,   193,  -239,  -239,     8,
     351,  -239,  -239,  -239,     3,    79,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,    -1,  -239,  -239,   -63,  -238,  -146,  -239,
    -239,  -239,   261,  -239,  -239,  -239,   273,  -239,  -239,   -93,
     231,  -239,  -239,   -61,  -239,   201,  -239,  -239,  -239,  -239,
    -239,  -239,  -207,     0,   146,  -239,  -239,  -239,  -239,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,   183,
      83,    59,    21,    22,    23,    24,   160,   161,   162,   163,
     164,    60,    25,    44,    45,    46,    71,   269,   238,    26,
     275,    27,    40,    41,    28,    29,    30,    91,   194,    76,
      77,    78,   173,    79,   244,    37,    31,   110,    35,    61,
     122,   223,   123,    62,    63,    64,    65,    66,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    36,    38,    42,    47,    70,    47,    80,   171,    69,
      89,    92,   174,    88,    32,   271,    82,    86,   210,    43,
     117,    39,   100,   239,   102,    99,   104,    73,   298,  -161,
      98,    10,    97,    34,    73,  -195,   216,    94,    72,    42,
      93,   168,   115,  -161,   103,   118,    47,   320,     1,   339,
       2,    73,   273,   274,   106,   -22,     3,     4,   115,     5,
       6,   323,   179,   180,   348,   302,     7,    11,   167,    47,
      34,   217,     8,    80,   175,   176,    34,     9,    80,    34,
      12,   338,    10,    34,   100,    34,    74,    75,    34,    34,
     276,    11,   353,   188,   186,    34,    95,    34,   295,    88,
      34,   102,    89,   196,    38,   113,   202,   204,    32,    73,
     209,    80,    34,    89,   296,   215,   218,   207,    73,   287,
     185,   299,   214,   190,  -166,   185,   185,   211,   191,    32,
     -57,    12,   307,   -57,   192,   185,   297,   321,  -166,   336,
      34,   349,   257,   111,    74,    75,    33,   260,   315,   319,
     -57,   107,   -57,    74,    75,   107,    90,   317,    34,   322,
      33,   337,   330,   350,   102,   288,   236,    34,   101,   240,
      47,   -23,   308,   116,   -58,   -23,   277,   185,   340,   247,
     248,   199,   280,   115,   198,   265,   278,  -195,     1,   115,
       2,   169,   212,   255,   267,   351,     3,     4,  -123,     5,
       6,   107,  -122,   115,   177,    32,     7,   170,    32,   178,
     268,   108,     8,   182,  -123,   113,   266,     9,   114,   185,
     309,   193,    10,   221,   109,   208,    32,   222,    94,   224,
     187,    11,   106,   -22,   165,   166,   305,   306,   225,   241,
     279,    47,   197,    80,   242,   237,   243,   245,    90,    94,
     249,   251,   203,   253,    33,   254,   286,   256,    80,    90,
     262,    32,    32,   258,   259,    32,   263,   290,   300,   264,
     272,    12,   293,    69,   281,    33,   283,   292,   282,   301,
     285,    80,   310,   304,    94,   311,   314,   268,   313,   324,
     329,    32,    32,   333,    32,   341,   300,   334,   335,   201,
     112,   325,   105,     0,    32,   200,     0,     0,     0,   181,
       0,   331,     0,    32,    94,     0,    32,    94,     0,     0,
       0,   325,     0,     0,     0,     0,    32,    32,     0,    32,
       0,     0,    32,    32,    32,    32,   300,     0,     0,    94,
       0,     0,    32,    32,    32,    32,    32,    32,     0,   325,
      94,    33,    32,     0,    33,    94,    58,     0,     0,     0,
      87,     0,     0,   205,     0,    94,     0,    94,    94,    94,
      94,     0,    33,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,   226,     1,     0,     2,     0,     0,
     318,     0,     0,     3,     4,     0,     5,     6,     0,   119,
     121,     0,     0,     7,     0,     0,     0,    33,    33,     8,
       0,    33,     0,     0,     9,     0,     0,     0,     0,    10,
       0,     0,     0,   172,     0,     0,     0,     0,    11,     0,
       0,     0,   184,     0,     0,   184,   189,    33,    33,     0,
      33,     0,     0,     0,     0,     0,     0,   184,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,    33,   261,     0,     0,     0,     0,    12,     0,
       0,     0,    33,    33,     0,    33,     0,     0,    33,    33,
      33,    33,     0,   227,     0,     0,     0,     0,    33,    33,
      33,    33,    33,    33,    84,     0,     0,     0,    33,     0,
       0,    49,     0,     0,   228,     0,   229,     0,   230,     0,
       0,   231,   232,   233,   234,   235,     0,   291,     0,    50,
     294,     0,    85,     0,     0,     0,     0,     0,   246,     0,
       0,     0,     0,   250,     0,     0,   252,     0,    51,    52,
      53,    54,    55,    34,    56,    57,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
      81,   195,     0,     0,     0,     0,     0,    49,   332,     0,
       0,   270,     0,   121,     0,     0,     0,     0,     0,     0,
       0,   342,     0,     0,   344,    50,     0,     0,   345,   346,
     347,     0,     0,   124,     0,     0,     0,     0,   352,     0,
       0,     0,   284,     0,    51,    52,    53,    54,    55,    34,
      56,    57,     0,   125,   126,     0,   127,   128,   129,     0,
       0,     0,     0,   121,   303,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   328,   145,   146,   147,
     148,   124,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,   157,   158,   159,     0,     0,     0,   -34,     0,
       0,   125,   126,     0,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   136,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   124,   145,   146,   147,   148,     0,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
     157,   158,   159,     0,   125,   126,     0,   127,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   130,   131,   132,   133,     0,     0,
       0,     0,     0,     0,     0,   134,   135,   136,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   124,   145,   146,
     147,   148,     0,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,   157,   158,   159,     0,   125,   126,     0,
     127,   128,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,     0,   137,   138,   139,   140,   141,   142,   143,   144,
     124,   145,   146,   147,   148,     0,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,   157,   158,   159,     0,
     125,   126,     0,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     130,   131,   132,   133,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   124,   145,   146,   147,   148,     0,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,   157,
     158,   159,     0,   125,   126,     0,   127,   128,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   124,   145,   146,   147,
     148,     0,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,   157,   158,   159,     0,   125,   126,     0,   127,
     128,   343,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   131,   132,   133,
       0,     0,     0,     0,     0,     0,     0,   134,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   124,
     145,   146,   147,   148,     0,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,   157,   158,   159,     0,   125,
     126,     0,   127,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,   136,     0,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,   148,     0,   149,   150,
     151,   152,   153,   154,   155,   156,    48,     0,   157,   158,
     159,     0,     0,    49,   120,    81,   206,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,    81,     0,     0,     0,     0,     0,     0,    49,
      51,    52,    53,    54,    55,    34,    56,    57,     0,    51,
      52,    53,    54,    55,    34,    56,    57,    50,     0,    81,
     289,     0,     0,     0,     0,     0,    49,    48,     0,     0,
       0,   213,     0,     0,    49,     0,    51,    52,    53,    54,
      55,    34,    56,    57,    50,     0,     0,     0,     0,     0,
       0,     0,    50,     0,    81,     0,     0,     0,     0,     0,
       0,    49,     0,    51,    52,    53,    54,    55,    34,    56,
      57,    51,    52,    53,    54,    55,    34,    56,    57,    50,
       0,    96,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    34,    56,    57,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
      12,    56,    57
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,     6,     6,     7,    71,    23,
      10,    11,    73,    10,    14,   222,     8,     9,   111,    24,
      24,    44,    22,   169,    23,    22,    12,    44,   266,    31,
      22,    44,    22,    93,    44,    24,    44,    14,    31,    39,
       0,     7,    24,    45,    43,    46,    46,    45,    10,    45,
      12,    44,    14,    15,    43,    44,    18,    19,    24,    21,
      22,   299,    79,    80,    45,   272,    28,    53,    69,    69,
      93,    79,    34,    73,    74,    75,    93,    39,    78,    93,
      93,   319,    44,    93,    84,    93,    79,    80,    93,    93,
     236,    53,    45,    85,    84,    93,    44,    93,     7,    96,
      93,    23,   102,    95,   104,    23,   106,   107,   108,    44,
      45,   111,    93,   113,    23,   115,   116,   109,    44,    45,
      23,   267,   114,    45,    31,    23,    23,    45,    44,   129,
      23,    93,   278,    26,    50,    23,    45,    23,    45,    23,
      93,    23,    45,    44,    79,    80,     0,    45,    45,   295,
      43,    24,    45,    79,    80,    24,    10,    45,    93,    45,
      14,    45,   308,    45,    23,   258,     7,    93,    22,   170,
     170,    44,     7,    22,    43,    44,   239,    23,   324,   179,
     180,   102,   243,    24,    43,    31,     7,    24,    10,    24,
      12,     7,   113,   193,     7,   341,    18,    19,     7,    21,
      22,    24,    23,    24,    31,   205,    28,    23,   208,    23,
      23,    31,    34,    43,    23,    23,   216,    39,    26,    23,
     281,    24,    44,    52,    44,    31,   226,    23,   205,    29,
      84,    53,    43,    44,    96,    97,    14,    15,    26,    23,
     241,   241,    96,   243,    45,    93,    23,    23,   102,   226,
      23,    23,   106,    45,   108,    45,   256,    24,   258,   113,
      31,   261,   262,    44,    44,   265,    45,   259,   268,    44,
      23,    93,   264,    23,    23,   129,    23,    31,    80,    23,
      50,   281,   282,    31,   261,    80,    45,    23,    31,     7,
      31,   291,   292,    31,   294,     7,   296,    31,    31,   106,
      39,   301,    29,    -1,   304,   104,    -1,    -1,    -1,    78,
      -1,   311,    -1,   313,   291,    -1,   316,   294,    -1,    -1,
      -1,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,   329,
      -1,    -1,   332,   333,   334,   335,   336,    -1,    -1,   316,
      -1,    -1,   342,   343,   344,   345,   346,   347,    -1,   349,
     327,   205,   352,    -1,   208,   332,     5,    -1,    -1,    -1,
       9,    -1,    -1,   108,    -1,   342,    -1,   344,   345,   346,
     347,    -1,   226,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    18,    19,    -1,    21,    22,    -1,    48,
      49,    -1,    -1,    28,    -1,    -1,    -1,   261,   262,    34,
      -1,   265,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    81,    -1,    -1,    84,    85,   291,   292,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,   316,   208,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,   326,   327,    -1,   329,    -1,    -1,   332,   333,
     334,   335,    -1,   132,    -1,    -1,    -1,    -1,   342,   343,
     344,   345,   346,   347,    44,    -1,    -1,    -1,   352,    -1,
      -1,    51,    -1,    -1,   153,    -1,   155,    -1,   157,    -1,
      -1,   160,   161,   162,   163,   164,    -1,   262,    -1,    69,
     265,    -1,    72,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,   182,    -1,    -1,   185,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,   292,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,   313,    -1,
      -1,   220,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   326,    -1,    -1,   329,    69,    -1,    -1,   333,   334,
     335,    -1,    -1,     6,    -1,    -1,    -1,    -1,   343,    -1,
      -1,    -1,   251,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,   305,    70,    71,    72,
      73,     6,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,     6,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,     6,    70,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
       6,    70,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,     6,    70,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,     6,    70,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,     6,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    85,    86,    87,    -1,    26,
      27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    44,    -1,    85,    86,
      87,    -1,    -1,    51,    52,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    69,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    44,    -1,    -1,
      -1,    83,    -1,    -1,    51,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    88,    89,    90,    91,    92,    93,    94,    95,    69,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      44,    53,    93,    99,   100,   101,   102,   103,   104,   105,
     106,   110,   111,   112,   113,   120,   127,   129,   132,   133,
     134,   144,   151,   152,    93,   146,   151,   143,   151,    44,
     130,   131,   151,    24,   121,   122,   123,   151,    44,    51,
      69,    88,    89,    90,    91,    92,    94,    95,   108,   109,
     119,   147,   151,   152,   153,   154,   155,   156,   157,    23,
     121,   124,    31,    44,    79,    80,   137,   138,   139,   141,
     151,    44,   107,   108,    44,    72,   107,   108,   112,   151,
     152,   135,   151,     0,   101,    44,    44,   103,   107,   112,
     151,   152,    23,    43,    12,   134,    43,    24,    31,    44,
     145,    44,   130,    23,    26,    24,    22,    24,   121,   108,
      52,   108,   148,   150,     6,    26,    27,    29,    30,    31,
      46,    47,    48,    49,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    72,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    85,    86,    87,
     114,   115,   116,   117,   118,    96,    97,   121,     7,     7,
      23,   124,   108,   140,   141,   151,   151,    31,    23,    79,
      80,   138,    43,   107,   108,    23,   103,   152,   107,   108,
      45,    44,    50,    24,   136,    45,   107,   152,    43,   113,
     143,   104,   151,   152,   151,   100,    45,   107,    31,    45,
     137,    45,   113,    83,   107,   151,    44,    79,   151,    45,
      31,    52,    23,   149,    29,    26,   100,   108,   108,   108,
     108,   108,   108,   108,   108,   108,     7,    93,   126,   126,
     121,    23,    45,    23,   142,    23,   108,   151,   151,    23,
     108,    23,   108,    45,    45,   151,    24,    45,    44,    44,
      45,   100,    31,    45,    44,    31,   151,     7,    23,   125,
     108,   150,    23,    14,    15,   128,   126,   124,     7,   121,
     141,    23,    80,    23,   108,    50,   151,    45,   137,    45,
     107,   100,    31,   107,   100,     7,    23,    45,   125,   126,
     151,    23,   150,   108,    31,    14,    15,   126,     7,   141,
     151,    80,    45,    31,    45,    45,   100,    45,    15,   126,
      45,    23,    45,   125,     7,   151,    31,   100,   108,    31,
     126,   151,   100,    31,    31,    31,    23,    45,   125,    45,
     126,     7,   100,    31,   100,   100,   100,   100,    45,    23,
      45,   126,   100,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   124,   124,   124,   124,   125,   125,   125,   125,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   147,   147,   148,   148,   148,
     148,   149,   149,   150,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   155,   156,   156,   157
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       5,     6,     1,     1,     3,     4,     1,     2,     2,     3,
       3,     4,     3,     5,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     2,     2,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     4,     6,     5,     7,     6,     8,     7,     9,
       7,     9,     8,    10,     4,     3,     1,     1,     2,     1,
       1,     2,     3,     5,     2,     4,     2,     4,     3,     5,
       1,     4,     7,     5,     8,     4,     5,     6,     9,     9,
       1,     3,     2,     1,     3,     6,     7,     7,     8,     1,
       2,     3,     5,     1,     2,     2,     3,     2,     5,     2,
       1,     2,     3,     6,     3,     2,     3,     1,     3,     2,
       3,     1,     2,     2,     3,     1,     3,     2,     3,     1,
       4,     5,     2,     3,     1,     2,     3,     1,     2,     2,
       3,     2,     3,     3,     1,     1,     3,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1
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
  case 27:
#line 115 "parser.y"
                {print((yyvsp[0].nval));}
#line 1886 "parser.tab.c"
    break;

  case 35:
#line 137 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1892 "parser.tab.c"
    break;

  case 36:
#line 139 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1898 "parser.tab.c"
    break;

  case 37:
#line 141 "parser.y"
        {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval)); }
#line 1904 "parser.tab.c"
    break;

  case 46:
#line 157 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1910 "parser.tab.c"
    break;

  case 93:
#line 234 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1916 "parser.tab.c"
    break;

  case 95:
#line 237 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1922 "parser.tab.c"
    break;

  case 197:
#line 425 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1928 "parser.tab.c"
    break;

  case 198:
#line 427 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 1934 "parser.tab.c"
    break;

  case 201:
#line 435 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); printf("%d\n", (yyval.nval).ival);}
#line 1940 "parser.tab.c"
    break;

  case 202:
#line 437 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1946 "parser.tab.c"
    break;

  case 203:
#line 439 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1952 "parser.tab.c"
    break;

  case 204:
#line 444 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1958 "parser.tab.c"
    break;

  case 205:
#line 446 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1964 "parser.tab.c"
    break;


#line 1968 "parser.tab.c"

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
#line 453 "parser.y"



int main() {
   extern int yydebug;
    yydebug = 1;
  // Open a file 
  FILE *myfile = fopen("example.py", "r");
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




