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

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);

#line 83 "parser.tab.c"

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
    ELLIPSIS = 306,
    RIGHT_ASSIGN = 307,
    LEFT_ASSIGN = 308,
    ADD_ASSIGN = 309,
    EXA = 310,
    SUB_ASSIGN = 311,
    MUL_ASSIGN = 312,
    POW_ASSIGN = 313,
    DIV_ASSIGN = 314,
    MOD_ASSIGN = 315,
    AND_ASSIGN = 316,
    PERCENT = 317,
    OR_SIGN = 318,
    XOR_ASSIGN = 319,
    OR_ASSIGN = 320,
    RIGHT_OP = 321,
    LEFT_OP = 322,
    PTR_OP = 323,
    LE_OP = 324,
    GE_OP = 325,
    EQ_OP = 326,
    NE_OP = 327,
    STAR = 328,
    DOUBLESTAR = 329,
    SLASH = 330,
    DOUBLESLASH = 331,
    RANGE = 332,
    LR_OP = 333,
    PLUS = 334,
    XOR = 335,
    NOT_SIGN = 336,
    DECINTEGER = 337,
    OCTINTEGER = 338,
    HEXINTEGER = 339,
    POINTFLOAT = 340,
    EXPONENTFLOAT = 341,
    IMAGNUMBER = 342,
    IDENTIFIER = 343,
    SHORTSTRING = 344,
    LONGSTRING = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

   int             intVal;
   double          floatVal;
   char*           ident;
 

#line 233 "parser.tab.c"

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
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   960

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

#define YYUNDEFTOK  2
#define YYMAXUTOK   345


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
      92,    93,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    95,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,     2,
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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    48,    51,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    65,    66,    67,    68,    72,    73,
      82,    83,    84,    85,    86,    96,    97,    98,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   115,
     116,   117,   120,   123,   124,   126,   127,   128,   131,   132,
     133,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   155,   156,   157,   158,   159,   160,   161,   164,
     165,   166,   167,   168,   169,   172,   173,   174,   175,   176,
     177,   178,   181,   182,   183,   184,   185,   186,   190,   191,
     192,   193,   194,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     222,   223,   226,   227,   228,   231,   232,   234,   235,   236,
     237,   241,   242,   243,   244,   246,   253,   254,   255,   256,
     259,   260,   264,   265,   266,   269,   270,   271,   274,   275,
     280,   281,   282,   283,   286,   287,   290,   291,   294,   295,
     298,   299,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   314,   315,   318,   319,   322,   323,   324,   325,
     328,   329,   332,   333,   336,   341,   342,   345,   346,   349,
     354,   355,   358,   362,   362,   365,   365,   368,   368,   368,
     371,   371,   374
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
  "MINUS", "AND_EXP", "NEWLINE", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN",
  "ADD_ASSIGN", "EXA", "SUB_ASSIGN", "MUL_ASSIGN", "POW_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "PERCENT", "OR_SIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "SLASH", "DOUBLESLASH",
  "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN", "DECINTEGER", "OCTINTEGER",
  "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT", "IMAGNUMBER", "IDENTIFIER",
  "SHORTSTRING", "LONGSTRING", "'@'", "'('", "')'", "'l'", "'L'",
  "$accept", "program", "statement_list", "statement", "call", "primary",
  "print_stmt", "expression_list", "expression", "atom", "assignment_stmt",
  "assignment_stmt_targer_list", "target_list", "target", "assignment_op",
  "arithmetic_op", "comparison_op", "logical_op", "bitwise_op", "literal",
  "import_stmt", "module", "relative_module", "dots", "modules",
  "import_stmt_identifiers", "name", "if_stmt", "elif_stmt", "for_stmt",
  "for_target_list", "for_target", "funcdef", "decorators", "decorator",
  "dotted_name", "dot_identifiers", "parameter_list", "defparameter",
  "defparameters", "sublist", "parameter", "parameters", "funcname",
  "classdef", "inheritance", "classname", "attr_identifier", "identifier",
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
     345,    64,    40,    41,   108,    76
};
# endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-181)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     178,   -40,   -40,   -20,    -5,   839,    -7,   259,    25,  -223,
     -40,    55,   178,  -223,  -223,    29,  -223,  -223,   861,    11,
    -223,  -223,  -223,  -223,  -223,     3,  -223,  -223,   103,   162,
      75,  -223,    38,  -223,   -20,   238,  -223,  -223,  -223,    91,
      89,     2,  -223,   839,   839,   839,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   350,  -223,  -223,   106,   124,  -223,
    -223,   -72,  -223,  -223,   -40,   194,   249,   870,   870,   134,
     428,    84,   106,   124,    10,   152,  -223,  -223,   779,   861,
     134,   738,   159,    28,    93,    25,  -223,   -40,  -223,   -40,
     -40,   178,   788,   147,   -24,    87,    25,   802,   -40,   -14,
    -223,    91,   738,   738,   490,  -223,  -223,   158,   184,  -223,
     178,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,   839,   839,   839,   839,   839,  -223,  -223,
     224,   123,   123,   -40,   200,   209,   490,   134,   428,   839,
    -223,  -223,   140,   -40,   222,  -223,   136,  -223,  -223,   215,
    -223,   223,   106,   124,   178,  -223,   144,   178,    26,   234,
     -40,   -40,   208,   247,   -16,   232,  -223,  -223,  -223,   233,
     189,  -223,   -40,  -223,   250,  -223,  -223,  -223,    17,   738,
     738,   738,   738,   738,   123,  -223,  -223,   253,   221,   -40,
     839,   738,   229,  -223,   -40,  -223,    80,   811,  -223,   178,
     239,   255,   178,   266,  -223,   260,   245,   -40,   -40,   270,
     839,   870,   178,   149,   123,   -40,   271,   839,   265,    32,
    -223,   200,   123,   228,   552,  -223,  -223,   267,   252,  -223,
     148,  -223,    26,   281,   178,   237,   178,   284,  -223,   263,
     738,   150,   116,   123,    -8,  -223,   161,   290,   315,   -40,
     614,   178,   839,   293,   251,   123,  -223,   178,   297,  -223,
    -223,    26,   -40,   178,   256,   298,   304,   169,  -223,    34,
    -223,   271,   123,   329,   178,   178,   676,   178,  -223,   178,
     178,  -223,  -223,   -40,   178,   178,    73,  -223,   180,  -223,
    -223,   123,   178,   178,   178,   178,  -223,   178,   178,  -223,
      78,  -223,  -223,   178,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,    20,     0,   182,
       0,     0,     3,     5,    13,     0,    10,     7,     0,     0,
      45,     6,     8,     9,    11,     0,   144,    12,    49,    18,
       0,   179,     0,   174,     0,     0,   135,   138,   115,   112,
       0,   114,   111,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   183,   184,     0,    28,    39,    41,    40,    90,
      91,    88,    89,    92,     0,    93,     0,     0,     0,    22,
      21,     0,    49,    48,     0,   148,     1,     4,     0,     0,
      42,    27,     0,    41,    40,    47,    43,     0,   145,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     116,   113,    30,    31,     0,    75,    79,    78,    76,    77,
       0,    32,    33,    72,    71,    63,    82,    60,    61,    51,
      52,    53,    54,    55,    56,    57,    66,    83,    58,    59,
      87,    86,    73,    74,    69,    70,    64,    67,    65,    68,
      62,    84,    85,     0,     0,     0,     0,     0,   185,   186,
     119,     0,     0,     0,    95,     0,    27,    24,    23,     0,
      50,   146,     0,     0,   149,    14,     0,    44,    46,     0,
     181,     0,    19,    18,   175,   177,     0,     0,     0,     0,
       0,     0,     0,   155,     0,   162,   170,   139,   136,     0,
       0,   110,     0,   109,    97,    29,    80,    81,   126,    34,
      35,    36,    37,    38,     0,   125,    94,     0,   119,     0,
       0,    25,     0,   150,     0,    15,     0,     0,   178,   176,
       0,   166,     0,   152,   154,     0,   164,     0,     0,   160,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   128,
     120,    96,     0,   117,    25,   147,   151,     0,     0,    16,
       0,   171,   167,   168,   140,     0,     0,   157,   159,   165,
     163,     0,   132,     0,     0,   101,     0,    98,   121,     0,
       0,     0,     0,     0,   120,     0,    26,     0,     0,    17,
     172,   169,     0,   142,     0,     0,     0,     0,   105,     0,
     103,   100,     0,   123,     0,   127,     0,     0,   118,   141,
       0,   173,   153,     0,     0,     0,     0,   102,     0,   107,
     122,     0,   130,     0,   129,   143,   158,   133,   134,   106,
       0,   104,   124,   131,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,    60,     0,  -223,   261,  -223,     7,    96,  -223,
    -223,  -223,    33,    24,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,    12,  -223,  -223,   -58,  -222,  -142,  -223,  -223,  -223,
     306,  -223,  -223,  -223,   325,  -223,  -223,   137,   168,  -223,
    -223,  -165,  -223,   268,  -223,  -223,  -223,   242,    -1,  -223,
    -223,  -223,  -223,  -223
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,   155,    81,    55,
      17,    18,    19,    20,   143,   144,   145,   146,   147,    56,
      21,    39,    40,    41,    66,   236,   206,    22,   239,    23,
      35,    36,    24,    25,    26,    74,   164,   182,   183,   184,
     220,   185,   253,    32,    27,    93,    30,    28,    29,    59,
      60,    61,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    33,    37,    42,    58,    42,    58,    73,   154,    75,
     207,   266,    77,   221,    69,    87,    64,    84,    65,    38,
     178,   179,   148,   149,    34,    80,   100,     1,   178,     2,
     192,   237,   238,    37,    85,     3,     4,   288,     5,     6,
      42,    71,    58,    58,    58,   291,   272,   273,     9,   180,
     181,    82,    89,   101,    86,    76,     7,   227,   228,   193,
     161,     8,   240,    42,     9,   308,    58,    58,     9,     8,
     178,   -49,     9,    78,     9,   157,   150,    58,    84,   309,
       9,     9,    94,     9,    73,   166,    33,   280,   170,   173,
       9,    58,   267,   186,    10,    73,    58,   191,   194,   176,
     274,    54,   162,    70,   190,     9,    91,    85,    10,   168,
      96,    99,    71,     9,     9,    98,   301,  -180,   319,    92,
     188,   287,     9,   324,   178,   247,     1,    89,     2,   160,
      89,   286,   187,   298,     3,     4,   -48,     5,     6,   102,
     103,   104,    58,    58,    58,    58,    58,   -19,  -180,   241,
     310,   174,    42,   180,   181,     7,   263,   159,    58,   159,
       8,     9,   213,   156,   158,   208,     9,   159,     9,   322,
     198,   159,   264,   159,    77,   156,   163,   186,   177,   223,
     224,   215,    85,   186,   289,   -48,  -180,   196,     1,   218,
       2,   233,   306,   279,   265,   285,     3,     4,    77,     5,
       6,   151,   167,   320,     9,    90,   290,    10,    42,    58,
     197,   205,   159,   246,   307,   186,    58,     7,    98,    77,
     232,   243,     8,   209,   250,   321,   257,   258,   242,    58,
      58,   204,   210,   212,   268,   275,    58,   219,   261,   199,
     200,   201,   202,   203,  -117,    98,   214,    57,    98,    57,
      72,   186,    98,   225,    77,   211,   152,   234,  -118,   216,
      83,    96,    77,   268,    97,   222,     9,   217,   293,    10,
     226,    58,   153,   235,  -118,   230,    64,   231,   252,   245,
     186,   302,   254,    77,   251,    57,    57,    57,   293,   255,
    -156,   256,   262,   259,   269,    77,   271,   278,   277,    77,
      43,    44,   316,    67,   281,   268,   244,   284,  -161,    57,
      57,   282,    77,   235,    77,    77,   283,    77,    77,   293,
      57,    83,   292,    77,   297,    68,   260,    72,   300,   304,
     303,   295,   172,   270,    57,   305,   311,   299,    72,    57,
      95,    46,    47,    48,    49,    50,    51,     9,    52,    53,
      88,   171,   229,   248,   312,   169,   105,   314,     0,     0,
     315,     0,     0,     0,   317,   318,     0,     0,   296,     0,
       0,     0,     0,   323,     0,     0,   106,   107,     0,   108,
     109,   110,     0,     0,     0,    57,    57,    57,    57,    57,
       0,   111,   112,     0,     0,     0,   113,   114,   115,   116,
       0,    57,   117,   118,   119,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,   140,
     141,   142,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,    57,     0,   106,   107,     0,   108,   109,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,     0,    57,    57,   113,   114,   115,   116,     0,    57,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   105,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   140,   141,   142,
       0,     0,     0,     0,    57,     0,   106,   107,     0,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,     0,   195,   113,   114,   115,   116,
       0,     0,   117,   118,   119,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   105,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   106,   107,
       0,   108,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,     0,   276,   113,   114,
     115,   116,     0,     0,   117,   118,   119,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     105,   132,   133,   134,   135,   136,   137,   138,   139,     0,
       0,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     106,   107,     0,   108,   109,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,     0,     0,     0,
     113,   114,   115,   116,     0,     0,   117,   118,   119,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   105,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   106,   107,     0,   108,   109,   313,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,     0,
       0,     0,   113,   114,   115,   116,     0,     0,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   105,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   106,   107,     0,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,     0,     0,     0,   113,   114,   115,   116,     0,     0,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   140,   141,   142,
      43,    44,     0,    67,   165,     0,     0,     0,     0,    43,
      44,     0,    67,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,    67,     0,     0,     0,
       0,     0,    43,    44,     0,    67,   249,     0,     0,     0,
       0,    46,    47,    48,    49,    50,    51,     9,    52,    53,
      46,    47,    48,    49,    50,    51,     9,    52,    53,   189,
      43,    44,     0,    45,    46,    47,    48,    49,    50,    51,
       9,    52,    53,    46,    47,    48,    49,    50,    51,     9,
      52,    53,    43,    44,     0,    79,     0,     0,     0,     0,
       0,    43,    44,     0,    67,     0,     0,     0,     0,     0,
       0,    46,    47,    48,    49,    50,    51,     9,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,     9,
      52,    53,    46,    47,    48,    49,    50,    51,     9,    52,
      53
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,    66,    10,
     152,   233,    12,   178,     7,    12,    23,    18,     6,    24,
      44,    45,    94,    95,    44,    18,    24,    10,    44,    12,
      44,    14,    15,    34,    23,    18,    19,    45,    21,    22,
      41,     8,    43,    44,    45,   267,    14,    15,    88,    73,
      74,    18,    24,    41,    43,     0,    39,    73,    74,    73,
      50,    44,   204,    64,    88,   287,    67,    68,    88,    44,
      44,    43,    88,    44,    88,    68,    64,    78,    79,    45,
      88,    88,    44,    88,    85,    78,    87,   252,    89,    90,
      88,    92,   234,    94,    91,    96,    97,    98,    99,    92,
     242,     5,    92,     7,    97,    88,    31,    23,    91,    85,
      23,    22,    79,    88,    88,    24,   281,    24,    45,    44,
      96,   263,    88,    45,    44,    45,    10,    24,    12,    45,
      24,    15,    45,   275,    18,    19,    43,    21,    22,    43,
      44,    45,   143,   144,   145,   146,   147,    44,    24,   207,
     292,    91,   153,    73,    74,    39,     7,    23,   159,    23,
      44,    88,   163,    67,    68,   153,    88,    23,    88,   311,
     110,    23,    23,    23,   174,    79,    24,   178,    31,   180,
     181,    45,    23,   184,    23,    23,    24,    29,    10,    45,
      12,   192,    23,    45,    45,    45,    18,    19,   198,    21,
      22,     7,    43,    23,    88,    43,    45,    91,   209,   210,
      26,    88,    23,   214,    45,   216,   217,    39,    24,   219,
      31,   209,    44,    23,   217,    45,   227,   228,     7,   230,
     231,     7,    23,    93,   235,     7,   237,   177,   231,   143,
     144,   145,   146,   147,    23,    24,    24,     5,    24,     7,
       8,   252,    24,    45,   254,   159,     7,     7,     7,    44,
      18,    23,   262,   264,    26,    31,    88,    44,   269,    91,
      23,   272,    23,    23,    23,    43,    23,    44,    23,    50,
     281,   282,   222,   283,    45,    43,    44,    45,   289,    23,
      45,    31,   232,    23,    23,   295,    31,    45,    31,   299,
      41,    42,   303,    44,    23,   306,   210,    23,    45,    67,
      68,    74,   312,    23,   314,   315,   256,   317,   318,   320,
      78,    79,     7,   323,    31,    66,   230,    85,    31,    31,
      74,   271,    90,   237,    92,    31,     7,   277,    96,    97,
      34,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      25,    90,   184,   216,   294,    87,     6,   297,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,   272,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,   143,   144,   145,   146,   147,
      -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,   159,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    81,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,   210,    -1,    26,    27,    -1,    29,    30,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,   230,   231,    46,    47,    48,    49,    -1,   237,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     6,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,   272,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     6,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       6,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     6,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     6,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    81,
      41,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    77,
      41,    42,    -1,    44,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    82,    83,    84,    85,    86,    87,    88,    89,
      90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    39,    44,    88,
      91,    97,    98,    99,   100,   101,   102,   106,   107,   108,
     109,   116,   123,   125,   128,   129,   130,   140,   143,   144,
     142,   144,   139,   144,    44,   126,   127,   144,    24,   117,
     118,   119,   144,    41,    42,    44,    82,    83,    84,    85,
      86,    87,    89,    90,   104,   105,   115,   143,   144,   145,
     146,   147,   148,   149,    23,   117,   120,    44,    66,   103,
     104,   108,   143,   144,   131,   144,     0,    99,    44,    44,
     103,   104,   108,   143,   144,    23,    43,    12,   130,    24,
      43,    31,    44,   141,    44,   126,    23,    26,    24,    22,
      24,   117,   104,   104,   104,     6,    26,    27,    29,    30,
      31,    41,    42,    46,    47,    48,    49,    52,    53,    54,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    69,    70,    71,    72,    73,    74,    75,    76,
      79,    80,    81,   110,   111,   112,   113,   114,    94,    95,
     117,     7,     7,    23,   120,   103,   104,   103,   104,    23,
      45,    50,    92,    24,   132,    45,   103,    43,   109,   139,
     144,   101,   143,   144,    98,    45,   103,    31,    44,    45,
      73,    74,   133,   134,   135,   137,   144,    45,   109,    77,
     103,   144,    44,    73,   144,    45,    29,    26,    98,   104,
     104,   104,   104,   104,     7,    88,   122,   122,   117,    23,
      23,   104,    93,   144,    24,    45,    44,    44,    45,    98,
     136,   137,    31,   144,   144,    45,    23,    73,    74,   134,
      43,    44,    31,   144,     7,    23,   121,    14,    15,   124,
     122,   120,     7,   117,   104,    50,   144,    45,   133,    45,
     103,    45,    23,   138,    98,    23,    31,   144,   144,    23,
     104,   103,    98,     7,    23,    45,   121,   122,   144,    23,
     104,    31,    14,    15,   122,     7,    45,    31,    45,    45,
     137,    23,    74,    98,    23,    45,    15,   122,    45,    23,
      45,   121,     7,   144,    31,    98,   104,    31,   122,    98,
      31,   137,   144,    74,    31,    31,    23,    45,   121,    45,
     122,     7,    98,    31,    98,    98,   144,    98,    98,    45,
      23,    45,   122,    98,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   106,   107,   107,   108,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   121,   122,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   145,   145,   146,   146,   147,   147,   147,
     148,   148,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     5,     6,     1,     1,
       1,     2,     2,     3,     3,     3,     5,     1,     1,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     1,
       1,     1,     2,     2,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     3,     5,     4,     6,     5,
       7,     6,     8,     7,     9,     7,     9,     8,    10,     4,
       3,     1,     1,     2,     1,     1,     2,     3,     5,     2,
       4,     2,     4,     3,     5,     1,     4,     7,     5,     8,
       4,     5,     6,     9,     9,     1,     3,     2,     1,     3,
       6,     7,     7,     8,     1,     2,     3,     5,     1,     2,
       2,     3,     2,     5,     2,     1,     2,     3,     6,     3,
       2,     3,     1,     3,     2,     3,     1,     2,     2,     3,
       1,     3,     2,     3,     1,     4,     5,     2,     3,     1,
       1,     3,     1,     1,     1,     2,     2,     1,     1,     1,
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

#line 1789 "parser.tab.c"

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
#line 376 "parser.y"



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
