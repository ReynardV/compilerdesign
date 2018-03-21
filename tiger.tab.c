/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "tiger.y" /* yacc.c:339  */

#include <iostream>
#include <string>
#include "ast.hh"
//#define YY_DECL extern "C" int yylex()

using namespace tiger;
using namespace std;

extern "C" int yylex(void);
extern "C" int yylineno;
void yyerror(ASTNode::ASTptr *out, const char *);
tiger::ASTNode::ASTptr name(const char *str);

#line 81 "tiger.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tiger.tab.h".  */
#ifndef YY_YY_TIGER_TAB_H_INCLUDED
# define YY_YY_TIGER_TAB_H_INCLUDED
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
    NUMBER = 258,
    STR = 259,
    NAME = 260,
    ARRAY = 261,
    IF = 262,
    THEN = 263,
    ELSE = 264,
    WHILE = 265,
    FOR = 266,
    TO = 267,
    DO = 268,
    LET = 269,
    IN = 270,
    END = 271,
    OF = 272,
    BREAK = 273,
    NIL = 274,
    FUNCTION = 275,
    VAR = 276,
    TYPE = 277,
    IMPORT = 278,
    PRIMITIVE = 279,
    CLASS = 280,
    EXTENDS = 281,
    METHOD = 282,
    NEW = 283,
    ASSIGN = 284,
    POINTIES = 285,
    LESS_EQUAL = 286,
    GREATER_EQUAL = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "tiger.y" /* yacc.c:355  */

    double              d;
    const char*         str;

    /* all these will need to be declared in ast.hh */
    /* depending on our implementation, we might need all these,
       certain types might be described using the same union
       member. we can edit that as we go. */
    tiger::ASTNode::ASTptr     ast;
    tiger::ASTNode::value_t    val;

    tiger::DeclListASTNode*    decllist_ast;
    tiger::DeclarationASTNode*  decl_ast;

    tiger::FieldListASTNode*   fieldlist_ast;

    tiger::ExprSeqASTNode*     exprseq_ast;

    tiger::TypeASTNode*        type_ast;

    tiger::RecordFieldASTNode* recfield_ast;
    tiger::RecordTypeASTNode*  rectype_ast;

#line 178 "tiger.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (tiger::ASTNode::ASTptr *out);

#endif /* !YY_YY_TIGER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "tiger.tab.c" /* yacc.c:358  */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,     2,
      44,    45,    41,    39,    50,    40,    43,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      36,    35,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,    33,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    95,    98,   100,   102,   104,   106,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   154,   156,   160,   162,   166,   168,   172,   175,   180,
     183,   188,   191,   196,   198,   202,   204,   206,   210,   213,
     218,   220,   222,   226,   230,   232,   234,   238,   240,   244,
     247,   252,   256,   258,   262,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STR", "NAME", "ARRAY", "IF",
  "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET", "IN", "END", "OF",
  "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "IMPORT", "PRIMITIVE",
  "CLASS", "EXTENDS", "METHOD", "NEW", "ASSIGN", "POINTIES", "LESS_EQUAL",
  "GREATER_EQUAL", "'|'", "'&'", "'='", "'<'", "'>'", "'['", "'+'", "'-'",
  "'*'", "'/'", "'.'", "'('", "')'", "'{'", "'}'", "']'", "';'", "','",
  "':'", "$accept", "program", "expr", "exprlist_opt", "exprseq_opt",
  "fieldlist_opt", "exprseq", "exprlist", "fieldlist", "lvalue",
  "lvalue_not_id", "decllist", "declaration", "typedecl", "type",
  "typefields_opt", "typefields", "typefield", "vardecl", "funcdecl", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   124,    38,    61,    60,    62,    91,    43,
      45,    42,    47,    46,    40,    41,   123,   125,    93,    59,
      44,    58
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -40,   -40,   -13,     8,     8,     1,    33,   -40,   -40,
       8,     8,     7,   198,   -15,   -29,     8,     8,    24,    78,
     122,     3,    25,    29,    46,    47,   -40,   -40,   -40,   -40,
     -39,   198,    11,    14,   -40,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,    55,     8,
     160,   198,    19,    20,    30,    32,    37,     8,     8,     8,
      44,   -28,    54,     8,   -40,   -40,     8,   224,   224,   224,
     211,   237,   224,   224,   224,   -39,   -39,   -40,   -40,   198,
     -40,   179,    73,   -40,     8,     8,   -40,    86,    41,   198,
     109,    88,     8,    89,    15,    79,   198,   -40,     8,   198,
     198,    61,     8,     8,    48,    52,    50,   -40,   198,    72,
     -40,    87,    88,   -40,   -40,   198,     8,   198,   147,   100,
     -27,    88,     8,   101,    60,   198,     8,   -40,     8,   118,
     -40,   198,   -40,   -40,   198,   198,    90,     8,   198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     3,    43,     0,     0,     0,     0,    29,     5,
       0,    33,     0,     2,     6,    44,     0,    31,    35,     0,
       0,     0,     0,     0,     0,     0,    48,    50,    51,    52,
       7,    37,     0,    34,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    32,     0,     0,    36,     0,     0,     0,
       0,     0,     0,    33,    49,    22,     0,    13,    16,    17,
      19,    18,    12,    14,    15,     8,     9,    10,    11,    20,
      45,     0,    46,    21,     0,     0,    23,     0,    25,    27,
       0,    57,     0,     0,     0,     0,    38,    47,     0,    40,
      41,     0,     0,     0,     0,     0,    58,    59,    62,     0,
      54,     0,    57,    53,    30,    24,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    61,     0,     0,
      60,    63,    56,    55,    28,    64,     0,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,     0,   -40,    64,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,    99,   -40,   -40,    17,   -40,     9,   -40,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    31,    52,    32,    55,    33,    53,    56,    14,
      15,    25,    26,    27,   113,   105,   106,   107,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    92,    45,    46,    19,    20,    21,    34,   128,    49,
      30,     1,     2,     3,    47,     4,    50,    51,     5,     6,
     110,   111,     7,    93,   129,    16,     8,     9,    48,    54,
      60,    17,    59,    18,    61,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    10,    81,
     102,    62,    11,    22,    23,    24,    65,    88,    89,    90,
      80,   112,    63,    66,    83,    85,    96,    22,    23,    24,
      84,    35,    36,    37,    38,    39,    40,    41,    42,    86,
      43,    44,    45,    46,    99,   100,    57,    87,    91,    94,
      98,   101,   108,   104,   109,   114,   116,   120,   115,   119,
     121,   122,   117,   118,   123,   127,   132,   133,    35,    36,
      37,    38,    39,    40,    41,    42,   125,    43,    44,    45,
      46,   103,   131,   136,    64,   137,   134,    95,   135,   124,
     130,     0,     0,     0,     0,    58,     0,   138,     0,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,    35,    36,    37,    38,    39,    40,    41,    42,
     126,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    82,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,     0,     0,     0,     0,     0,    97,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,    35,    36,    37,     0,    39,    40,    41,    42,     0,
      43,    44,    45,    46,    -1,    -1,    -1,     0,     0,    -1,
      -1,    -1,     0,    43,    44,    45,    46,    35,    36,    37,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46
};

static const yytype_int16 yycheck[] =
{
       0,    29,    41,    42,     4,     5,     5,     0,    35,    38,
      10,     3,     4,     5,    29,     7,    16,    17,    10,    11,
       5,     6,    14,    51,    51,    38,    18,    19,    43,     5,
       5,    44,    29,    46,     5,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    40,    49,
       9,     5,    44,    20,    21,    22,    45,    57,    58,    59,
       5,    46,    15,    49,    45,    35,    66,    20,    21,    22,
      50,    30,    31,    32,    33,    34,    35,    36,    37,    47,
      39,    40,    41,    42,    84,    85,     8,    50,    44,    35,
      17,     5,    92,     5,     5,    16,    35,    45,    98,    51,
      50,    29,   102,   103,    17,     5,     5,    47,    30,    31,
      32,    33,    34,    35,    36,    37,   116,    39,    40,    41,
      42,    12,   122,     5,    25,    35,   126,    63,   128,   112,
     121,    -1,    -1,    -1,    -1,    13,    -1,   137,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    30,    31,    32,    33,    34,    35,    36,    37,
      13,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    30,    31,    32,    -1,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    30,    31,    32,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    30,    31,    32,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,    10,    11,    14,    18,    19,
      40,    44,    53,    54,    61,    62,    38,    44,    46,    54,
      54,     5,    20,    21,    22,    63,    64,    65,    70,    71,
      54,    54,    56,    58,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    39,    40,    41,    42,    29,    43,    38,
      54,    54,    55,    59,     5,    57,    60,     8,    13,    29,
       5,     5,     5,    15,    64,    45,    49,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
       5,    54,    48,    45,    50,    35,    47,    50,    54,    54,
      54,    44,    29,    51,    35,    56,    54,    48,    17,    54,
      54,     5,     9,    12,     5,    67,    68,    69,    54,     5,
       5,     6,    46,    66,    16,    54,    35,    54,    54,    51,
      45,    50,    29,    17,    67,    54,    13,     5,    35,    51,
      69,    54,     5,    47,    54,    54,     5,    35,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    64,    65,    66,    66,    66,    67,    67,    68,
      68,    69,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     4,     6,     4,     6,     4,     8,     1,
       5,     0,     1,     0,     1,     0,     1,     1,     3,     1,
       3,     3,     5,     1,     1,     3,     4,     4,     1,     2,
       1,     1,     1,     4,     1,     3,     3,     0,     1,     1,
       3,     3,     4,     6,     7,     9
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
      yyerror (out, YY_("syntax error: cannot back up")); \
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
                  Type, Value, out); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, tiger::ASTNode::ASTptr *out)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (out);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, tiger::ASTNode::ASTptr *out)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, out);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, tiger::ASTNode::ASTptr *out)
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
                                              , out);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, out); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, tiger::ASTNode::ASTptr *out)
{
  YYUSE (yyvaluep);
  YYUSE (out);
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
yyparse (tiger::ASTNode::ASTptr *out)
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
        case 2:
#line 91 "tiger.y" /* yacc.c:1646  */
    {
       *out = (yyval.ast);
  }
#line 1393 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 95 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new StrASTNode((yyvsp[0].str));
        free((char*)(yyvsp[0].str)); // free the duplicated string
  }
#line 1402 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new NumASTNode((yyvsp[0].d));
  }
#line 1410 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 100 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new NilASTNode();
  }
#line 1418 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
  }
#line 1426 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new UnaryMinusASTNode("-", (yyvsp[0].ast));
  }
#line 1434 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 106 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new PlusASTNode("+", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1442 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new MinusASTNode("-", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1450 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new MultASTNode("*", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1458 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 112 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new DivASTNode("/", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1466 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new EqualASTNode("=", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1474 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 116 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new NotEqualASTNode("<>", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1482 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 118 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new LessASTNode("<", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1490 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 120 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new GreaterASTNode(">", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1498 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new LessEqualASTNode("<=", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1506 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new GreaterEqualASTNode(">=", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1514 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 126 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new LogicalAndASTNode("&", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1522 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new LogicalOrASTNode("|", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1530 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new AssignASTNode(":=", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1538 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new FuncCallASTNode("(", "(", "))", name((yyvsp[-3].str)), (yyvsp[-1].exprseq_ast), false);
  }
#line 1546 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[-1].exprseq_ast);
  }
#line 1554 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 136 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new TypeInstASTNode("", "{", "}", name((yyvsp[-3].str)), (yyvsp[-1].ast));
  }
#line 1562 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "tiger.y" /* yacc.c:1646  */
    {     /* array */
        (yyval.ast) = new ArrayASTNode("", " [", "] of ", name((yyvsp[-5].str)), (yyvsp[-3].ast), (yyvsp[0].ast), false);
  }
#line 1570 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 140 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ConditionalASTNode("if", "then", "else", (yyvsp[-2].ast), (yyvsp[0].ast), new NilASTNode());
  }
#line 1578 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 142 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ConditionalASTNode("if", "then", "else", (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1586 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new WhileLoopASTNode("while", "do", (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1594 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ForLoopASTNode("for", ":=", "to", "do", name((yyvsp[-6].str)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
  }
#line 1602 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 148 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new BreakASTNode();
  }
#line 1610 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new LetASTNode("let", "in", "end", (yyvsp[-3].decllist_ast), (yyvsp[-1].exprseq_ast));
  }
#line 1618 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = new ExprSeqASTNode(", ");
  }
#line 1626 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = (yyvsp[0].exprseq_ast);
  }
#line 1634 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = new ExprSeqASTNode("; ");
  }
#line 1642 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = (yyvsp[0].exprseq_ast);
  }
#line 1650 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new FieldListASTNode(", ");
  }
#line 1658 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].fieldlist_ast);
  }
#line 1666 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 172 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = new ExprSeqASTNode("; ");
        (yyval.exprseq_ast)->add_node((yyvsp[0].ast));
  }
#line 1675 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = (yyvsp[-2].exprseq_ast);
        (yyval.exprseq_ast)->add_node((yyvsp[0].ast));
  }
#line 1684 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 180 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = new ExprSeqASTNode(", ");
        (yyval.exprseq_ast)->add_node((yyvsp[0].ast));
  }
#line 1693 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.exprseq_ast) = (yyvsp[-2].exprseq_ast);
        (yyval.exprseq_ast)->add_node((yyvsp[0].ast));
  }
#line 1702 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 188 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.fieldlist_ast) = new FieldListASTNode(", ");
        (yyval.fieldlist_ast)->add_node(new FieldMemberASTNode("=", name((yyvsp[-2].str)), (yyvsp[0].ast), false));
  }
#line 1711 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.fieldlist_ast) = (yyvsp[-4].fieldlist_ast);
        (yyval.fieldlist_ast)->add_node(new FieldMemberASTNode("=", name((yyvsp[-2].str)), (yyvsp[0].ast), false));
  }
#line 1720 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 196 "tiger.y" /* yacc.c:1646  */
    {
      (yyval.ast) = name((yyvsp[0].str));
  }
#line 1728 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 198 "tiger.y" /* yacc.c:1646  */
    {
      (yyval.ast) = (yyvsp[0].ast);
  }
#line 1736 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 202 "tiger.y" /* yacc.c:1646  */
    {
      (yyval.ast) = new DotASTNode("(", ".", ")", (yyvsp[-2].ast), name((yyvsp[0].str)), false);
  }
#line 1744 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 204 "tiger.y" /* yacc.c:1646  */
    {
      (yyval.ast) = new IndexASTNode("", "[", "]", name((yyvsp[-3].str)), (yyvsp[-1].ast), false);
  }
#line 1752 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 206 "tiger.y" /* yacc.c:1646  */
    {
      (yyval.ast) = new IndexASTNode("", "[", "]", (yyvsp[-3].ast), (yyvsp[-1].ast), false);
  }
#line 1760 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 210 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.decllist_ast) = new DeclListASTNode(" ");
        (yyval.decllist_ast)->add_node((yyvsp[0].decl_ast));
  }
#line 1769 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 213 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.decllist_ast) = (yyvsp[-1].decllist_ast);
        (yyval.decllist_ast)->add_node((yyvsp[0].decl_ast));
  }
#line 1778 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.decl_ast) = new DeclarationASTNode("", (yyvsp[0].ast));
  }
#line 1786 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 220 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.decl_ast) = new DeclarationASTNode("", (yyvsp[0].ast));
  }
#line 1794 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 222 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.decl_ast) = new DeclarationASTNode("", (yyvsp[0].ast));
  }
#line 1802 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 226 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new TypeDeclASTNode("type", "=", name((yyvsp[-2].str)), (yyvsp[0].type_ast));
  }
#line 1810 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 230 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.type_ast) = new TypeASTNode("", name((yyvsp[0].str)));
  }
#line 1818 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 232 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.type_ast) = new TypeASTNode("{ ", " }", (yyvsp[-1].rectype_ast));
  }
#line 1826 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.type_ast) = new TypeASTNode("", new ArrayTypeASTNode("array of ", name((yyvsp[0].str))));
  }
#line 1834 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 238 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.rectype_ast) = new RecordTypeASTNode(", ");
  }
#line 1842 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 240 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.rectype_ast) = (yyvsp[0].rectype_ast);
  }
#line 1850 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 244 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.rectype_ast) = new RecordTypeASTNode(", ");
        (yyval.rectype_ast)->add_node((yyvsp[0].recfield_ast));
  }
#line 1859 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 247 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.rectype_ast) = (yyvsp[-2].rectype_ast);
        (yyval.rectype_ast)->add_node((yyvsp[0].recfield_ast));
  }
#line 1868 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 252 "tiger.y" /* yacc.c:1646  */
    {
       (yyval.recfield_ast) = new RecordFieldASTNode(":", name((yyvsp[-2].str)), name((yyvsp[0].str)), false);
  }
#line 1876 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 256 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new UntypedVarDeclASTNode("var", ":=", name((yyvsp[-2].str)), (yyvsp[0].ast));
  }
#line 1884 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 258 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new TypedVarDeclASTNode("var", ":", ":=", name((yyvsp[-4].str)), name((yyvsp[-2].str)), (yyvsp[0].ast));
  }
#line 1892 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 262 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new UnTypedFuncDeclASTNode("(function ", "(", ") = ", ")", name((yyvsp[-5].str)), (yyvsp[-3].rectype_ast), (yyvsp[0].ast), false);
  }
#line 1900 "tiger.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 264 "tiger.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new TypedFuncDeclASTNode("(function ", "(", "):", "=", ")", name((yyvsp[-7].str)), (yyvsp[-5].rectype_ast), name((yyvsp[-2].str)), (yyvsp[0].ast), false);
  }
#line 1908 "tiger.tab.c" /* yacc.c:1646  */
    break;


#line 1912 "tiger.tab.c" /* yacc.c:1646  */
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
      yyerror (out, YY_("syntax error"));
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
        yyerror (out, yymsgp);
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
                      yytoken, &yylval, out);
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
                  yystos[yystate], yyvsp, out);
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
  yyerror (out, YY_("memory exhausted"));
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
                  yytoken, &yylval, out);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, out);
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
#line 268 "tiger.y" /* yacc.c:1906  */


void yyerror(tiger::ASTNode::ASTptr *out, const char *error) {
    cerr << error << " " << yylineno << endl;
}

/* Create a new NameASTNode from a duplicated const char* without causing a memory leak.
 * This is necessary because flex calls strdup() in order to make sure the pointer to the
 * string doesn't change, but this results in a memory leak if the newly duplicated string
 * is not freed properly. */
tiger::ASTNode::ASTptr name(const char *str) {
    tiger::ASTNode::ASTptr new_node = new NameASTNode(str);
    free((char*)str); // free the duplicated string after it's safely stored in a std::string
    return new_node;
}
