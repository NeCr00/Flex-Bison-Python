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
    LBRA = 306,
    RBRA = 307,
    PAPAKI = 308,
    ELLIPSIS = 309,
    RIGHT_ASSIGN = 310,
    LEFT_ASSIGN = 311,
    ADD_ASSIGN = 312,
    EXA = 313,
    SUB_ASSIGN = 314,
    MUL_ASSIGN = 315,
    POW_ASSIGN = 316,
    DIV_ASSIGN = 317,
    MOD_ASSIGN = 318,
    AND_ASSIGN = 319,
    PERCENT = 320,
    OR_SIGN = 321,
    XOR_ASSIGN = 322,
    OR_ASSIGN = 323,
    RIGHT_OP = 324,
    LEFT_OP = 325,
    PTR_OP = 326,
    LE_OP = 327,
    GE_OP = 328,
    EQ_OP = 329,
    NE_OP = 330,
    STAR = 331,
    DOUBLESTAR = 332,
    SLASH = 333,
    DOUBLESLASH = 334,
    RANGE = 335,
    LR_OP = 336,
    PLUS = 337,
    XOR = 338,
    NOT_SIGN = 339,
    DECINTEGER = 340,
    OCTINTEGER = 341,
    HEXINTEGER = 342,
    POINTFLOAT = 343,
    EXPONENTFLOAT = 344,
    IMAGNUMBER = 345,
    IDENTIFIER = 346,
    SHORTSTRING = 347,
    LONGSTRING = 348
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
 

#line 236 "parser.tab.c"

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
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    48,    51,    52,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    69,    70,    72,    73,
      74,    75,    79,    80,    85,    86,    91,    92,    93,    94,
      95,    96,   106,   108,   109,   112,   113,   114,   115,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     135,   136,   140,   141,   143,   144,   145,   148,   149,   150,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   171,   172,   173,   174,   175,   176,   177,   180,   181,
     182,   183,   184,   185,   188,   189,   190,   191,   192,   193,
     194,   197,   198,   199,   200,   201,   202,   206,   207,   208,
     209,   210,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   238,
     239,   242,   243,   244,   247,   248,   250,   251,   252,   253,
     257,   258,   259,   260,   262,   269,   270,   271,   272,   275,
     276,   280,   281,   282,   285,   286,   287,   290,   291,   296,
     297,   298,   299,   302,   303,   306,   307,   310,   311,   314,
     315,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   330,   331,   334,   335,   338,   339,   340,   341,   344,
     345,   348,   349,   352,   357,   358,   361,   362,   365,   370,
     371,   374,   375,   376,   377,   380,   381,   384,   388,   391,
     392,   395,   395,   398,   398,   401,   401,   401,   404,   404,
     407
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
  "MINUS", "AND_EXP", "NEWLINE", "LBRA", "RBRA", "PAPAKI", "ELLIPSIS",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "EXA", "SUB_ASSIGN",
  "MUL_ASSIGN", "POW_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "PERCENT", "OR_SIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP",
  "PTR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR",
  "SLASH", "DOUBLESLASH", "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN",
  "DECINTEGER", "OCTINTEGER", "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT",
  "IMAGNUMBER", "IDENTIFIER", "SHORTSTRING", "LONGSTRING", "'l'", "'L'",
  "$accept", "program", "statement_list", "statement", "return_stmt",
  "call", "primary", "lambda_form", "print_stmt", "expression_list",
  "atom", "expression", "assignment_stmt", "assignment_stmt_targer_list",
  "target_list", "target", "assignment_op", "arithmetic_op",
  "comparison_op", "logical_op", "bitwise_op", "literal", "import_stmt",
  "module", "relative_module", "dots", "modules",
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
     345,   346,   347,   348,   108,    76
};
# endif

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     428,   -59,   -59,     8,   -10,  1168,    -4,   -11,  1179,    49,
      11,   -59,   165,    34,   428,  -239,  -239,  -239,    -3,  -239,
    -239,  -239,  1232,    17,  -239,  -239,  -239,  -239,  -239,    42,
    -239,  -239,   180,    27,  -239,    25,  -239,    24,  -239,     8,
      96,  -239,  -239,  -239,    13,   123,    -7,  -239,  1168,  1168,
    1168,  1070,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,   571,  -239,  -239,   129,   136,  -239,  -239,   154,  -239,
    -239,   -59,   122,   192,  1168,    15,   -59,   -59,   120,   182,
     -19,   149,  -239,  1179,   184,  1026,  1179,  1179,   184,   636,
      16,  -239,   136,   -15,   179,  -239,  -239,  1082,  1232,  -239,
     184,   174,   152,   169,    11,  -239,   -59,  -239,   -59,   -59,
     428,  1093,   195,    79,    19,    11,  1146,   -59,    18,  -239,
      13,  1026,  1026,   701,  -239,   766,   193,   213,  -239,  -239,
     222,   230,  -239,   428,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  1168,  1168,  1168,  1168,
    1168,  -239,  -239,   140,   171,   171,   -59,   241,  1026,   221,
     244,   245,  -239,  1168,   183,   -59,   -59,   247,  1168,   248,
     701,  1168,   231,    27,   184,   636,  -239,   232,  -239,   -59,
     254,  -239,    98,   136,  -239,  -239,   235,   237,   129,   136,
    -239,   428,  -239,   109,   428,   253,   242,  -239,  -239,   246,
     212,  -239,   -59,  -239,   197,  -239,  1168,  -239,  1168,   262,
    -239,  -239,   219,  1026,  1026,  1026,  1026,  1026,   171,  -239,
    -239,   263,    20,   -59,  -239,    15,   265,   215,  1026,   266,
    -239,   201,  1026,  1168,  1026,  -239,   243,  -239,   -59,  -239,
      82,  1157,  -239,   428,   428,   264,  1179,   428,   126,   171,
     -59,   273,  1026,  -239,  1168,  1168,   267,   240,  -239,   241,
     171,   194,  -239,    15,   -59,   223,   831,  -239,  -239,   268,
     256,  -239,   127,   428,   428,   134,   502,   171,   -14,  -239,
     155,   280,   297,   -59,  -239,   896,   428,  1168,   274,   199,
     171,  -239,  -239,   -59,  -239,   428,   276,  -239,   428,   277,
     278,   157,  -239,     1,  -239,   273,   171,   304,   428,   428,
     961,   428,  -239,  -239,   428,   428,   428,   428,    22,  -239,
     166,  -239,  -239,   171,   428,   428,   428,   428,   428,   428,
    -239,    53,  -239,  -239,   428,  -239
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,    16,    26,
       0,     0,   198,     0,     3,     5,    14,    13,     0,    15,
      10,     7,     0,     0,    54,     6,     8,     9,    11,     0,
     153,    12,   199,    58,   198,     0,   188,     0,   183,     0,
       0,   144,   147,   124,   121,     0,   123,   120,     0,     0,
       0,     0,   205,   206,   207,   208,   209,   210,   201,   202,
      39,     0,    35,    38,    36,    37,    99,   100,    97,    98,
     101,     0,   102,     0,     0,     0,     0,     0,     0,   164,
       0,   171,   179,     0,    17,    34,     0,     0,    28,    27,
       0,   199,    58,     0,   157,     1,     4,     0,     0,    51,
      50,     0,    36,    37,    56,    52,     0,   154,     0,     0,
       0,     0,     0,     0,     0,   146,     0,     0,     0,   125,
     122,    41,    42,     0,   189,     0,     0,   191,    84,    88,
      87,    85,    86,     0,    43,    44,    81,    80,    72,    91,
      69,    70,    60,    61,    62,    63,    64,    65,    66,    75,
      92,    67,    68,    96,    95,    82,    83,    78,    79,    73,
      76,    74,    77,    71,    93,    94,     0,     0,     0,     0,
       0,   203,   204,   128,     0,     0,     0,   104,    24,     0,
     175,   161,   163,     0,   173,     0,     0,   169,     0,     0,
      34,     0,     0,    37,    30,    29,    59,     0,   155,     0,
     158,    18,     0,    37,    53,    55,     0,     0,    22,    23,
     200,   184,   186,     0,     0,     0,     0,   148,   145,     0,
       0,   119,     0,   118,   106,    40,     0,   190,   192,   193,
      89,    90,   135,    45,    46,    47,    48,    49,     0,   134,
     103,     0,   128,     0,   180,   176,   177,     0,    25,   166,
     168,   174,   172,     0,    32,    31,     0,   159,     0,    19,
       0,     0,   187,   185,     0,     0,     0,     0,     0,     0,
       0,   108,   197,   195,   194,     0,     0,   137,   129,   105,
       0,   126,   181,   178,     0,     0,    32,   156,   160,     0,
       0,    20,     0,   149,     0,     0,   141,     0,     0,   110,
       0,   107,   130,     0,   196,     0,     0,     0,     0,   129,
       0,   182,   162,     0,    33,     0,     0,    21,   151,     0,
       0,     0,   114,     0,   112,   109,     0,   132,     0,   136,
       0,     0,   127,   167,   150,     0,     0,     0,     0,   111,
       0,   116,   131,     0,   139,     0,   138,   152,   142,   143,
     115,     0,   113,   133,   140,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,   106,    -2,  -239,     2,   205,  -239,  -239,    14,
    -239,   316,  -239,  -239,     6,    48,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,     7,  -239,  -239,   -55,  -238,  -149,  -239,
    -239,  -239,   284,  -239,  -239,  -239,   286,  -239,  -239,   -98,
     249,  -239,  -239,   -64,  -239,   218,  -239,  -239,  -239,  -239,
    -239,  -239,  -100,    -1,   309,  -239,  -239,  -239,  -239,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,   189,
      60,    85,    21,    22,    23,    24,   166,   167,   168,   169,
     170,    62,    25,    44,    45,    46,    73,   271,   240,    26,
     277,    27,    40,    41,    28,    29,    30,    93,   200,    78,
      79,    80,   179,    81,   246,    37,    31,   112,    35,    63,
     126,   229,   127,    32,    33,    66,    67,    68,    69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    38,    42,    47,    64,    47,    82,    64,    64,    91,
      94,   180,    96,    72,    43,   216,    90,   119,   177,    71,
      74,   102,    84,    88,    99,    75,   241,   280,   101,   197,
     300,   322,    34,    75,    95,   198,   100,   117,    42,   104,
     104,    97,   115,  -126,   117,    47,   341,    64,    64,    64,
      64,   109,    39,   120,   106,    10,   110,   185,   186,    75,
     105,   196,   222,   325,   217,    76,    77,   350,   113,   111,
      47,   -23,    34,    64,    82,   181,   182,    34,   173,    82,
      34,    34,    64,   340,    34,   102,    64,    34,   192,   278,
      48,    49,    34,    86,   223,    11,    64,    64,   355,    34,
      51,   194,    12,    91,    90,    38,    34,   208,   210,    34,
      64,   202,    82,    34,    91,    64,   221,   224,    87,   115,
     301,   191,   116,    75,   215,   213,    75,   289,   273,   174,
     220,   309,   191,   297,    52,    53,    54,    55,    56,    57,
      34,    58,    59,   259,    34,   118,   117,   238,   321,   298,
     191,   183,   205,  -199,   262,    76,    77,   191,    76,    77,
     109,   332,   290,   218,   117,    64,    64,    64,    64,    64,
      34,   299,   317,    34,   304,    47,  -199,   342,   323,   319,
     338,   282,    64,   242,   249,   250,   279,    64,   -57,   351,
      64,   -57,   188,   109,   353,   108,   -22,   104,   257,   175,
     324,   310,   339,   199,   269,   184,  -127,   191,   -57,    96,
     -57,   352,   -58,   -23,  -165,   176,   211,   204,   117,   311,
     270,   268,  -127,   108,   -22,    64,   214,    64,  -165,     1,
      96,     2,  -170,   275,   276,   191,   228,     3,     4,   232,
       5,     6,    47,   267,    82,   227,  -170,     7,   171,   172,
     281,   230,    64,     8,   307,   308,   231,   288,     9,    82,
      64,    96,   239,    10,   243,    64,   244,   245,   247,   302,
     251,   253,    11,    64,    64,   292,   255,   256,   258,   260,
     295,   261,    82,   312,   264,   274,    71,   265,   283,   285,
     266,    96,   284,   287,    96,   294,   303,   302,   306,   315,
     313,   316,   327,   270,   326,   331,    64,   335,   336,   337,
      12,   343,   333,   207,    65,   107,    96,    65,    65,    92,
     263,    61,   327,   114,   206,    89,     0,    96,     0,   187,
       0,   103,    96,     0,     0,     0,     0,   302,     0,     0,
       0,     0,    96,     0,    96,    96,    96,    96,     0,     0,
     327,     0,    96,     0,     0,     0,     0,    65,    65,    65,
      65,     0,     0,     0,   121,   122,   123,   125,     0,     0,
     293,     0,     0,   296,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
     178,     0,    65,     0,     0,   193,    65,     0,     0,   190,
     318,     0,   190,   195,     0,     0,    65,   203,     0,     0,
       0,     0,   329,    92,   190,     0,     0,   209,     0,     0,
      65,   334,     0,     0,    92,    65,     0,     0,     0,     0,
       0,     0,     0,     0,   344,     0,     0,   346,     1,     0,
       2,   347,   348,   349,     0,     0,     3,     4,     0,     5,
       6,   354,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,    10,     0,     0,    65,    65,    65,    65,    65,
       0,    11,   233,   234,   235,   236,   237,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,    65,     0,   248,
      65,     0,     0,     0,   252,     0,     0,   254,     0,     0,
       0,     0,     1,     0,     2,     0,     0,   320,     0,    12,
       3,     4,     0,     5,     6,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,    65,     8,    65,     0,     0,
       0,     9,   272,     0,   125,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,   286,
      65,     0,     0,     0,     0,    65,     0,   128,     0,     0,
       0,     0,     0,    65,    65,     0,     0,     0,     0,     0,
     125,   305,     0,    12,     0,     0,     0,   129,   130,     0,
     131,   132,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,    65,   136,   137,   138,
     139,     0,     0,   330,     0,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   128,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,   164,   165,     0,     0,     0,   -34,
       0,     0,   129,   130,     0,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,     0,   136,   137,   138,   139,     0,     0,     0,     0,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   128,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   163,   164,
     165,     0,     0,     0,     0,     0,     0,   129,   130,     0,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,   225,   136,   137,   138,
     139,     0,     0,     0,     0,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   128,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,   164,   165,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,     0,   136,   137,   138,   139,     0,     0,     0,     0,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   128,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   163,   164,
     165,     0,     0,     0,     0,     0,     0,   129,   130,     0,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,   314,   136,   137,   138,
     139,     0,     0,     0,     0,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   128,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,   164,   165,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,     0,   136,   137,   138,   139,     0,     0,     0,     0,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   128,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   163,   164,
     165,     0,     0,     0,     0,     0,     0,   129,   130,     0,
     131,   132,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,   136,   137,   138,
     139,     0,     0,     0,     0,     0,   140,   141,   142,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   128,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,   164,   165,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,     0,   136,   137,   138,   139,     0,     0,     0,     0,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   163,   164,
     165,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,    51,   124,    48,    49,     0,    83,   201,     0,     0,
       0,     0,     0,    51,    48,    49,     0,    83,   212,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    34,    58,    59,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    34,    58,    59,     0,     0,    52,    53,
      54,    55,    56,    57,    34,    58,    59,    48,    49,     0,
      83,     0,     0,     0,     0,     0,     0,    51,    48,    49,
       0,    83,   291,     0,     0,     0,     0,     0,    51,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,    51,
      48,    49,     0,    83,     0,     0,   219,     0,     0,     0,
      51,    52,    53,    54,    55,    56,    57,    34,    58,    59,
       0,     0,    52,    53,    54,    55,    56,    57,    34,    58,
      59,     0,     0,    52,    53,    54,    55,    56,    57,    34,
      58,    59,     0,     0,    52,    53,    54,    55,    56,    57,
      34,    58,    59,    48,    49,     0,    98,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    12,    58,    59
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    75,    14,     6,    24,   113,    10,    24,    73,    23,
      31,    22,     8,     9,    22,    44,   175,     7,    22,    44,
     268,    45,    91,    44,     0,    50,    22,    24,    39,    23,
      23,    44,    23,    23,    24,    46,    45,    48,    49,    50,
      51,    24,    44,    46,    12,    44,    31,    76,    77,    44,
      43,    45,    44,   301,    45,    76,    77,    45,    44,    44,
      71,    44,    91,    74,    75,    76,    77,    91,    71,    80,
      91,    91,    83,   321,    91,    86,    87,    91,    86,   238,
      41,    42,    91,    44,    76,    53,    97,    98,    45,    91,
      51,    87,    91,   104,    98,   106,    91,   108,   109,    91,
     111,    97,   113,    91,   115,   116,   117,   118,    69,    23,
     269,    23,    26,    44,    45,   111,    44,    45,   228,     7,
     116,   280,    23,     7,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    45,    91,    22,    24,     7,   297,    23,
      23,    31,   104,    24,    45,    76,    77,    23,    76,    77,
      24,   310,   260,   115,    24,   166,   167,   168,   169,   170,
      91,    45,    45,    91,   274,   176,    24,   326,    23,    45,
      23,   245,   183,   176,   185,   186,   241,   188,    23,    23,
     191,    26,    43,    24,   343,    43,    44,    23,   199,     7,
      45,     7,    45,    24,     7,    23,     7,    23,    43,   211,
      45,    45,    43,    44,    31,    23,   110,    43,    24,   283,
      23,   222,    23,    43,    44,   226,    31,   228,    45,    10,
     232,    12,    31,    14,    15,    23,    23,    18,    19,   133,
      21,    22,   243,    31,   245,    52,    45,    28,    94,    95,
     243,    29,   253,    34,    14,    15,    26,   258,    39,   260,
     261,   263,    91,    44,    23,   266,    45,    23,    23,   270,
      23,    23,    53,   274,   275,   261,    45,    45,    24,    44,
     266,    44,   283,   284,    31,    23,    23,    45,    23,    23,
      44,   293,    77,    50,   296,    31,    23,   298,    31,    31,
      77,    45,   303,    23,     7,    31,   307,    31,    31,    31,
      91,     7,   313,   108,     5,    29,   318,     8,     9,    10,
     214,     5,   323,    39,   106,     9,    -1,   329,    -1,    80,
      -1,    22,   334,    -1,    -1,    -1,    -1,   338,    -1,    -1,
      -1,    -1,   344,    -1,   346,   347,   348,   349,    -1,    -1,
     351,    -1,   354,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
     264,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,    83,
     294,    -1,    86,    87,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,   306,   104,    98,    -1,    -1,   108,    -1,    -1,
     111,   315,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   328,    -1,    -1,   331,    10,    -1,
      12,   335,   336,   337,    -1,    -1,    18,    19,    -1,    21,
      22,   345,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,   166,   167,   168,   169,   170,
      -1,    53,   166,   167,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,    -1,   188,    -1,   183,
     191,    -1,    -1,    -1,   188,    -1,    -1,   191,    -1,    -1,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    91,
      18,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,   226,    34,   228,    -1,    -1,
      -1,    39,   226,    -1,   228,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,   253,
     261,    -1,    -1,    -1,    -1,   266,    -1,     6,    -1,    -1,
      -1,    -1,    -1,   274,   275,    -1,    -1,    -1,    -1,    -1,
     274,   275,    -1,    91,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,   307,    46,    47,    48,
      49,    -1,    -1,   307,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     6,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     6,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     6,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     6,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     6,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     6,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     6,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    82,    83,
      84,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    41,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    41,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    41,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    41,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      41,    42,    -1,    44,    -1,    -1,    80,    -1,    -1,    -1,
      51,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    41,    42,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      44,    53,    91,    97,    98,    99,   100,   101,   102,   103,
     104,   108,   109,   110,   111,   118,   125,   127,   130,   131,
     132,   142,   149,   150,    91,   144,   149,   141,   149,    44,
     128,   129,   149,    24,   119,   120,   121,   149,    41,    42,
      44,    51,    85,    86,    87,    88,    89,    90,    92,    93,
     106,   107,   117,   145,   149,   150,   151,   152,   153,   154,
     155,    23,   119,   122,    31,    44,    76,    77,   135,   136,
     137,   139,   149,    44,   105,   107,    44,    69,   105,   107,
     110,   149,   150,   133,   149,     0,    99,    44,    44,   101,
     105,   110,   149,   150,    23,    43,    12,   132,    43,    24,
      31,    44,   143,    44,   128,    23,    26,    24,    22,    24,
     119,   107,   107,   107,    52,   107,   146,   148,     6,    26,
      27,    29,    30,    31,    41,    42,    46,    47,    48,    49,
      55,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    82,    83,    84,   112,   113,   114,   115,
     116,    94,    95,   119,     7,     7,    23,   122,   107,   138,
     139,   149,   149,    31,    23,    76,    77,   136,    43,   105,
     107,    23,   101,   150,   105,   107,    45,    44,    50,    24,
     134,    45,   105,   150,    43,   111,   141,   102,   149,   150,
     149,    98,    45,   105,    31,    45,   135,    45,   111,    80,
     105,   149,    44,    76,   149,    45,    31,    52,    23,   147,
      29,    26,    98,   107,   107,   107,   107,   107,     7,    91,
     124,   124,   119,    23,    45,    23,   140,    23,   107,   149,
     149,    23,   107,    23,   107,    45,    45,   149,    24,    45,
      44,    44,    45,    98,    31,    45,    44,    31,   149,     7,
      23,   123,   107,   148,    23,    14,    15,   126,   124,   122,
       7,   119,   139,    23,    77,    23,   107,    50,   149,    45,
     135,    45,   105,    98,    31,   105,    98,     7,    23,    45,
     123,   124,   149,    23,   148,   107,    31,    14,    15,   124,
       7,   139,   149,    77,    45,    31,    45,    45,    98,    45,
      15,   124,    45,    23,    45,   123,     7,   149,    31,    98,
     107,    31,   124,   149,    98,    31,    31,    31,    23,    45,
     123,    45,   124,     7,    98,    31,    98,    98,    98,    98,
      45,    23,    45,   124,    98,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   122,   122,
     123,   123,   123,   123,   124,   125,   125,   125,   125,   126,
     126,   127,   127,   127,   128,   128,   128,   129,   129,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   138,   139,
     139,   140,   140,   141,   142,   142,   143,   143,   144,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   153,   154,   154,
     155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       5,     6,     1,     1,     3,     4,     1,     2,     2,     3,
       3,     4,     3,     5,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     5,     4,     6,     5,     7,
       6,     8,     7,     9,     7,     9,     8,    10,     4,     3,
       1,     1,     2,     1,     1,     2,     3,     5,     2,     4,
       2,     4,     3,     5,     1,     4,     7,     5,     8,     4,
       5,     6,     9,     9,     1,     3,     2,     1,     3,     6,
       7,     7,     8,     1,     2,     3,     5,     1,     2,     2,
       3,     2,     5,     2,     1,     2,     3,     6,     3,     2,
       3,     1,     3,     2,     3,     1,     2,     2,     3,     1,
       3,     2,     3,     1,     4,     5,     2,     3,     1,     2,
       3,     1,     2,     2,     3,     2,     3,     3,     1,     1,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1
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

#line 1881 "parser.tab.c"

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
#line 409 "parser.y"



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
