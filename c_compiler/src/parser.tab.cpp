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

#line 67 "src/parser.tab.cpp" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y" /* yacc.c:355  */

	#include "ast.hpp"
	#include "ast/base_expr.hpp"
	#include "ast/baseNode.hpp"
	#include "ast/binary_operators.hpp"
	#include "ast/constant.hpp"
	#include "ast/context.hpp"
	#include "ast/declaration.hpp"
	#include "ast/functions.hpp"
	#include "ast/statement.hpp"
	#include "ast/types.hpp"
	#include "ast/variables.hpp"

	#include <string>

	

	extern const baseNode *g_root; // A way of getting the AST out

	//! This is to fix problems when generating C++
	// We are declaring the functions provided by Flex, so
	// that Bison generated code can call them.
	void yyerror(const char *);

#line 122 "src/parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    F_CONST = 259,
    I_CONST = 260,
    C_CONST = 261,
    PLUS = 262,
    MINUS = 263,
    TIMES = 264,
    DIVIDE = 265,
    MODULUS = 266,
    LOR = 267,
    LAND = 268,
    OR = 269,
    NEQUAL = 270,
    LESSEQUAL = 271,
    LESSTHAN = 272,
    GREATEQUAL = 273,
    GREATTHAN = 274,
    AND = 275,
    XOR = 276,
    L_SHIFT = 277,
    R_SHIFT = 278,
    MUL_ASS = 279,
    DIV_ASS = 280,
    MOD_ASS = 281,
    ADD_ASS = 282,
    SUB_ASS = 283,
    LL_ASS = 284,
    RR_ASS = 285,
    AND_ASS = 286,
    XOR_ASS = 287,
    OR_ASS = 288,
    ARROW = 289,
    DECR = 290,
    INCR = 291,
    VOID = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    FLOAT = 297,
    DOUBLE = 298,
    SIGNED = 299,
    UNSIGNED = 300,
    CONST = 301,
    DO = 302,
    WHILE = 303,
    IF = 304,
    ELSE = 305,
    FOR = 306,
    SWITCH = 307,
    RETURN = 308,
    CONTINUE = 309,
    BREAK = 310,
    GOTO = 311,
    EQUAL = 312,
    SEMICOLON = 313,
    COMMA = 314,
    L_BRAC = 315,
    R_BRAC = 316,
    L_CURLY = 317,
    R_CURLY = 318,
    L_SQUARE = 319,
    R_SQUARE = 320,
    QUES_MARK = 321,
    COLON = 322,
    DOT = 323,
    STRING = 324,
    SIZEOF = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "src/parser.y" /* yacc.c:355  */

	const baseNode 		*node;
	const CompoundStatement *compstat;
	const Declaration 	*decl;
	const Expression 	*expr;
	const ExprStatement *exprstat;
	const List			*list;
	const Statement 	*stat;
	const Type 			*type;

	std::string 		*str;

#line 218 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "src/parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    90,    91,    96,    97,   102,   103,   104,
     105,   107,   110,   112,   116,   117,   120,   121,   124,   125,
     126,   127,   128,   129,   132,   141,   142,   145,   146,   149,
     150,   154,   155,   158,   159,   163,   164,   168,   169,   172,
     173,   176,   177,   180,   181,   182,   185,   186,   187,   188,
     189,   192,   193,   194,   197,   198,   199,   202,   203,   204,
     205,   208,   209,   213,   214,   215,   233,   235,   239,   240,
     243,   244,   246,   254,   255,   256,   259,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   285,   286,
     289,   295,   297,   300,   306,   310,   311,   314,   317,   318,
     324,   325,   326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "F_CONST", "I_CONST",
  "C_CONST", "PLUS", "MINUS", "TIMES", "DIVIDE", "MODULUS", "LOR", "LAND",
  "OR", "NEQUAL", "LESSEQUAL", "LESSTHAN", "GREATEQUAL", "GREATTHAN",
  "AND", "XOR", "L_SHIFT", "R_SHIFT", "MUL_ASS", "DIV_ASS", "MOD_ASS",
  "ADD_ASS", "SUB_ASS", "LL_ASS", "RR_ASS", "AND_ASS", "XOR_ASS", "OR_ASS",
  "ARROW", "DECR", "INCR", "VOID", "CHAR", "SHORT", "INT", "LONG", "FLOAT",
  "DOUBLE", "SIGNED", "UNSIGNED", "CONST", "DO", "WHILE", "IF", "ELSE",
  "FOR", "SWITCH", "RETURN", "CONTINUE", "BREAK", "GOTO", "EQUAL",
  "SEMICOLON", "COMMA", "L_BRAC", "R_BRAC", "L_CURLY", "R_CURLY",
  "L_SQUARE", "R_SQUARE", "QUES_MARK", "COLON", "DOT", "STRING", "SIZEOF",
  "$accept", "ROOT", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "STATEMENT", "COMPOUND_STATEMENT", "STATEMENT_LIST",
  "SELECTION_STATEMENT", "ITERATION_STATEMENT", "JUMP_STATEMENT",
  "EXPRESSION_STATEMENT", "EXPRESSION", "ASSIGNMENT_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "AND_EXPRESSION", "EQUALITY_EXPRESSION",
  "RELATIONAL_EXPRESSION", "SHIFT_EXPRESSION", "ADDITIVE_EXPRESSION",
  "MULTIPLCATIVE_EXPRESSION", "CAST_EXPRESSION", "PREFIX_EXPRESSION",
  "POSTFIX_EXPRESSION", "TYPE_NAME", "PRIMARY_EXPRESSION",
  "VARIABLE_CONSTANT", "ASSIGNMENT_OP", "DECLARATION",
  "DECLARATION_SPECIFIER", "TYPE_SPECIFIER", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "INITIALIZER", "DECLARATOR", "DIRECT_DECLARATOR", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -86,   -86,   -86,    12,     2,   -86,   -86,    18,   -86,
     -86,   -86,   -86,    22,   -86,    11,   -42,   -86,   -24,   -86,
     -86,    19,   -37,   -86,   186,   102,   -86,   -86,   -86,   -86,
     188,   188,    71,   -86,   -86,   -86,    17,    32,    20,    28,
      57,   -10,    78,    62,    96,    21,   -86,   201,   -17,   -86,
     -86,   -86,   139,    39,    70,    75,   145,   -86,   -86,   -86,
     -86,   110,   -86,   -86,   -86,   -86,   -18,   -86,   186,   -86,
     -86,   -86,   -86,   -86,   -48,    80,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   186,   -86,   -86,    86,
      91,   186,   186,    33,   -86,   -86,   -86,   -86,   186,   -86,
     186,    32,   -86,   -44,    20,    28,    57,   -10,    78,    78,
      62,    62,    62,    62,    96,    96,    21,    21,   -86,   -86,
     -86,   -86,   -86,    94,    51,    55,   145,   145,    18,   -86,
     -86,   186,   186,   139,   139,   149,   180,    99,   -86,    56,
     -86,   119,   139,    61,   139,    67,   -86,   139,   -86,   139,
     -86,   139,   -86,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,    92,    93,     0,     2,     3,     5,     0,    90,
       1,     4,   101,     0,    88,     0,     0,    94,    95,    98,
      99,     0,     0,    89,     0,     0,     6,   102,   100,    76,
       0,     0,     0,    74,    97,    29,    31,    33,    35,    37,
      39,    41,    43,    46,    51,    54,    57,    62,    63,    66,
      73,    96,     0,     0,     0,     0,     0,    25,    12,    14,
       7,     0,     8,     9,    10,    11,     0,    27,     0,    65,
      64,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    77,     0,    69,    68,     0,
       0,     0,     0,     0,    24,    13,    15,    26,     0,    75,
       0,    34,    62,     0,    36,    38,    40,    42,    45,    44,
      48,    47,    50,    49,    52,    53,    55,    56,    58,    59,
      60,    30,    67,     0,     0,     0,     0,     0,     0,    28,
      61,     0,     0,     0,     0,     0,     0,    95,    32,     0,
      18,    16,     0,     0,     0,     0,    19,     0,    20,     0,
      22,     0,    17,    21,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   173,   -35,   164,   -86,   -86,   -86,   -86,
     -46,   -31,   -20,    42,   -86,   118,   117,   121,   116,   123,
      84,     3,    88,    53,   -85,   -28,   -86,   -86,   -86,   -86,
     -86,    85,    89,   -86,   -86,   -86,   -86,   -15,   193
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    75,    49,    50,
     106,     7,     8,     9,    16,    17,    51,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    74,    69,    70,    34,    82,    27,   138,   139,   140,
     114,   118,    10,   119,    12,   118,    23,   110,   107,   108,
      13,    12,    12,   151,    28,    12,   116,    13,    13,    76,
      92,    93,    94,    24,    79,   150,    29,    74,    25,     1,
     117,   118,     2,   109,     3,    78,   123,    83,   122,    80,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   146,    30,    31,
       1,    15,    21,     2,    29,     3,    14,    81,    15,    15,
     144,   145,    15,    77,    88,    89,   141,   130,   131,   132,
     133,    57,   122,    32,    84,    85,    86,    87,   149,   111,
     155,   156,    33,    90,    91,    29,    30,    31,    71,    72,
     118,    73,   153,    29,   118,   118,   154,   166,   160,   161,
     118,   159,   169,   122,   163,   165,   118,   168,   171,   170,
     112,    32,   172,   157,   173,   113,   174,    30,    31,   143,
      33,   120,    29,   136,   137,    30,    31,   142,    29,    52,
      53,    54,    29,    55,   152,    56,    24,    52,    53,    54,
      57,    55,    32,    56,    25,    58,   128,   129,    57,   167,
      32,    33,    25,   115,    30,    31,   134,   135,    11,    33,
      30,    31,    26,    29,    30,    31,    52,    53,    54,    29,
      55,    29,    56,   158,   121,   124,   126,    57,   147,    32,
     125,    25,   148,    57,   127,    32,    20,     0,    33,    32,
     162,     0,     0,     0,    33,    30,    31,     0,    33,     0,
       0,    30,    31,    30,    31,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
      32,   164,     0,     0,     0,     0,    32,     0,    68,    33,
       0,     0,     0,     0,     0,    33,     0,    33,   105
};

static const yytype_int16 yycheck[] =
{
      15,    32,    30,    31,    24,    15,    21,    92,    93,    94,
      56,    59,     0,    61,     3,    59,    58,    52,    35,    36,
       9,     3,     3,    67,    61,     3,    61,     9,     9,    12,
       9,    10,    11,    57,    14,   120,     3,    68,    62,    37,
      58,    59,    40,    60,    42,    13,    77,    57,    76,    21,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,   113,    35,    36,
      37,    60,    61,    40,     3,    42,    58,    20,    60,    60,
     111,   112,    60,    66,    22,    23,   106,    84,    85,    86,
      87,    58,   120,    60,    16,    17,    18,    19,   118,    60,
     146,   147,    69,     7,     8,     3,    35,    36,    37,    38,
      59,    40,    61,     3,    59,    59,    61,    61,   153,   154,
      59,   152,    61,   151,   155,   156,    59,   162,    61,   164,
      60,    60,   167,   148,   169,    60,   171,    35,    36,    48,
      69,    61,     3,    90,    91,    35,    36,    61,     3,    47,
      48,    49,     3,    51,    60,    53,    57,    47,    48,    49,
      58,    51,    60,    53,    62,    63,    82,    83,    58,    50,
      60,    69,    62,    63,    35,    36,    88,    89,     5,    69,
      35,    36,    18,     3,    35,    36,    47,    48,    49,     3,
      51,     3,    53,   151,    76,    78,    80,    58,   113,    60,
      79,    62,   113,    58,    81,    60,    13,    -1,    69,    60,
      61,    -1,    -1,    -1,    69,    35,    36,    -1,    69,    -1,
      -1,    35,    36,    35,    36,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    60,    -1,    60,    69,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    69,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    40,    42,    72,    73,    74,   102,   103,   104,
       0,    74,     3,     9,    58,    60,   105,   106,   108,   109,
     109,    61,   108,    58,    57,    62,    76,   108,    61,     3,
      35,    36,    60,    69,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    99,
     100,   107,    47,    48,    49,    51,    53,    58,    63,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    60,    96,
      96,    37,    38,    40,    82,    98,    12,    66,    13,    14,
      21,    20,    15,    57,    16,    17,    18,    19,    22,    23,
       7,     8,     9,    10,    11,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    57,   101,    35,    36,    60,
      75,    60,    60,    60,    81,    63,    75,    58,    59,    61,
      61,    86,    96,    82,    87,    88,    89,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    83,    61,    48,    82,    82,    81,   102,   103,    83,
      95,    67,    60,    61,    61,    81,    81,   108,    84,    82,
      75,    75,    61,    82,    61,    82,    61,    50,    75,    61,
      75,    61,    75,    75,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     103,   104,   104,   104,   105,   106,   106,   107,   108,   108,
     109,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     2,     3,     1,     2,     5,     7,     5,     6,
       6,     7,     6,     7,     2,     1,     2,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     4,     1,     1,     2,     2,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       3,     1,     3
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
        case 2:
#line 87 "src/parser.y" /* yacc.c:1646  */
    { g_root = (const baseNode *)(yyvsp[0].node); }
#line 1472 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new TranslationUnit( {(yyvsp[0].node)} ); }
#line 1478 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node)->add((yyvsp[0].node));}
#line 1484 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].decl);}
#line 1490 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Function((yyvsp[-2].type), (yyvsp[-1].node), (yyvsp[0].compstat));}
#line 1496 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].compstat);}
#line 1502 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 103 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat);}
#line 1508 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 104 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat);}
#line 1514 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 105 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat);}
#line 1520 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 107 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].exprstat);}
#line 1526 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "src/parser.y" /* yacc.c:1646  */
    { (yyval.compstat) = new CompoundStatement();}
#line 1532 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "src/parser.y" /* yacc.c:1646  */
    { (yyval.compstat) = new CompoundStatement( new List({}), (yyvsp[-1].list)); }
#line 1538 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "src/parser.y" /* yacc.c:1646  */
    { (yyval.list) = new List({(yyvsp[0].stat)}); }
#line 1544 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "src/parser.y" /* yacc.c:1646  */
    { (yyval.list) -> add((yyvsp[0].stat)); }
#line 1550 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 120 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfElseStatement((yyvsp[-2].expr), (yyvsp[0].stat), new CompoundStatement());}
#line 1556 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfElseStatement((yyvsp[-4].expr), (yyvsp[-2].stat), (yyvsp[0].stat));}
#line 1562 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new WhileStatement((yyvsp[-2].expr), (yyvsp[0].stat));}
#line 1568 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 125 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new DoWhileStatement((yyvsp[-1].expr), (yyvsp[-4].stat));}
#line 1574 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 126 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new ExprExprFor((yyvsp[-3].exprstat), (yyvsp[-2].exprstat), (yyvsp[0].stat));}
#line 1580 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new ExprExprExprFor((yyvsp[-4].exprstat), (yyvsp[-3].exprstat), (yyvsp[-2].expr), (yyvsp[0].stat));}
#line 1586 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new DecExprFor((yyvsp[-3].decl), (yyvsp[-2].exprstat), (yyvsp[0].stat));}
#line 1592 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 129 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new DecExprExprFor((yyvsp[-4].decl),(yyvsp[-3].exprstat),(yyvsp[-2].expr),(yyvsp[0].stat));}
#line 1598 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 132 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stat) = new ReturnStatement((yyvsp[0].exprstat));}
#line 1604 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprstat) = new ExprStatement(new Expression_Null());}
#line 1610 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 142 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprstat) = new ExprStatement((yyvsp[-1].expr));}
#line 1616 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1622 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) -> add((yyvsp[0].expr)); }
#line 1628 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1634 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AssignmentExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1640 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1646 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 155 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new TernaryExpression((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1652 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1658 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1664 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 163 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1670 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 164 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1676 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1682 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1688 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 172 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1694 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 173 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1700 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1706 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1712 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1718 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1724 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1730 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 185 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1736 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1742 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 187 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1748 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1754 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 189 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1760 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1766 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 193 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1772 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1778 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 197 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1784 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1790 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 199 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1796 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 202 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1802 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1808 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1814 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryExpression((yyvsp[-2].expr), (yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1820 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 208 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new CastExpr((yyvsp[0].expr), (yyvsp[-2].str)); }
#line 1826 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 209 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1832 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1838 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 214 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PrefixExpr((yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1844 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 215 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PrefixExpr((yyvsp[0].expr), (yyvsp[-1].str)); }
#line 1850 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "src/parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1856 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 235 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new FunctionCall((yyvsp[-2].expr)); }
#line 1862 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 239 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PostfixExpr((yyvsp[-1].expr), (yyvsp[0].str)); }
#line 1868 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 240 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PostfixExpr((yyvsp[-1].expr), (yyvsp[0].str)); }
#line 1874 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 254 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1880 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 255 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new StringLiteral(*(yyvsp[0].str));}
#line 1886 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 256 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);}
#line 1892 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 259 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Variable((yyvsp[0].str));}
#line 1898 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 265 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1904 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 266 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1910 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 267 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1916 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1922 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1928 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 270 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1934 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 271 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1940 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 272 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1946 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 273 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1952 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1958 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "src/parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1964 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 285 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decl) = new Declaration((yyvsp[-1].type),( new List({}) ) ); }
#line 1970 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 286 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decl) = new Declaration((yyvsp[-2].type), (yyvsp[-1].list)); }
#line 1976 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 289 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type) ; }
#line 1982 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 295 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type) = new Type(0x2);}
#line 1988 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 297 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type) = new Type(0x1);}
#line 1994 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 300 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type) = new Type(0x4);}
#line 2000 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 306 "src/parser.y" /* yacc.c:1646  */
    { (yyval.list) = new DeclarationList({(yyvsp[0].node)}); }
#line 2006 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 310 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2012 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 311 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new InitDeclarator((yyvsp[-2].node),(yyvsp[0].expr)); if ((yyvsp[-2].node)->getPtr()){(yyval.node)->setPtr();} }
#line 2018 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 314 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2024 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 317 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2030 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 318 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); ((const Declarator *)(yyval.node)) -> setPtr();}
#line 2036 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 324 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2042 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 325 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new Variable((yyvsp[0].str));}
#line 2048 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 326 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2054 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2058 "src/parser.tab.cpp" /* yacc.c:1646  */
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
#line 343 "src/parser.y" /* yacc.c:1906  */


const baseNode *g_root; 

const baseNode *parseAST()
{
	g_root=0;
	yyparse();
	return g_root;
}
