/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "ppcm.y" /* yacc.c:339  */

# include <stdio.h>

char * fonction;		/* le nom de la fonction courante */

# include "ppcm.h"

# define YYDEBUG 1

#line 76 "ppcm.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    YNOM = 258,
    YNUM = 259,
    YTYPE = 260,
    YIF = 261,
    YELSE = 262,
    YWHILE = 263,
    YFOR = 264,
    YRETURN = 265,
    LSOCKET = 266,
    RSOCKET = 267,
    YAND = 268,
    YOR = 269,
    YNEQ = 270,
    YDECR = 271,
    YINCR = 272,
    FORT = 273
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "ppcm.y" /* yacc.c:355  */

  int i;			/* constantes, etiquettes et nbre d'arg. */
  char * c;			/* variables et fonctions */

#line 137 "ppcm.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 152 "ppcm.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    23,     2,     2,
      25,    26,    21,    19,    30,    20,     2,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
      32,    15,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      16,    17,    18,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    40,    41,    44,    46,    48,    43,
      54,    53,    59,    60,    62,    63,    64,    68,    70,    74,
      75,    80,    81,    83,    85,    88,    87,    92,    96,    95,
     101,   103,   100,   108,   110,   107,   114,   118,   120,   122,
     124,   117,   130,   132,   134,   136,   129,   143,   147,   146,
     153,   156,   158,   155,   161,   163,   166,   165,   170,   172,
     174,   176,   178,   182,   184,   187,   190,   192,   202,   201,
     214,   216,   218,   220,   222,   224,   226,   228,   230,   232,
     234,   236,   238,   241,   243,   245,   249,   252,   255,   258,
     262,   268,   269,   272,   271,   277,   279,   281,   283,   278,
     288,   290,   292,   294,   296,   287,   301,   303,   305,   307,
     300,   315,   314,   322,   321,   329,   332,   334,   331,   338,
     340,   342,   344,   346,   348,   350,   352,   378,   380,   382,
     384,   386,   389,   392,   395,   398,   404,   405,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "YNOM", "YNUM", "YTYPE", "YIF", "YELSE",
  "YWHILE", "YFOR", "YRETURN", "LSOCKET", "RSOCKET", "YAND", "YOR", "'='",
  "YNEQ", "YDECR", "YINCR", "'+'", "'-'", "'*'", "'/'", "'%'", "FORT",
  "'('", "')'", "'{'", "'}'", "';'", "','", "'>'", "'<'", "$accept",
  "programme", ".listinstr", "fonction", "$@1", "$@2", "$@3",
  "CallFonction", "$@4", ".listarg", ".listvar", "listnom", "listnom2",
  "instr", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "ret", "ifdebut", "$@19",
  "expr", "$@20", "$@21", "$@22", "$@23", "prep", "prepplus", "prepmoin",
  "prepmult", "prepdiv", "neg", ".listexpr", "$@24", "multsocket", "$@25",
  "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "tabdecla", "$@37", "tab", "$@38", "exprfor", "$@39",
  "$@40", "prepfor", "prepplusfor", "prepmoinfor", "prepmultfor",
  "prepdivfor", ".listexprfor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    61,   270,   271,   272,    43,
      45,    42,    47,    37,   273,    40,    41,   123,   125,    59,
      44,    62,    60
};
# endif

#define YYPACT_NINF -170

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define YYTABLE_NINF -114

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-114)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -170,    36,  -170,     1,  -170,    18,  -170,    41,    49,    28,
      26,  -170,    34,    59,  -170,    63,  -170,  -170,    76,    66,
    -170,    56,    83,   -22,    22,  -170,    88,  -170,   103,   259,
      82,    86,  -170,    87,    91,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,    15,   231,    64,    15,    15,    15,    15,
      15,    15,   206,   110,  -170,  -170,  -170,  -170,  -170,   112,
     115,   118,   119,   100,    88,  -170,  -170,  -170,  -170,  -170,
     239,   108,  -170,  -170,    15,    80,    97,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,   185,   185,   185,   185,   185,    31,
    -170,   128,  -170,  -170,  -170,    15,    15,   137,  -170,  -170,
    -170,  -170,    15,  -170,    15,  -170,  -170,    15,    15,    30,
      30,   185,  -170,  -170,   111,    15,    15,  -170,   185,   185,
    -170,    44,   124,   143,   138,   163,   241,   268,   136,  -170,
     -15,    30,    30,    30,    30,    30,   131,   132,   142,  -170,
     187,   185,   145,   150,    88,  -170,  -170,  -170,  -170,  -170,
     144,  -170,  -170,  -170,   149,   157,   178,   181,  -170,    30,
      30,  -170,  -170,    60,    60,    60,    60,    60,  -170,  -170,
    -170,  -170,  -170,  -170,    15,   239,  -170,  -170,  -170,  -170,
    -170,    60,  -170,    30,    30,    88,    88,   184,  -170,  -170,
    -170,   152,   122,   159,  -170,  -170,  -170,   177,  -170,  -170,
    -170,   194,   165,  -170,    30,    30,  -170,    15,   189,   196,
     193,   195,  -170,   203,    15,  -170,   239,  -170,   208,  -170,
    -170,  -170,   204,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     6,    12,     0,     0,
      13,    19,     0,     0,     7,     0,    14,    20,     8,     0,
       4,     0,    17,     0,     0,    16,    95,    15,     0,    50,
      54,     0,    25,     0,     0,    47,    90,    51,     4,     9,
      21,    67,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    96,   112,    18,    70,    63,    64,    72,
      75,    78,    81,     0,    95,    71,    74,    77,    80,    48,
       0,     0,    30,    37,     0,     0,     0,     4,    24,    85,
      68,    23,    83,    84,    58,    59,    60,    61,    62,    66,
      56,    73,    76,    79,    82,     0,     0,     0,    86,    87,
      88,    89,    91,   114,     0,    26,     4,     0,     0,   136,
     136,    52,    22,    36,     0,     0,     0,    65,    97,   101,
     107,    92,     0,     0,     0,     0,     0,   115,   119,   116,
     137,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      69,    57,     0,     0,    95,    93,    11,    49,    29,    31,
       0,   127,   125,   126,   129,     0,     0,     0,   128,     0,
     136,   130,   131,   120,   121,   122,   123,   124,    38,    43,
      53,    98,   102,   108,    91,     0,    34,   132,   133,   134,
     135,   117,   138,     0,     0,    95,    95,     0,    94,    32,
       4,     0,     0,     0,    99,   103,   109,     0,   118,    39,
      44,     0,     0,    35,   136,   136,   104,    91,     0,     0,
       0,     0,    40,     0,    91,   110,     0,    45,     0,    41,
       4,   105,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,   -38,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,   -43,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   -37,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -169,  -170,   -62,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -111,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,     4,     7,    16,    20,    41,    63,     9,
      18,    23,    10,    42,    70,    71,   107,   175,   108,   190,
     109,   183,   204,   216,   110,   184,   205,   220,    43,    44,
     104,    45,    74,   138,   116,   115,    46,    47,    48,    49,
      50,    51,   122,   174,    54,    95,   142,   185,    96,   143,
     186,   201,   210,    97,   144,   187,   202,    21,    26,    52,
      64,   130,   159,   191,   131,   132,   133,   134,   135,   136
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    78,   103,   137,     5,   188,    76,    27,    28,    84,
      85,    86,    87,    88,    89,   160,   161,   162,    29,    30,
     163,   164,   165,   166,   167,    29,    30,   105,    31,    32,
      33,    34,    35,   127,   128,    36,     2,   111,   211,   114,
      37,     3,    36,     6,    79,   218,     8,    37,   181,    38,
      39,    40,    11,   182,    12,   129,    13,    79,   118,   119,
      80,    14,    82,    83,    15,   121,    17,   123,   124,    22,
     125,   126,   192,   193,   145,    82,    83,    79,   140,   141,
      80,    19,   173,    29,    30,    25,    31,    32,    33,    34,
      35,   161,   162,    81,  -111,    82,    83,   208,   209,    53,
      36,    65,    66,    67,    68,    37,    55,    38,   112,    40,
      79,    69,    72,    80,    29,    30,    73,    31,    32,    33,
      34,    35,  -106,   194,   195,   102,   113,    98,    82,    83,
      99,    36,   189,   100,   101,   106,    37,   121,    38,   139,
      40,    29,    30,   117,    31,    32,    33,    34,    35,   120,
     146,   199,   197,   161,   162,   158,    79,   171,    36,    80,
     168,   169,   172,    37,   177,    38,   148,    40,   170,   147,
     121,   176,   178,   219,    82,    83,    79,   121,   198,    80,
      29,    30,   222,    31,    32,    33,    34,    35,   200,   149,
     161,   162,   207,   179,    82,    83,   180,    36,    79,   196,
      79,    80,    37,  -114,    38,   203,    40,    29,    30,   206,
      31,    32,    33,    34,    35,   212,    82,    83,    82,    83,
     214,    90,   213,   215,    36,    91,    92,    93,    94,    37,
     217,    38,   223,    40,    29,    30,   221,    31,    32,    33,
      34,    35,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,    79,     0,    37,    80,    77,    36,
      40,     0,     0,     0,    37,     0,    38,   150,    40,     0,
    -113,     0,    82,    83,    56,     0,    57,    58,    59,    60,
      61,    62,     0,   151,   -10,   152,   153,   154,   155,   156,
     157
};

static const yytype_int16 yycheck[] =
{
      38,    44,    64,   110,     3,   174,    43,    29,    30,    46,
      47,    48,    49,    50,    51,    30,    31,    32,     3,     4,
     131,   132,   133,   134,   135,     3,     4,    70,     6,     7,
       8,     9,    10,     3,     4,    20,     0,    74,   207,    77,
      25,     5,    20,    25,    13,   214,     5,    25,   159,    27,
      28,    29,     3,   160,    26,    25,    30,    13,    95,    96,
      16,    27,    31,    32,     5,   102,     3,   104,   106,     3,
     107,   108,   183,   184,    30,    31,    32,    13,   115,   116,
      16,     5,   144,     3,     4,    29,     6,     7,     8,     9,
      10,    31,    32,    29,    11,    31,    32,   204,   205,    11,
      20,    19,    20,    21,    22,    25,     3,    27,    28,    29,
      13,    25,    25,    16,     3,     4,    25,     6,     7,     8,
       9,    10,    12,   185,   186,    25,    29,    15,    31,    32,
      15,    20,   175,    15,    15,    27,    25,   174,    27,    28,
      29,     3,     4,    15,     6,     7,     8,     9,    10,    12,
      26,    29,   190,    31,    32,    19,    13,    12,    20,    16,
      29,    29,    12,    25,    15,    27,    28,    29,    26,    26,
     207,    27,    15,   216,    31,    32,    13,   214,    26,    16,
       3,     4,   220,     6,     7,     8,     9,    10,    29,    26,
      31,    32,    27,    15,    31,    32,    15,    20,    13,    15,
      13,    16,    25,    16,    27,    28,    29,     3,     4,    15,
       6,     7,     8,     9,    10,    26,    31,    32,    31,    32,
      27,    15,    26,    28,    20,    19,    20,    21,    22,    25,
      27,    27,    28,    29,     3,     4,    28,     6,     7,     8,
       9,    10,     3,     4,    -1,     6,     7,     8,     9,    10,
      -1,    20,    -1,    -1,    13,    -1,    25,    16,    27,    20,
      29,    -1,    -1,    -1,    25,    -1,    27,    26,    29,    -1,
      11,    -1,    31,    32,    15,    -1,    17,    18,    19,    20,
      21,    22,    -1,    15,    25,    17,    18,    19,    20,    21,
      22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,     0,     5,    36,     3,    25,    37,     5,    42,
      45,     3,    26,    30,    27,     5,    38,     3,    43,     5,
      39,    90,     3,    44,    35,    29,    91,    29,    30,     3,
       4,     6,     7,     8,     9,    10,    20,    25,    27,    28,
      29,    40,    46,    61,    62,    64,    69,    70,    71,    72,
      73,    74,    92,    11,    77,     3,    15,    17,    18,    19,
      20,    21,    22,    41,    93,    19,    20,    21,    22,    25,
      47,    48,    25,    25,    65,    35,    64,    27,    46,    13,
      16,    29,    31,    32,    64,    64,    64,    64,    64,    64,
      15,    19,    20,    21,    22,    78,    81,    86,    15,    15,
      15,    15,    25,    77,    63,    46,    27,    49,    51,    53,
      57,    64,    28,    29,    35,    68,    67,    15,    64,    64,
      12,    64,    75,    64,    35,    64,    64,     3,     4,    25,
      94,    97,    98,    99,   100,   101,   102,   102,    66,    28,
      64,    64,    79,    82,    87,    30,    26,    26,    28,    26,
      26,    15,    17,    18,    19,    20,    21,    22,    19,    95,
      30,    31,    32,    94,    94,    94,    94,    94,    29,    29,
      26,    12,    12,    77,    76,    50,    27,    15,    15,    15,
      15,    94,   102,    54,    58,    80,    83,    88,    75,    46,
      52,    96,    94,    94,    77,    77,    15,    35,    26,    29,
      29,    84,    89,    28,    55,    59,    15,    27,   102,   102,
      85,    75,    26,    26,    27,    28,    56,    27,    75,    46,
      60,    28,    35,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    37,    38,    39,    36,
      41,    40,    42,    42,    43,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    46,    47,    46,    46,    48,    46,
      49,    50,    46,    51,    52,    46,    46,    53,    54,    55,
      56,    46,    57,    58,    59,    60,    46,    61,    63,    62,
      64,    65,    66,    64,    64,    64,    67,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    68,    64,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    72,    73,
      74,    75,    75,    76,    75,    77,    78,    79,    80,    77,
      81,    82,    83,    84,    85,    77,    86,    87,    88,    89,
      77,    91,    90,    93,    92,    94,    95,    96,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    97,    97,    97,
      97,    97,    98,    99,   100,   101,   102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     0,     0,    12,
       0,     5,     0,     1,     0,     4,     3,     1,     3,     2,
       4,     1,     3,     2,     2,     0,     3,     4,     0,     5,
       0,     0,     7,     0,     0,     9,     3,     0,     0,     0,
       0,    13,     0,     0,     0,     0,    15,     1,     0,     5,
       1,     0,     0,     5,     1,     1,     0,     4,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     1,     0,     4,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       1,     0,     1,     0,     4,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
      11,     0,     4,     0,     3,     1,     0,     0,     5,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 6:
#line 44 "ppcm.y" /* yacc.c:1646  */
    { printf("Fonction %s(",(yyvsp[-1].c)); }
#line 1409 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 46 "ppcm.y" /* yacc.c:1646  */
    { printf(") Debut \n\n"); nbtabu++; t(nbtabu); }
#line 1415 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1421 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "ppcm.y" /* yacc.c:1646  */
    { nbtabu=0; printf("\n"); t(nbtabu); printf("Fin"); }
#line 1427 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "ppcm.y" /* yacc.c:1646  */
    { printf("Appel %s(",(yyvsp[0].c)); }
#line 1433 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 1439 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); }
#line 1445 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1451 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1457 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "ppcm.y" /* yacc.c:1646  */
    { printf("%s", (yyvsp[0].c)); }
#line 1463 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "ppcm.y" /* yacc.c:1646  */
    { printf(",%s",(yyvsp[0].c)); }
#line 1469 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1475 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 84 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); }
#line 1481 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--; printf("\n"); t(nbtabu); printf("FinSi\n"); t(nbtabu); }
#line 1487 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "ppcm.y" /* yacc.c:1646  */
    { printf("else faire:\n"); nbtabu++; t(nbtabu); }
#line 1493 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 90 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--;  printf("\n"); t(nbtabu); printf("FinElse\n"); t(nbtabu); }
#line 1499 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--; printf("\n"); t(nbtabu); printf("FinSi\n"); t(nbtabu); }
#line 1505 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "ppcm.y" /* yacc.c:1646  */
    { printf("else faire:\n"); nbtabu++; t(nbtabu); }
#line 1511 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 98 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--; printf("\n"); t(nbtabu); printf("FinElse\n"); t(nbtabu); }
#line 1517 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 101 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("TantQue : "); }
#line 1523 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "ppcm.y" /* yacc.c:1646  */
    { printf(" faire :\n"); nbtabu++; t(nbtabu); }
#line 1529 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 105 "ppcm.y" /* yacc.c:1646  */
    { printf("FinTantQue\n"); t(nbtabu); }
#line 1535 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 108 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("TantQue : "); }
#line 1541 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "ppcm.y" /* yacc.c:1646  */
    { printf(" faire :\n"); nbtabu++; t(nbtabu); }
#line 1547 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 112 "ppcm.y" /* yacc.c:1646  */
    { printf("FinTantQue\n"); t(nbtabu);}
#line 1553 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); }
#line 1559 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 118 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("Pour: "); }
#line 1565 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 120 "ppcm.y" /* yacc.c:1646  */
    { printf(" TantQue "); }
#line 1571 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 122 "ppcm.y" /* yacc.c:1646  */
    { printf(" Apres chaque iteration faire: "); nbtabu++;  }
#line 1577 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("Iteration:\n"); t(nbtabu); }
#line 1583 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 126 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--; printf("FinIteration\n"); 
		 t(nbtabu); printf("FinPour\n\n"); nbtabu--; t(nbtabu); }
#line 1590 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 130 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("Pour: "); }
#line 1596 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 132 "ppcm.y" /* yacc.c:1646  */
    {printf(" TantQue ");}
#line 1602 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "ppcm.y" /* yacc.c:1646  */
    {printf(" Apres chaque iteration faire: "); nbtabu++; }
#line 1608 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 136 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("Iteration:\n"); t(nbtabu); }
#line 1614 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 138 "ppcm.y" /* yacc.c:1646  */
    { nbtabu--; printf("FinIteration\n");
		 t(nbtabu); printf("FinPour\n\n"); nbtabu--; t(nbtabu); }
#line 1621 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "ppcm.y" /* yacc.c:1646  */
    { printf("Renvoi "); }
#line 1627 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 147 "ppcm.y" /* yacc.c:1646  */
    { printf("\n"); t(nbtabu); printf("Si : "); }
#line 1633 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "ppcm.y" /* yacc.c:1646  */
    { printf(" faire:\n"); nbtabu++; t(nbtabu); }
#line 1639 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "ppcm.y" /* yacc.c:1646  */
    { printf("%s", (yyvsp[0].c)); }
#line 1645 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "ppcm.y" /* yacc.c:1646  */
    { printf("("); }
#line 1651 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1657 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "ppcm.y" /* yacc.c:1646  */
    {  printf(")"); }
#line 1663 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 162 "ppcm.y" /* yacc.c:1646  */
    { printf("%d",(yyvsp[0].i)); }
#line 1669 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1675 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "ppcm.y" /* yacc.c:1646  */
    { printf("="); }
#line 1681 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1687 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 171 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1693 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 173 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 1699 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 175 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 1705 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 177 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 1711 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 179 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 1717 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 183 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s-1",(yyvsp[-1].c),(yyvsp[-1].c)); }
#line 1723 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 185 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s+1",(yyvsp[-1].c),(yyvsp[-1].c)); }
#line 1729 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 188 "ppcm.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[-2].c)); }
#line 1735 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1741 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 193 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1747 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 202 "ppcm.y" /* yacc.c:1646  */
    { printf(" différent de "); }
#line 1753 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 215 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=", (yyvsp[-1].c)); }
#line 1759 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 217 "ppcm.y" /* yacc.c:1646  */
    { printf("%d+",(yyvsp[-1].i)); }
#line 1765 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "ppcm.y" /* yacc.c:1646  */
    { printf("%s+",(yyvsp[-1].c)); }
#line 1771 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 221 "ppcm.y" /* yacc.c:1646  */
    { printf("+"); }
#line 1777 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 223 "ppcm.y" /* yacc.c:1646  */
    { printf("%d-",(yyvsp[-1].i)); }
#line 1783 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 225 "ppcm.y" /* yacc.c:1646  */
    { printf("%s-",(yyvsp[-1].c)); }
#line 1789 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "ppcm.y" /* yacc.c:1646  */
    { printf("-"); }
#line 1795 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 229 "ppcm.y" /* yacc.c:1646  */
    { printf("%d-",(yyvsp[-1].i)); }
#line 1801 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "ppcm.y" /* yacc.c:1646  */
    { printf("%s-",(yyvsp[-1].c)); }
#line 1807 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "ppcm.y" /* yacc.c:1646  */
    { printf("*"); }
#line 1813 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 235 "ppcm.y" /* yacc.c:1646  */
    { printf("%d-",(yyvsp[-1].i)); }
#line 1819 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 237 "ppcm.y" /* yacc.c:1646  */
    { printf("%s-",(yyvsp[-1].c)); }
#line 1825 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 239 "ppcm.y" /* yacc.c:1646  */
    { printf("/"); }
#line 1831 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "ppcm.y" /* yacc.c:1646  */
    { printf(">"); }
#line 1837 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 244 "ppcm.y" /* yacc.c:1646  */
    { printf("<"); }
#line 1843 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 246 "ppcm.y" /* yacc.c:1646  */
    { printf("%s ou "); }
#line 1849 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s+(", (yyvsp[-2].c),(yyvsp[-2].c)); }
#line 1855 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 253 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s-(", (yyvsp[-2].c),(yyvsp[-2].c)); }
#line 1861 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 256 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s*(",(yyvsp[-2].c),(yyvsp[-2].c)); }
#line 1867 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s/(",(yyvsp[-2].c),(yyvsp[-2].c)); }
#line 1873 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 263 "ppcm.y" /* yacc.c:1646  */
    { printf("-"); }
#line 1879 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 268 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1885 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 270 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1891 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 272 "ppcm.y" /* yacc.c:1646  */
    { printf(","); }
#line 1897 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 274 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 1903 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 279 "ppcm.y" /* yacc.c:1646  */
    { printf("["); }
#line 1909 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 281 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1915 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 283 "ppcm.y" /* yacc.c:1646  */
    { printf("]"); }
#line 1921 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 285 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1927 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 288 "ppcm.y" /* yacc.c:1646  */
    { printf("["); }
#line 1933 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 290 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1939 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 292 "ppcm.y" /* yacc.c:1646  */
    { printf("]"); }
#line 1945 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 294 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1951 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 296 "ppcm.y" /* yacc.c:1646  */
    { printf("="); }
#line 1957 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 298 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1963 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 301 "ppcm.y" /* yacc.c:1646  */
    { printf("["); }
#line 1969 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 303 "ppcm.y" /* yacc.c:1646  */
    { printf("]"); }
#line 1975 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 305 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1981 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 307 "ppcm.y" /* yacc.c:1646  */
    { printf("="); }
#line 1987 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 309 "ppcm.y" /* yacc.c:1646  */
    { }
#line 1993 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 315 "ppcm.y" /* yacc.c:1646  */
    { printf("%s", (yyvsp[0].c)); }
#line 1999 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 322 "ppcm.y" /* yacc.c:1646  */
    { printf("%s", (yyvsp[0].c)); }
#line 2005 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 324 "ppcm.y" /* yacc.c:1646  */
    { }
#line 2011 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 330 "ppcm.y" /* yacc.c:1646  */
    { printf("%s", (yyvsp[0].c)); }
#line 2017 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 332 "ppcm.y" /* yacc.c:1646  */
    { printf("("); }
#line 2023 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 334 "ppcm.y" /* yacc.c:1646  */
    { }
#line 2029 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 336 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 2035 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 339 "ppcm.y" /* yacc.c:1646  */
    { printf("%d",(yyvsp[0].i)); }
#line 2041 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 341 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 2047 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 343 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 2053 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 345 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 2059 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 347 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 2065 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 349 "ppcm.y" /* yacc.c:1646  */
    { printf(")"); }
#line 2071 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 351 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s-1",(yyvsp[-1].c),(yyvsp[-1].c)); }
#line 2077 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 353 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s+1",(yyvsp[-1].c),(yyvsp[-1].c)); }
#line 2083 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 379 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=", (yyvsp[-1].c)); }
#line 2089 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 381 "ppcm.y" /* yacc.c:1646  */
    { printf("%d+",(yyvsp[-1].i)); }
#line 2095 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 383 "ppcm.y" /* yacc.c:1646  */
    { printf("%s+",(yyvsp[-1].c)); }
#line 2101 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 385 "ppcm.y" /* yacc.c:1646  */
    { printf(">"); }
#line 2107 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 387 "ppcm.y" /* yacc.c:1646  */
    { printf("<"); }
#line 2113 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 390 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s+(", (yyvsp[-2].c),(yyvsp[-2].c)); }
#line 2119 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 393 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s-(", (yyvsp[-2].c),(yyvsp[-2].c)); }
#line 2125 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 396 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s*(",(yyvsp[-2].c),(yyvsp[-2].c)); }
#line 2131 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 399 "ppcm.y" /* yacc.c:1646  */
    { printf("%s=%s/(",(yyvsp[-2].c),(yyvsp[-2].c)); }
#line 2137 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 404 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 2143 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 406 "ppcm.y" /* yacc.c:1646  */
    {  }
#line 2149 "ppcm.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 408 "ppcm.y" /* yacc.c:1646  */
    { printf(","); }
#line 2155 "ppcm.tab.c" /* yacc.c:1646  */
    break;


#line 2159 "ppcm.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 410 "ppcm.y" /* yacc.c:1906  */

main(){
  yyparse();
  return 0;
}

# include "lex.yy.c"		/* yylex et sa clique */

yyerror(char * message){
  extern int lineno;
  extern char * yytext;

  fprintf(stderr, "%d: %s at %s\n", lineno, message, yytext);
}

nomem(){
  fprintf(stderr, "Pas assez de memoire\n");
  exit(1);
}
