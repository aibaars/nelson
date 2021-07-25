/* A Bison parser, made by GNU Bison 3.7.4.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"

// clang-format off
//=============================================================================
// Copyright (c) 2016-present Allan CORNET (Nelson)
//=============================================================================
// This file is part of the Nelson.
//=============================================================================
// LICENCE_BLOCK_BEGIN
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// Alternatively, you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program. If not, see <http://www.gnu.org/licenses/>.
// LICENCE_BLOCK_END
//=============================================================================
// clang-format off
//bison -L C -k -o NelSonParser.cpp NelSonParser.yxx
//=============================================================================
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "NelsonParserHelpers.hpp"
#include "AbstractSyntaxTree.hpp"
//=============================================================================
#define YYSTYPE ParseRHS
//=============================================================================
extern int yylex(void);
extern int yydebug;
//=============================================================================
namespace Nelson {
  void yyerror(const char *s) {
     return;
  }
}
//=============================================================================
using namespace Nelson;
//=============================================================================

#line 122 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    NUMERIC = 259,                 /* NUMERIC  */
    ENDQSTMNT = 260,               /* ENDQSTMNT  */
    ENDSTMNT = 261,                /* ENDSTMNT  */
    LE = 262,                      /* LE  */
    GE = 263,                      /* GE  */
    EQ = 264,                      /* EQ  */
    DOTTIMES = 265,                /* DOTTIMES  */
    DOTRDIV = 266,                 /* DOTRDIV  */
    DOTLDIV = 267,                 /* DOTLDIV  */
    DOTPOWER = 268,                /* DOTPOWER  */
    DOTTRANSPOSE = 269,            /* DOTTRANSPOSE  */
    CHARACTER = 270,               /* CHARACTER  */
    STRING = 271,                  /* STRING  */
    SPECIALCALL = 272,             /* SPECIALCALL  */
    END = 273,                     /* END  */
    IF = 274,                      /* IF  */
    FUNCTION = 275,                /* FUNCTION  */
    FOR = 276,                     /* FOR  */
    BREAK = 277,                   /* BREAK  */
    MAGICEND = 278,                /* MAGICEND  */
    WHILE = 279,                   /* WHILE  */
    ELSE = 280,                    /* ELSE  */
    ELSEIF = 281,                  /* ELSEIF  */
    SWITCH = 282,                  /* SWITCH  */
    CASE = 283,                    /* CASE  */
    OTHERWISE = 284,               /* OTHERWISE  */
    CONTINUE = 285,                /* CONTINUE  */
    TRY = 286,                     /* TRY  */
    CATCH = 287,                   /* CATCH  */
    FIELD = 288,                   /* FIELD  */
    REFLPAREN = 289,               /* REFLPAREN  */
    REFRPAREN = 290,               /* REFRPAREN  */
    KEYBOARD = 291,                /* KEYBOARD  */
    RETURN = 292,                  /* RETURN  */
    VARARGIN = 293,                /* VARARGIN  */
    VARARGOUT = 294,               /* VARARGOUT  */
    QUIT = 295,                    /* QUIT  */
    ABORT = 296,                   /* ABORT  */
    ENDFUNCTION = 297,             /* ENDFUNCTION  */
    SOR = 298,                     /* SOR  */
    SAND = 299,                    /* SAND  */
    NE = 300,                      /* NE  */
    POS = 301,                     /* POS  */
    NEG = 302,                     /* NEG  */
    NOT = 303                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_NUMERIC = 4,                    /* NUMERIC  */
  YYSYMBOL_ENDQSTMNT = 5,                  /* ENDQSTMNT  */
  YYSYMBOL_ENDSTMNT = 6,                   /* ENDSTMNT  */
  YYSYMBOL_LE = 7,                         /* LE  */
  YYSYMBOL_GE = 8,                         /* GE  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_DOTTIMES = 10,                  /* DOTTIMES  */
  YYSYMBOL_DOTRDIV = 11,                   /* DOTRDIV  */
  YYSYMBOL_DOTLDIV = 12,                   /* DOTLDIV  */
  YYSYMBOL_DOTPOWER = 13,                  /* DOTPOWER  */
  YYSYMBOL_DOTTRANSPOSE = 14,              /* DOTTRANSPOSE  */
  YYSYMBOL_CHARACTER = 15,                 /* CHARACTER  */
  YYSYMBOL_STRING = 16,                    /* STRING  */
  YYSYMBOL_SPECIALCALL = 17,               /* SPECIALCALL  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_FUNCTION = 20,                  /* FUNCTION  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_MAGICEND = 23,                  /* MAGICEND  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 26,                    /* ELSEIF  */
  YYSYMBOL_SWITCH = 27,                    /* SWITCH  */
  YYSYMBOL_CASE = 28,                      /* CASE  */
  YYSYMBOL_OTHERWISE = 29,                 /* OTHERWISE  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_TRY = 31,                       /* TRY  */
  YYSYMBOL_CATCH = 32,                     /* CATCH  */
  YYSYMBOL_FIELD = 33,                     /* FIELD  */
  YYSYMBOL_REFLPAREN = 34,                 /* REFLPAREN  */
  YYSYMBOL_REFRPAREN = 35,                 /* REFRPAREN  */
  YYSYMBOL_KEYBOARD = 36,                  /* KEYBOARD  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_VARARGIN = 38,                  /* VARARGIN  */
  YYSYMBOL_VARARGOUT = 39,                 /* VARARGOUT  */
  YYSYMBOL_QUIT = 40,                      /* QUIT  */
  YYSYMBOL_ABORT = 41,                     /* ABORT  */
  YYSYMBOL_ENDFUNCTION = 42,               /* ENDFUNCTION  */
  YYSYMBOL_SOR = 43,                       /* SOR  */
  YYSYMBOL_SAND = 44,                      /* SAND  */
  YYSYMBOL_45_ = 45,                       /* '|'  */
  YYSYMBOL_46_ = 46,                       /* '&'  */
  YYSYMBOL_47_ = 47,                       /* '<'  */
  YYSYMBOL_48_ = 48,                       /* '>'  */
  YYSYMBOL_NE = 49,                        /* NE  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '\\'  */
  YYSYMBOL_POS = 56,                       /* POS  */
  YYSYMBOL_NEG = 57,                       /* NEG  */
  YYSYMBOL_NOT = 58,                       /* NOT  */
  YYSYMBOL_59_ = 59,                       /* '^'  */
  YYSYMBOL_60_ = 60,                       /* '\''  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '='  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* ';'  */
  YYSYMBOL_68_ = 68,                       /* '{'  */
  YYSYMBOL_69_ = 69,                       /* '}'  */
  YYSYMBOL_70_ = 70,                       /* '~'  */
  YYSYMBOL_71_ = 71,                       /* '@'  */
  YYSYMBOL_72_ = 72,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_program = 74,                   /* program  */
  YYSYMBOL_functionDef = 75,               /* functionDef  */
  YYSYMBOL_functionDefList = 76,           /* functionDefList  */
  YYSYMBOL_returnDeclaration = 77,         /* returnDeclaration  */
  YYSYMBOL_argumentList = 78,              /* argumentList  */
  YYSYMBOL_argument = 79,                  /* argument  */
  YYSYMBOL_statementList = 80,             /* statementList  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_statementType = 82,             /* statementType  */
  YYSYMBOL_endfunctionStatement = 83,      /* endfunctionStatement  */
  YYSYMBOL_specialSyntaxStatement = 84,    /* specialSyntaxStatement  */
  YYSYMBOL_returnStatement = 85,           /* returnStatement  */
  YYSYMBOL_pauseStatement = 86,            /* pauseStatement  */
  YYSYMBOL_continueStatement = 87,         /* continueStatement  */
  YYSYMBOL_breakStatement = 88,            /* breakStatement  */
  YYSYMBOL_tryStatement = 89,              /* tryStatement  */
  YYSYMBOL_optionalCatch = 90,             /* optionalCatch  */
  YYSYMBOL_switchStatement = 91,           /* switchStatement  */
  YYSYMBOL_optionalEndStatement = 92,      /* optionalEndStatement  */
  YYSYMBOL_newLine = 93,                   /* newLine  */
  YYSYMBOL_caseBlock = 94,                 /* caseBlock  */
  YYSYMBOL_caseList = 95,                  /* caseList  */
  YYSYMBOL_caseStatement = 96,             /* caseStatement  */
  YYSYMBOL_otherwiseClause = 97,           /* otherwiseClause  */
  YYSYMBOL_forStatement = 98,              /* forStatement  */
  YYSYMBOL_forIndexExpression = 99,        /* forIndexExpression  */
  YYSYMBOL_whileStatement = 100,           /* whileStatement  */
  YYSYMBOL_ifStatement = 101,              /* ifStatement  */
  YYSYMBOL_conditionedStatement = 102,     /* conditionedStatement  */
  YYSYMBOL_elseIfBlock = 103,              /* elseIfBlock  */
  YYSYMBOL_elseIfStatementList = 104,      /* elseIfStatementList  */
  YYSYMBOL_elseIfStatement = 105,          /* elseIfStatement  */
  YYSYMBOL_elseStatement = 106,            /* elseStatement  */
  YYSYMBOL_assignmentStatement = 107,      /* assignmentStatement  */
  YYSYMBOL_multiFunctionCall = 108,        /* multiFunctionCall  */
  YYSYMBOL_expr = 109,                     /* expr  */
  YYSYMBOL_terminal = 110,                 /* terminal  */
  YYSYMBOL_symbRefList = 111,              /* symbRefList  */
  YYSYMBOL_symbRef = 112,                  /* symbRef  */
  YYSYMBOL_indexElement = 113,             /* indexElement  */
  YYSYMBOL_indexList = 114,                /* indexList  */
  YYSYMBOL_cellDef = 115,                  /* cellDef  */
  YYSYMBOL_matrixDef = 116,                /* matrixDef  */
  YYSYMBOL_rowSeparator = 117,             /* rowSeparator  */
  YYSYMBOL_columnSep = 118,                /* columnSep  */
  YYSYMBOL_rowDef = 119                    /* rowDef  */
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
#define YYLAST   3169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
       2,     2,     2,     2,     2,     2,     2,     2,    46,    60,
      61,    62,    53,    51,    66,    52,    72,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    67,
      47,    63,    48,     2,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,    55,    65,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    45,    69,    70,     2,     2,     2,
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
      49,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    84,    84,    85,    89,    96,   104,   112,
     121,   129,   138,   139,   141,   142,   143,   144,   146,   147,
     151,   152,   156,   157,   158,   159,   160,   161,   162,   163,
     167,   168,   172,   176,   177,   181,   185,   189,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   216,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   231,   235,   239,   242,
     246,   252,   257,   261,   262,   266,   272,   278,   278,   278,
     278,   282,   282,   287,   287,   291,   294,   300,   306,   309,
     315,   318,   323,   328,   329,   330,   332,   333,   334,   335,
     336,   337,   341,   344,   349,   350,   355,   361,   362,   366,
     369,   373,   374,   378,   381,   387,   390,   393,   396,   397,
     401,   402,   406,   409,   413,   417,   421,   422,   423,   424,
     425,   426,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   507,   508,   511,   512,   513,   514,
     515,   516,   517,   520,   521,   522,   523,   524,   525,   529,
     530,   534,   535,   539,   540,   544,   544,   548,   552,   553
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "NUMERIC",
  "ENDQSTMNT", "ENDSTMNT", "LE", "GE", "EQ", "DOTTIMES", "DOTRDIV",
  "DOTLDIV", "DOTPOWER", "DOTTRANSPOSE", "CHARACTER", "STRING",
  "SPECIALCALL", "END", "IF", "FUNCTION", "FOR", "BREAK", "MAGICEND",
  "WHILE", "ELSE", "ELSEIF", "SWITCH", "CASE", "OTHERWISE", "CONTINUE",
  "TRY", "CATCH", "FIELD", "REFLPAREN", "REFRPAREN", "KEYBOARD", "RETURN",
  "VARARGIN", "VARARGOUT", "QUIT", "ABORT", "ENDFUNCTION", "SOR", "SAND",
  "'|'", "'&'", "'<'", "'>'", "NE", "':'", "'+'", "'-'", "'*'", "'/'",
  "'\\\\'", "POS", "NEG", "NOT", "'^'", "'\\''", "'('", "')'", "'='",
  "'['", "']'", "','", "';'", "'{'", "'}'", "'~'", "'@'", "'.'", "$accept",
  "program", "functionDef", "functionDefList", "returnDeclaration",
  "argumentList", "argument", "statementList", "statement",
  "statementType", "endfunctionStatement", "specialSyntaxStatement",
  "returnStatement", "pauseStatement", "continueStatement",
  "breakStatement", "tryStatement", "optionalCatch", "switchStatement",
  "optionalEndStatement", "newLine", "caseBlock", "caseList",
  "caseStatement", "otherwiseClause", "forStatement", "forIndexExpression",
  "whileStatement", "ifStatement", "conditionedStatement", "elseIfBlock",
  "elseIfStatementList", "elseIfStatement", "elseStatement",
  "assignmentStatement", "multiFunctionCall", "expr", "terminal",
  "symbRefList", "symbRef", "indexElement", "indexList", "cellDef",
  "matrixDef", "rowSeparator", "columnSep", "rowDef", YY_NULLPTR
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
     295,   296,   297,   298,   299,   124,    38,    60,    62,   300,
      58,    43,    45,    42,    47,    92,   301,   302,   303,    94,
      39,    40,    41,    61,    91,    93,    44,    59,   123,   125,
     126,    64,    46
};
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-126)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     349,  -132,   270,  -132,     3,    24,   219,   139,   170,  -132,
    -132,  1446,  2713,  -132,  2518,  -132,  -132,  -132,  -132,  -132,
    2713,  2713,  1473,  1312,  1342,  1505,    12,    74,  -132,    21,
     762,  -132,    40,  -132,   344,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  2963,  -132,    -2,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  1312,
      51,  2781,    -5,  -132,    38,   -16,    26,    61,  -132,    27,
     208,   179,  -132,  2806,  2806,  1034,   130,   130,  -132,  2867,
    -132,  -132,  -132,  -132,  2963,   194,  2713,    72,  -132,  -132,
      14,  2713,    72,  -132,   130,  -132,     7,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  1532,  1564,  1591,
    1623,  1650,  1682,  1709,  -132,  1741,  1768,  1800,  1827,  1859,
    1886,  1918,  1945,  1977,  2004,  2036,  2063,  2095,  2122,  -132,
      34,  2154,   144,   146,  -132,   211,  2181,   143,    51,  -132,
    -132,  -132,  -132,  -132,  -132,  2518,   218,  -132,  -132,   185,
    -132,  2518,  -132,  -132,  -132,   117,    16,  -132,  -132,   248,
    2213,  -132,    15,  2400,  2459,   154,  2577,    35,  -132,  -132,
     120,  2607,   296,  -132,  2713,  -132,  2628,    46,  2713,    68,
    -132,  2672,  -132,  2672,  -132,  2672,  -132,   130,  -132,   130,
    -132,   130,  -132,   130,  -132,  3017,  -132,  3033,  -132,  3087,
    -132,  3101,  -132,  2672,  -132,  2672,  -132,  2672,  -132,  2832,
    -132,  3109,  -132,  3109,  -132,   130,  -132,   130,  -132,   130,
    -132,   130,  -132,   291,  -132,  2963,  -132,    31,  -132,  2963,
       2,  -132,  2713,  -132,  -132,  -132,   975,    47,  -132,  2341,
    -132,    28,    84,   408,  -132,  -132,    99,   207,  -132,   203,
    2518,  -132,  2963,  -132,  2240,  -132,   833,  -132,   904,  2713,
     184,   154,  -132,   378,  1093,  -132,  -132,   295,  -132,    72,
    -132,  2650,  2963,  -132,    72,  -132,  2690,  2963,  2713,  -132,
     174,  -132,  -132,   144,  -132,  -132,  2943,  -132,  1152,  -132,
    -132,  2518,   223,  -132,  -132,  -132,  -132,    28,   131,   467,
    -132,  2887,  -132,  -132,  -132,  -132,  2806,  2518,   173,  -132,
    2518,  -132,   164,  -132,  -132,  2963,  2272,  -132,  -132,   526,
    -132,  2518,  2518,   261,  -132,  -132,  2518,  1211,  -132,  -132,
    1270,  -132,  1384,  1414,  -132,  2963,   585,   644,  -132,  2518,
    2341,  -132,  -132,    41,  -132,    10,   703,  -132,  -132,  -132,
    -132
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,   204,   184,   185,   186,     0,     0,     0,    69,
     187,     0,     0,    68,    40,    67,    66,    52,    53,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     3,
      40,    33,     0,    54,    51,    50,    49,    44,    43,    48,
      47,    42,    45,    46,    38,    41,    39,   134,   191,    61,
      56,    60,    59,    58,    57,   107,   204,   185,   186,     0,
     111,     0,   191,    12,     0,     0,     0,     0,   101,    95,
       0,     0,   104,     0,     0,    40,   172,   171,   183,     0,
     193,   226,   225,   197,   228,     0,     0,   223,   203,   202,
       0,     0,   221,   174,   173,   188,     0,     1,    21,    34,
      35,    36,    37,    64,    65,    63,    62,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,   205,     0,     0,   118,   112,   113,
     110,    79,    78,    77,    80,    40,    13,    82,    81,     0,
      23,    40,    22,    27,    32,     0,     0,    30,    16,     0,
       0,    99,     0,    40,    40,    83,    40,     0,   182,   181,
     192,     0,     0,   227,     0,   198,     0,     0,     0,     0,
     156,   155,   160,   159,   162,   161,   166,   165,   168,   167,
     170,   169,   178,   177,   150,   149,   152,   151,   146,   145,
     148,   147,   154,   153,   158,   157,   164,   163,   133,   132,
     136,   135,   138,   137,   140,   139,   142,   141,   144,   143,
     176,   175,   214,     0,   207,   213,   219,     0,   121,   120,
       0,   211,     0,   192,   116,   115,     0,     0,   114,   109,
      14,     0,     0,    40,    25,    28,     0,     0,    17,     0,
      40,   100,    94,    98,     0,    90,     0,   102,     0,     0,
      89,    84,    85,   204,    40,    71,    70,     0,   195,   224,
     194,     0,   229,   200,   222,   199,     0,   190,     0,   218,
     217,   208,   206,     0,   210,   209,     0,   119,    40,   108,
     106,    40,     0,    29,    24,    31,    18,     0,     0,    40,
      97,     0,    92,    91,   105,   103,     0,    40,     0,    86,
      40,   131,     0,   196,   201,   189,     0,   220,   212,    40,
      15,    40,    40,     0,    96,    93,    40,    40,    76,    75,
      40,   130,     0,     0,   216,   215,    40,    40,    19,    40,
      87,   128,   122,     0,   129,     0,    40,   127,   123,   126,
     124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,   198,  -132,  -132,   -94,    -9,   -10,     5,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   -65,
    -105,  -132,  -132,    17,  -132,  -132,  -132,  -132,  -132,   115,
    -132,  -132,   137,  -132,  -132,  -132,     1,  -132,     0,  -132,
     -15,  -131,   191,   -28,     4,  -132,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    67,   156,   157,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   167,    40,   145,
     151,   260,   261,   262,   308,    41,    71,    42,    43,    60,
     137,   138,   139,   237,    44,    45,    46,    47,    62,   134,
     226,   227,    90,    85,    86,   174,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   230,   179,   284,    75,    92,   163,    61,   164,   165,
     154,   349,    73,    74,    48,    95,   253,   245,    53,    81,
      82,    76,    77,    79,    84,    84,    94,   153,    91,   154,
      48,   135,   281,   147,   148,    99,   265,    56,     3,   146,
      54,     7,   347,   147,   148,   100,   101,   152,   289,    57,
      58,    81,    82,   266,   250,   242,   130,    10,   172,   130,
      84,   131,   158,   132,   159,   290,   132,   133,   283,   178,
     133,   285,    92,    96,    97,    48,   283,   136,   254,   350,
      99,   246,   247,   175,   222,    20,    21,    84,   223,   171,
     160,   155,    84,   282,   176,    22,   224,   283,    59,   149,
     293,   150,    24,   348,    25,    26,   102,   283,   181,   183,
     185,   187,   189,   191,   193,   275,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   221,
     278,   225,   229,   225,   247,   239,   291,    61,   173,   171,
      63,   243,    64,   113,   114,    48,   292,    56,     3,   231,
     247,    48,   269,   256,   258,   298,   264,   274,   310,    57,
      58,   252,   294,    48,    48,   331,    48,    10,   236,  -125,
    -125,    68,    84,    69,   328,   272,   271,    84,    65,   277,
     244,   276,   259,   267,   141,   142,   240,   321,   154,   128,
     129,   329,   322,   323,   222,    20,    21,   247,   223,    81,
      82,   343,   345,    66,   296,    22,   154,   232,    59,   161,
     154,   162,    24,   307,    25,    26,    81,    82,   339,   -26,
      55,   -26,    56,     3,   320,   332,   288,    98,   147,   148,
    -125,    70,   333,   286,    57,    58,    48,   316,   295,    48,
     299,   326,    10,    48,    99,   143,   144,   241,    99,   248,
      48,   235,   269,   147,   148,   301,    48,   274,    48,   170,
     306,    99,   338,    99,    48,   297,   147,   148,   317,    99,
      20,    21,    84,    49,    50,   238,   233,    84,   309,   315,
      22,   319,   177,    59,   225,    51,    52,    24,    48,    25,
      26,    48,   279,    99,   280,     0,   311,   327,   312,    48,
     330,    81,    82,     0,    99,     0,     0,    48,     0,   249,
      48,   336,   337,     0,     0,     0,   340,   335,     0,    48,
       0,    48,    48,     0,    99,     0,    48,    48,     0,   346,
      48,     0,    99,   225,   225,    99,    48,    48,     0,    48,
      48,    99,    99,     0,     0,    99,    48,   103,   104,    -4,
       1,    99,     2,     3,   -40,   -40,     0,     0,     0,   105,
     106,   270,     0,     0,     4,     5,     0,     0,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,    13,
      14,    49,    50,   147,   148,    15,    16,     0,     0,    17,
      18,    19,     0,    51,    52,     0,     0,     0,     0,     0,
      20,    21,     0,     0,     0,     0,     0,     0,    -9,     0,
      22,     2,     3,    23,     0,   -40,     0,    24,     0,    25,
      26,     0,     0,     4,     5,     0,     0,     6,    -9,     8,
       9,    10,    11,     0,     0,    12,     0,     0,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,    -8,     0,    22,
       2,     3,    23,     0,     0,     0,    24,     0,    25,    26,
       0,     0,     4,     5,     0,     0,     6,    -8,     8,     9,
      10,    11,     0,     0,    12,     0,     0,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
       0,     0,     0,     0,     0,     0,   -11,     0,    22,     2,
       3,    23,     0,     0,     0,    24,     0,    25,    26,     0,
       0,     4,     5,     0,     0,     6,   -11,     8,     9,    10,
      11,     0,     0,    12,     0,     0,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,     0,     0,     0,    -7,     0,    22,     2,     3,
      23,     0,     0,     0,    24,     0,    25,    26,     0,     0,
       4,     5,     0,     0,     6,    -7,     8,     9,    10,    11,
       0,     0,    12,     0,     0,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,     0,   -10,     0,    22,     2,     3,    23,
       0,     0,     0,    24,     0,    25,    26,     0,     0,     4,
       5,     0,     0,     6,   -10,     8,     9,    10,    11,     0,
       0,    12,     0,     0,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,     0,     0,     0,
       0,     0,     0,    -6,     0,    22,     2,     3,    23,     0,
       0,     0,    24,     0,    25,    26,     0,     0,     4,     5,
       0,     0,     6,    -6,     8,     9,    10,    11,     0,     0,
      12,     0,     0,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,    -2,     0,    22,     2,     3,    23,     0,     0,
       0,    24,     0,    25,    26,     0,     0,     4,     5,     0,
       0,     6,     0,     8,     9,    10,    11,     0,     0,    12,
       0,     0,    13,    14,     0,     0,     0,     0,    15,    16,
       0,     0,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    23,     0,     0,     0,
      24,     0,    25,    26,   302,     0,     2,     3,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       0,   303,     6,     0,     8,     9,    10,    11,     0,     0,
      12,     0,     0,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,    23,     0,   -40,
       0,    24,     0,    25,    26,   304,     0,     2,     3,   -40,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,   305,     6,     0,     8,     9,    10,    11,     0,
       0,    12,     0,     0,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,    23,     0,
     -40,     0,    24,     0,    25,    26,   287,     0,     2,     3,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     6,     0,     8,     9,    10,    11,
       0,     0,    12,     0,     0,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,     0,     0,   -74,    22,     2,     3,    23,
       0,   -40,     0,    24,     0,    25,    26,     0,     0,     4,
       5,     0,   -74,     6,     0,     8,     9,    10,    11,     0,
       0,    12,     0,     0,    13,    14,   166,     0,     0,     0,
      15,    16,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,     0,     0,     0,
       0,     0,     0,     0,   -73,    22,     2,     3,    23,     0,
       0,     0,    24,     0,    25,    26,     0,     0,     4,     5,
       0,   -73,     6,     0,     8,     9,    10,    11,     0,     0,
      12,     0,     0,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,  -117,    22,     2,     3,    23,     0,     0,
       0,    24,     0,    25,    26,     0,     0,     4,     5,     0,
    -117,     6,     0,     8,     9,    10,    11,     0,     0,    12,
       0,     0,    13,    14,     0,     0,     0,     0,    15,    16,
       0,     0,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,   -88,    22,     2,     3,    23,     0,     0,     0,
      24,     0,    25,    26,     0,     0,     4,     5,     0,   -88,
       6,     0,     8,     9,    10,    11,     0,     0,    12,     0,
       0,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,     0,     0,     0,
       0,   -72,    22,     2,     3,    23,     0,     0,     0,    24,
       0,    25,    26,     0,     0,     4,     5,     0,   -72,     6,
       0,     8,     9,    10,    11,     0,     0,    12,     0,     0,
      13,    14,     0,     0,     0,     0,    15,    16,     0,     0,
      17,    18,    19,    80,     0,    56,     3,    81,    82,     0,
       0,    20,    21,     0,     0,     0,     0,    57,    58,     0,
       0,    22,     0,     0,    23,    10,     0,     0,    24,     0,
      25,    26,     0,    88,     0,    56,     3,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     0,
       0,     0,     0,    20,    21,    10,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    59,    83,     0,     0,
      24,     0,    25,    26,     0,   341,     0,    56,     3,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,    57,
      58,     0,     0,    22,     0,     0,    59,    10,     0,     0,
      24,    89,    25,    26,     0,   344,     0,    56,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,     0,     0,     0,   222,    20,    21,    10,   223,     0,
       0,     0,     0,     0,     0,    22,   342,    72,    59,    56,
       3,     0,    24,     0,    25,    26,     0,     0,     0,     0,
       0,    57,    58,     0,   222,    20,    21,     0,   223,    10,
       0,     0,     0,     0,    78,    22,    56,     3,    59,     0,
       0,     0,    24,     0,    25,    26,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,    10,    20,    21,     0,
       0,     0,     0,     0,     0,     0,    93,    22,    56,     3,
      59,     0,     0,     0,    24,     0,    25,    26,     0,     0,
      57,    58,     0,     0,    20,    21,     0,     0,    10,     0,
       0,     0,     0,   180,    22,    56,     3,    59,     0,     0,
       0,    24,     0,    25,    26,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    10,    20,    21,     0,     0,
       0,     0,     0,     0,     0,   182,    22,    56,     3,    59,
       0,     0,     0,    24,     0,    25,    26,     0,     0,    57,
      58,     0,     0,    20,    21,     0,     0,    10,     0,     0,
       0,     0,   184,    22,    56,     3,    59,     0,     0,     0,
      24,     0,    25,    26,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,    10,    20,    21,     0,     0,     0,
       0,     0,     0,     0,   186,    22,    56,     3,    59,     0,
       0,     0,    24,     0,    25,    26,     0,     0,    57,    58,
       0,     0,    20,    21,     0,     0,    10,     0,     0,     0,
       0,   188,    22,    56,     3,    59,     0,     0,     0,    24,
       0,    25,    26,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    10,    20,    21,     0,     0,     0,     0,
       0,     0,     0,   190,    22,    56,     3,    59,     0,     0,
       0,    24,     0,    25,    26,     0,     0,    57,    58,     0,
       0,    20,    21,     0,     0,    10,     0,     0,     0,     0,
     192,    22,    56,     3,    59,     0,     0,     0,    24,     0,
      25,    26,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,    10,    20,    21,     0,     0,     0,     0,     0,
       0,     0,   194,    22,    56,     3,    59,     0,     0,     0,
      24,     0,    25,    26,     0,     0,    57,    58,     0,     0,
      20,    21,     0,     0,    10,     0,     0,     0,     0,   196,
      22,    56,     3,    59,     0,     0,     0,    24,     0,    25,
      26,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    10,    20,    21,     0,     0,     0,     0,     0,     0,
       0,   198,    22,    56,     3,    59,     0,     0,     0,    24,
       0,    25,    26,     0,     0,    57,    58,     0,     0,    20,
      21,     0,     0,    10,     0,     0,     0,     0,   200,    22,
      56,     3,    59,     0,     0,     0,    24,     0,    25,    26,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      10,    20,    21,     0,     0,     0,     0,     0,     0,     0,
     202,    22,    56,     3,    59,     0,     0,     0,    24,     0,
      25,    26,     0,     0,    57,    58,     0,     0,    20,    21,
       0,     0,    10,     0,     0,     0,     0,   204,    22,    56,
       3,    59,     0,     0,     0,    24,     0,    25,    26,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    10,
      20,    21,     0,     0,     0,     0,     0,     0,     0,   206,
      22,    56,     3,    59,     0,     0,     0,    24,     0,    25,
      26,     0,     0,    57,    58,     0,     0,    20,    21,     0,
       0,    10,     0,     0,     0,     0,   208,    22,    56,     3,
      59,     0,     0,     0,    24,     0,    25,    26,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    10,    20,
      21,     0,     0,     0,     0,     0,     0,     0,   210,    22,
      56,     3,    59,     0,     0,     0,    24,     0,    25,    26,
       0,     0,    57,    58,     0,     0,    20,    21,     0,     0,
      10,     0,     0,     0,     0,   212,    22,    56,     3,    59,
       0,     0,     0,    24,     0,    25,    26,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    10,    20,    21,
       0,     0,     0,     0,     0,     0,     0,   214,    22,    56,
       3,    59,     0,     0,     0,    24,     0,    25,    26,     0,
       0,    57,    58,     0,     0,    20,    21,     0,     0,    10,
       0,     0,     0,     0,   216,    22,    56,     3,    59,     0,
       0,     0,    24,     0,    25,    26,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,    10,    20,    21,     0,
       0,     0,     0,     0,     0,     0,   218,    22,    56,     3,
      59,     0,     0,     0,    24,     0,    25,    26,     0,     0,
      57,    58,     0,     0,    20,    21,     0,     0,    10,     0,
       0,     0,     0,   220,    22,    56,     3,    59,     0,     0,
       0,    24,     0,    25,    26,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    10,    20,    21,     0,     0,
       0,     0,     0,     0,     0,   228,    22,    56,     3,    59,
       0,     0,     0,    24,     0,    25,    26,     0,     0,    57,
      58,     0,     0,    20,    21,     0,     0,    10,     0,     0,
       0,     0,   234,    22,    56,     3,    59,     0,     0,     0,
      24,     0,    25,    26,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,    10,    20,    21,     0,     0,     0,
       0,     0,     0,     0,   251,    22,    56,     3,    59,     0,
       0,     0,    24,     0,    25,    26,     0,     0,    57,    58,
       0,     0,    20,    21,     0,     0,    10,     0,     0,     0,
       0,   300,    22,    56,     3,    59,     0,     0,     0,    24,
       0,    25,    26,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    10,    20,    21,     0,     0,     0,     0,
       0,     0,     0,   334,    22,    56,     3,    59,     0,     0,
       0,    24,     0,    25,    26,     0,     0,    57,    58,     0,
       0,    20,    21,     0,     0,    10,     0,     0,     0,     0,
       0,    22,     0,     0,    59,     0,     0,     0,    24,     0,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    59,     0,     0,     0,
      24,     0,    25,    26,     2,     3,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     0,     0,
       6,     0,     8,     9,    10,    11,     0,     0,    12,     0,
       0,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     2,     3,    23,     0,   -40,     0,    24,
       0,    25,    26,     0,     0,     4,     5,     0,   255,     6,
       0,     8,     9,    10,    11,     0,     0,    12,     0,     0,
      13,    14,     0,     0,     0,     0,    15,    16,     0,     0,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     2,     3,    23,     0,     0,     0,    24,     0,
      25,    26,     0,     0,     4,     5,     0,   257,     6,     0,
       8,     9,    10,    11,     0,     0,    12,     0,     0,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     2,     3,    23,     0,     0,     0,    24,     0,    25,
      26,     0,     0,     4,     5,     0,     0,     6,     0,     8,
       9,    10,    11,     0,     0,    12,     0,     0,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    22,
     263,     3,    23,     0,     0,     0,    24,     0,    25,    26,
       0,     0,     4,     5,     0,     0,     6,     0,     8,     9,
      10,    11,     0,     0,    12,     0,     0,    13,    14,     0,
      56,     3,     0,    15,    16,     0,     0,    17,    18,    19,
       0,     0,    57,    58,     0,     0,     0,     0,    20,    21,
      10,    56,     3,     0,     0,     0,     0,     0,    22,     0,
       0,    23,     0,    57,    58,    24,     0,    25,    26,     0,
       0,    10,     0,    56,     3,     0,     0,     0,    20,    21,
       0,     0,     0,     0,     0,    57,    58,     0,    22,     0,
       0,    59,   268,    10,     0,    24,     0,    25,    26,    20,
      21,     0,   110,   111,   112,   113,   114,     0,     0,    22,
       0,     0,    59,    56,     3,     0,    24,   273,    25,    26,
       0,    20,    21,     0,     0,    57,    58,     0,     0,     0,
       0,    22,     0,    10,    59,   313,    56,     3,    24,     0,
      25,    26,   122,   123,   124,   125,   126,   127,    57,    58,
       0,   128,   129,     0,     0,     0,    10,     0,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,    59,     0,     0,     0,    24,   314,
      25,    26,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,    59,     0,     0,
       0,    24,   140,    25,    26,     0,   141,   142,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
     128,   129,   110,   111,   112,   113,   114,   143,   144,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,   128,   129,     0,   168,     0,
       0,     0,   143,   144,   107,   108,   109,   110,   111,   112,
     113,   114,     0,   123,   124,   125,   126,   127,   324,     0,
       0,   128,   129,     0,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,   128,   129,     0,   169,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,   128,   129,     0,   325,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   128,   129,     0,   318,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   128,   129,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,   128,   129,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   128,   129,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,   110,
     111,   112,   113,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,   128,   129,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
     128,   129,   125,   126,   127,     0,     0,     0,   128,   129
};

static const yytype_int16 yycheck[] =
{
       0,   132,    96,     1,    14,    24,    71,     6,    73,    74,
       3,     1,    11,    12,    14,     3,     1,     1,    15,     5,
       6,    20,    21,    22,    23,    24,    25,     1,    24,     3,
      30,    59,     1,     5,     6,    30,     1,     3,     4,     1,
      16,    20,     1,     5,     6,     5,     6,    63,     1,    15,
      16,     5,     6,    18,   159,   149,    61,    23,    86,    61,
      59,    63,     1,    68,     3,    18,    68,    72,    66,    62,
      72,    69,    91,    61,     0,    75,    66,    26,    63,    69,
      75,    65,    66,    69,    50,    51,    52,    86,    54,    85,
      63,    65,    91,    62,    90,    61,    62,    66,    64,    61,
       1,    63,    68,    62,    70,    71,    66,    66,   107,   108,
     109,   110,   111,   112,   113,    69,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      62,   130,   131,   132,    66,   145,   241,   136,    66,   135,
       1,   151,     3,    13,    14,   145,    62,     3,     4,     3,
      66,   151,   171,   163,   164,   249,   166,   176,   263,    15,
      16,   160,    63,   163,   164,     1,   166,    23,    25,     5,
       6,     1,   171,     3,     1,   174,   172,   176,    39,   178,
      63,   177,    28,    63,     5,     6,     1,   292,     3,    59,
      60,    18,   297,    62,    50,    51,    52,    66,    54,     5,
       6,   332,   333,    64,     1,    61,     3,    61,    64,     1,
       3,     3,    68,    29,    70,    71,     5,     6,   323,     1,
       1,     3,     3,     4,     1,    61,   236,    29,     5,     6,
      66,    61,    68,   232,    15,    16,   236,    63,   247,   239,
     250,   306,    23,   243,   239,    66,    67,    62,   243,     1,
     250,   136,   271,     5,     6,   254,   256,   276,   258,    65,
     259,   256,     1,   258,   264,    62,     5,     6,   283,   264,
      51,    52,   271,     3,     4,   138,    65,   276,   261,   278,
      61,   291,    91,    64,   283,    15,    16,    68,   288,    70,
      71,   291,     1,   288,     3,    -1,     1,   307,     3,   299,
     310,     5,     6,    -1,   299,    -1,    -1,   307,    -1,    61,
     310,   321,   322,    -1,    -1,    -1,   326,   316,    -1,   319,
      -1,   321,   322,    -1,   319,    -1,   326,   327,    -1,   339,
     330,    -1,   327,   332,   333,   330,   336,   337,    -1,   339,
     340,   336,   337,    -1,    -1,   340,   346,     3,     4,     0,
       1,   346,     3,     4,     5,     6,    -1,    -1,    -1,    15,
      16,    65,    -1,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    -1,    30,
      31,     3,     4,     5,     6,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      61,     3,     4,    64,    -1,    66,    -1,    68,    -1,    70,
      71,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    61,
       3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    61,     3,
       4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,     0,    -1,    61,     3,     4,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    61,     3,     4,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,     0,    -1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      -1,    68,    -1,    70,    71,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,
      66,    -1,    68,    -1,    70,    71,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,
      -1,    66,    -1,    68,    -1,    70,    71,    -1,    -1,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,    18,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      40,    41,    42,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    61,    -1,    -1,    64,    23,    -1,    -1,    68,    -1,
      70,    71,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    51,    52,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    61,    -1,    -1,    64,    23,    -1,    -1,
      68,    69,    70,    71,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    50,    51,    52,    23,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,     1,    64,     3,
       4,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    50,    51,    52,    -1,    54,    23,
      -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    61,     3,     4,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      15,    16,    -1,    -1,    51,    52,    -1,    -1,    23,    -1,
      -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,
      16,    -1,    -1,    51,    52,    -1,    -1,    23,    -1,    -1,
      -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    -1,    51,    52,    -1,    -1,    23,    -1,    -1,    -1,
      -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      -1,    51,    52,    -1,    -1,    23,    -1,    -1,    -1,    -1,
       1,    61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,
      51,    52,    -1,    -1,    23,    -1,    -1,    -1,    -1,     1,
      61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,    51,
      52,    -1,    -1,    23,    -1,    -1,    -1,    -1,     1,    61,
       3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    15,    16,    -1,    -1,    51,    52,
      -1,    -1,    23,    -1,    -1,    -1,    -1,     1,    61,     3,
       4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    15,    16,    -1,    -1,    51,    52,    -1,
      -1,    23,    -1,    -1,    -1,    -1,     1,    61,     3,     4,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    61,
       3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    15,    16,    -1,    -1,    51,    52,    -1,    -1,
      23,    -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    61,     3,
       4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    15,    16,    -1,    -1,    51,    52,    -1,    -1,    23,
      -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    61,     3,     4,
      64,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,
      15,    16,    -1,    -1,    51,    52,    -1,    -1,    23,    -1,
      -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,
      -1,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,
      16,    -1,    -1,    51,    52,    -1,    -1,    23,    -1,    -1,
      -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,
      -1,    -1,    51,    52,    -1,    -1,    23,    -1,    -1,    -1,
      -1,     1,    61,     3,     4,    64,    -1,    -1,    -1,    68,
      -1,    70,    71,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    61,     3,     4,    64,    -1,    -1,
      -1,    68,    -1,    70,    71,    -1,    -1,    15,    16,    -1,
      -1,    51,    52,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    70,    71,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,     3,     4,    64,    -1,    66,    -1,    68,
      -1,    70,    71,    -1,    -1,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,     3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    15,    16,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
       3,     4,    64,    -1,    -1,    -1,    68,    -1,    70,    71,
      -1,    -1,    15,    16,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
       3,     4,    -1,    36,    37,    -1,    -1,    40,    41,    42,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    51,    52,
      23,     3,     4,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    15,    16,    68,    -1,    70,    71,    -1,
      -1,    23,    -1,     3,     4,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    61,    -1,
      -1,    64,    65,    23,    -1,    68,    -1,    70,    71,    51,
      52,    -1,    10,    11,    12,    13,    14,    -1,    -1,    61,
      -1,    -1,    64,     3,     4,    -1,    68,    69,    70,    71,
      -1,    51,    52,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    61,    -1,    23,    64,    65,     3,     4,    68,    -1,
      70,    71,    50,    51,    52,    53,    54,    55,    15,    16,
      -1,    59,    60,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,
      -1,    68,     1,    70,    71,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    10,    11,    12,    13,    14,    66,    67,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    59,    60,    -1,     1,    -1,
      -1,    -1,    66,    67,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    51,    52,    53,    54,    55,     1,    -1,
      -1,    59,    60,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    -1,    62,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    -1,    62,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,    -1,    62,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    53,    54,    55,    -1,    -1,    -1,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,    15,    16,    19,    20,    21,    22,
      23,    24,    27,    30,    31,    36,    37,    40,    41,    42,
      51,    52,    61,    64,    68,    70,    71,    74,    75,    76,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      91,    98,   100,   101,   107,   108,   109,   110,   111,     3,
       4,    15,    16,    15,    16,     1,     3,    15,    16,    64,
     102,   109,   111,     1,     3,    39,    64,    77,     1,     3,
      61,    99,     1,   109,   109,    80,   109,   109,     1,   109,
       1,     5,     6,    65,   109,   116,   117,   119,     1,    69,
     115,   117,   119,     1,   109,     3,    61,     0,    75,    81,
       5,     6,    66,     3,     4,    15,    16,     7,     8,     9,
      10,    11,    12,    13,    14,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    59,    60,
      61,    63,    68,    72,   112,   116,    26,   103,   104,   105,
       1,     5,     6,    66,    67,    92,     1,     5,     6,    61,
      63,    93,    63,     1,     3,    65,    78,    79,     1,     3,
      63,     1,     3,    92,    92,    92,    32,    90,     1,    62,
      65,   117,   116,    66,   118,    69,   117,   115,    62,    78,
       1,   109,     1,   109,     1,   109,     1,   109,     1,   109,
       1,   109,     1,   109,     1,   109,     1,   109,     1,   109,
       1,   109,     1,   109,     1,   109,     1,   109,     1,   109,
       1,   109,     1,   109,     1,   109,     1,   109,     1,   109,
       1,   109,    50,    54,    62,   109,   113,   114,     1,   109,
     114,     3,    61,    65,     1,   102,    25,   106,   105,    80,
       1,    62,    78,    80,    63,     1,    65,    66,     1,    61,
      93,     1,   109,     1,    63,    18,    80,    18,    80,    28,
      94,    95,    96,     3,    80,     1,    18,    63,    65,   119,
      65,   117,   109,    69,   119,    69,   117,   109,    62,     1,
       3,     1,    62,    66,     1,    69,   109,     1,    80,     1,
      18,    93,    62,     1,    63,    79,     1,    62,    78,    80,
       1,   109,     1,    18,     1,    18,   109,    29,    97,    96,
      93,     1,     3,    65,    69,   109,    63,   113,    62,    80,
       1,    93,    93,    62,     1,    62,    92,    80,     1,    18,
      80,     1,    61,    68,     1,   109,    80,    80,     1,    93,
      80,     1,    62,   114,     1,   114,    80,     1,    62,     1,
      69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    87,    88,
      89,    89,    90,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    97,    97,
      98,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     8,     7,     5,     4,
       7,     6,     2,     3,     4,     6,     3,     4,     5,     7,
       1,     2,     2,     2,     4,     3,     2,     2,     3,     4,
       1,     3,     1,     1,     2,     2,     2,     2,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       4,     4,     4,     2,     0,     6,     6,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     4,     2,     0,
       4,     5,     5,     5,     3,     1,     5,     4,     3,     2,
       3,     1,     4,     5,     2,     5,     5,     2,     5,     3,
       2,     0,     1,     1,     2,     2,     2,     2,     0,     2,
       3,     3,     7,     8,     8,     5,     8,     8,     7,     7,
       6,     5,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     2,
       2,     3,     3,     2,     1,     1,     1,     1,     2,     5,
       4,     1,     3,     2,     4,     4,     5,     2,     3,     4,
       4,     5,     2,     2,     1,     2,     3,     2,     3,     3,
       3,     2,     4,     1,     1,     4,     4,     2,     2,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     3
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


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
  case 2: /* program: statementList  */
#line 83 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                { setParsedScriptBlock(yyvsp[0].v.p);}
#line 2132 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 5: /* program: error  */
#line 85 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
          {yyxpt(_("statement list or function definition"),yyvsp[0]);}
#line 2138 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 6: /* functionDef: FUNCTION returnDeclaration IDENT '(' argumentList ')' newLine statementList  */
#line 89 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                                {
   ParseRHS lhsRhs = yyvsp[-6];
   ParseRHS nameRhs = yyvsp[-5];
   ParseRHS rhsRhs = yyvsp[-3];
   ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
  }
#line 2150 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 7: /* functionDef: FUNCTION IDENT '(' argumentList ')' newLine statementList  */
#line 96 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                              {
   ParseRHS lhsRhs;
   lhsRhs.v.p = nullptr;
   ParseRHS nameRhs = yyvsp[-5];
   ParseRHS rhsRhs = yyvsp[-3];
   ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
   }
#line 2163 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 8: /* functionDef: FUNCTION returnDeclaration IDENT newLine statementList  */
#line 104 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                           {
    ParseRHS lhsRhs = yyvsp[-3];
    ParseRHS nameRhs = yyvsp[-2];
    ParseRHS rhsRhs;
    rhsRhs.v.p = nullptr;
    ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
   }
#line 2176 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 9: /* functionDef: FUNCTION IDENT newLine statementList  */
#line 112 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                         {
    ParseRHS lhsRhs;
    lhsRhs.v.p = nullptr;
    ParseRHS nameRhs = yyvsp[-2];
    ParseRHS rhsRhs;
    rhsRhs.v.p = nullptr;
    ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
   }
#line 2190 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 10: /* functionDef: FUNCTION returnDeclaration IDENT '(' ')' newLine statementList  */
#line 121 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                   {
    ParseRHS lhsRhs = yyvsp[-5];
    ParseRHS nameRhs = yyvsp[-4];
    ParseRHS rhsRhs;
    rhsRhs.v.p = nullptr;
    ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
   }
#line 2203 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 11: /* functionDef: FUNCTION IDENT '(' ')' newLine statementList  */
#line 129 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                 {
    ParseRHS lhsRhs;
    lhsRhs.v.p = nullptr;
    ParseRHS nameRhs = yyvsp[-4];
    ParseRHS rhsRhs;
    rhsRhs.v.p = nullptr;
    ParseRHS codeRhs = yyvsp[0];
   functionBody(lhsRhs, nameRhs, rhsRhs, codeRhs);
   }
#line 2217 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 12: /* functionDef: FUNCTION error  */
#line 138 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("legal function name or return declaration after 'function'"), yyvsp[-1]);}
#line 2223 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 13: /* functionDef: FUNCTION IDENT error  */
#line 139 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                         {yyxpt(_("argument list or statement list after identifier '") +
  yyvsp[-1].v.p->text.c_str() + "'",yyvsp[-1]);}
#line 2230 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 14: /* functionDef: FUNCTION IDENT '(' error  */
#line 141 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                              {yyxpt(_("(possibly empty) argument list after '('"),yyvsp[-1]);}
#line 2236 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 15: /* functionDef: FUNCTION IDENT '(' argumentList ')' error  */
#line 142 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                              {yyxpt(_("statement list after ')'"),yyvsp[-1]);}
#line 2242 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 16: /* functionDef: FUNCTION returnDeclaration error  */
#line 143 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                      {yyxpt(_("function name for function declared"),yyvsp[-2]);}
#line 2248 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 17: /* functionDef: FUNCTION returnDeclaration IDENT error  */
#line 144 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                           {yyxpt(_("argument list or statement list following function name :") +
  yyvsp[-1].v.p->text.c_str(), yyvsp[-1]);}
#line 2255 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 18: /* functionDef: FUNCTION returnDeclaration IDENT '(' error  */
#line 146 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                {yyxpt(_("(possibly empty) argument list after '('"),yyvsp[-1]);}
#line 2261 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 19: /* functionDef: FUNCTION returnDeclaration IDENT '(' argumentList ')' error  */
#line 147 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                {yyxpt(_("statement list after ')'"),yyvsp[-1]);}
#line 2267 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 22: /* returnDeclaration: VARARGOUT '='  */
#line 156 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = yyvsp[-1].v.p;}
#line 2273 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 23: /* returnDeclaration: IDENT '='  */
#line 157 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = yyvsp[-1].v.p;}
#line 2279 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 24: /* returnDeclaration: '[' argumentList ']' '='  */
#line 158 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                             {yyval.v.p = yyvsp[-2].v.p;}
#line 2285 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 25: /* returnDeclaration: '[' ']' '='  */
#line 159 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = nullptr;}
#line 2291 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 26: /* returnDeclaration: IDENT error  */
#line 160 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyxpt(_("an '=' symbol after identifier in return declaration"),yyvsp[-1]);}
#line 2297 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 27: /* returnDeclaration: '[' error  */
#line 161 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyxpt(_("a valid list of return arguments in return declaration"),yyvsp[-1]);}
#line 2303 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 28: /* returnDeclaration: '[' argumentList error  */
#line 162 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                           {yyxpt(_("matching ']' in return declaration for '['"),yyvsp[-2]);}
#line 2309 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 29: /* returnDeclaration: '[' argumentList ']' error  */
#line 163 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                               {yyxpt(_("an '=' symbol after return declaration"),yyvsp[-1]);}
#line 2315 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 30: /* argumentList: argument  */
#line 167 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
           {yyval.v.p = yyvsp[0].v.p;}
#line 2321 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 31: /* argumentList: argumentList ',' argument  */
#line 168 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                              {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 2327 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 33: /* statementList: statement  */
#line 176 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
             {yyval.v.p = AbstractSyntaxTree::createNode(OP_BLOCK,yyvsp[0].v.p,yyvsp[0].v.p->getContext());}
#line 2333 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 34: /* statementList: statementList statement  */
#line 177 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                           {yyval.v.p = yyvsp[-1].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 2339 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 35: /* statement: statementType ENDQSTMNT  */
#line 181 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                           {
        yyval.v.p = AbstractSyntaxTree::createNode(OP_QSTATEMENT,NULL,yyvsp[0].v.i);
      yyval.v.p->down = yyvsp[-1].v.p;
   }
#line 2348 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 36: /* statement: statementType ENDSTMNT  */
#line 185 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                            {
      yyval.v.p = AbstractSyntaxTree::createNode(OP_RSTATEMENT,NULL,yyvsp[0].v.i);
            yyval.v.p->down = yyvsp[-1].v.p;
   }
#line 2357 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 37: /* statement: statementType ','  */
#line 189 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {
      yyval.v.p = AbstractSyntaxTree::createNode(OP_RSTATEMENT,NULL,yyvsp[0].v.i);
      yyval.v.p->down = yyvsp[-1].v.p;
   }
#line 2366 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 40: /* statementType: %empty  */
#line 198 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
     {yyval.v.p = AbstractSyntaxTree::createNode(null_node,"",-1);}
#line 2372 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 56: /* specialSyntaxStatement: IDENT NUMERIC  */
#line 219 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext());}
#line 2378 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 57: /* specialSyntaxStatement: STRING STRING  */
#line 220 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext());}
#line 2384 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 58: /* specialSyntaxStatement: CHARACTER CHARACTER  */
#line 221 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                      {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext());}
#line 2390 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 59: /* specialSyntaxStatement: IDENT STRING  */
#line 222 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
               {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext());}
#line 2396 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 60: /* specialSyntaxStatement: IDENT CHARACTER  */
#line 223 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext());}
#line 2402 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 61: /* specialSyntaxStatement: IDENT IDENT  */
#line 224 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = AbstractSyntaxTree::createNode(OP_SCALL,yyvsp[-1].v.p,yyvsp[0].v.p,yyvsp[-1].v.p->getContext()); }
#line 2408 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 62: /* specialSyntaxStatement: specialSyntaxStatement STRING  */
#line 225 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                {yyvsp[-1].v.p->addChild(yyvsp[0].v.p);}
#line 2414 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 63: /* specialSyntaxStatement: specialSyntaxStatement CHARACTER  */
#line 226 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                   {yyvsp[-1].v.p->addChild(yyvsp[0].v.p);}
#line 2420 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 64: /* specialSyntaxStatement: specialSyntaxStatement IDENT  */
#line 227 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                               {yyvsp[-1].v.p->addChild(yyvsp[0].v.p);}
#line 2426 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 65: /* specialSyntaxStatement: specialSyntaxStatement NUMERIC  */
#line 228 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                 {yyvsp[-1].v.p->addChild(yyvsp[0].v.p);}
#line 2432 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 70: /* tryStatement: TRY statementList optionalCatch END  */
#line 247 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
  {
    yyval.v.p = yyvsp[-3].v.p;
    yyval.v.p->addChild(yyvsp[-2].v.p);
    if (yyvsp[-1].v.p != nullptr) yyval.v.p->addChild(yyvsp[-1].v.p);
  }
#line 2442 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 71: /* tryStatement: TRY statementList optionalCatch error  */
#line 253 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
  {yyxpt(_("matching 'end' to 'try' clause from line ") + decodeline(yyvsp[-3]),yyvsp[0]);}
#line 2448 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 72: /* optionalCatch: CATCH IDENT newLine statementList  */
#line 257 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                    {
    yyval.v.p = yyvsp[-2].v.p;
    yyval.v.p->addChild(yyvsp[0].v.p);
  }
#line 2457 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 73: /* optionalCatch: CATCH statementList  */
#line 261 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyval.v.p = yyvsp[0].v.p;}
#line 2463 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 74: /* optionalCatch: %empty  */
#line 262 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
    {yyval.v.p = nullptr;}
#line 2469 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 75: /* switchStatement: SWITCH expr optionalEndStatement caseBlock otherwiseClause END  */
#line 266 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                  {
    yyval.v.p = yyvsp[-5].v.p;
    yyval.v.p->addChild(yyvsp[-4].v.p);
    if (yyvsp[-2].v.p != nullptr) yyval.v.p->addChild(yyvsp[-2].v.p);
    if (yyvsp[-1].v.p != nullptr) yyval.v.p->addChild(yyvsp[-1].v.p);
  }
#line 2480 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 76: /* switchStatement: SWITCH expr optionalEndStatement caseBlock otherwiseClause error  */
#line 272 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                    {
          yyxpt(_("matching 'end' to 'switch' clause from line ") + decodeline(yyvsp[-5]),yyvsp[0]);
        }
#line 2488 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 83: /* caseBlock: %empty  */
#line 287 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
  {yyval.v.p = nullptr;}
#line 2494 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 85: /* caseList: caseStatement  */
#line 291 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {
    yyval.v.p = AbstractSyntaxTree::createNode(OP_CASEBLOCK,yyvsp[0].v.p,yyvsp[0].v.p->getContext());
  }
#line 2502 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 86: /* caseList: caseList caseStatement  */
#line 294 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                         {
    yyval.v.p = yyvsp[-1].v.p; yyval.v.p->addChild(yyvsp[0].v.p);
  }
#line 2510 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 87: /* caseStatement: CASE expr optionalEndStatement statementList  */
#line 300 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                               {
    yyval.v.p = yyvsp[-3].v.p; yyval.v.p->addChild(yyvsp[-2].v.p); yyval.v.p->addChild(yyvsp[0].v.p);
  }
#line 2518 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 88: /* otherwiseClause: OTHERWISE statementList  */
#line 306 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                          {
    yyval.v.p = yyvsp[0].v.p;
  }
#line 2526 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 89: /* otherwiseClause: %empty  */
#line 309 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
  {
    yyval.v.p = nullptr;
  }
#line 2534 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 90: /* forStatement: FOR forIndexExpression optionalEndStatement END  */
#line 315 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                  {
   yyval.v.p = nullptr;
  }
#line 2542 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 91: /* forStatement: FOR forIndexExpression optionalEndStatement statementList END  */
#line 318 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                                {
    yyval.v.p = yyvsp[-4].v.p;
    yyval.v.p->addChild(yyvsp[-3].v.p);
    yyval.v.p->addChild(yyvsp[-1].v.p);
  }
#line 2552 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 92: /* forStatement: FOR forIndexExpression optionalEndStatement statementList error  */
#line 324 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
           {yyxpt(_("'end' to match 'for' statement from line ") + decodeline(yyvsp[-4]),yyvsp[0]);}
#line 2558 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 93: /* forIndexExpression: '(' IDENT '=' expr ')'  */
#line 328 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                         {yyval.v.p = yyvsp[-3].v.p; yyval.v.p->addChild(yyvsp[-1].v.p);}
#line 2564 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 94: /* forIndexExpression: IDENT '=' expr  */
#line 329 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                 {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 2570 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 95: /* forIndexExpression: IDENT  */
#line 330 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
        {yyval.v.p = yyvsp[0].v.p;
        yyval.v.p->addChild(AbstractSyntaxTree::createNode(OP_RHS, AbstractSyntaxTree::createNode(id_node,yyvsp[0].v.p->text.c_str(), yyvsp[0].v.p->getContext()),yyvsp[0].v.p->getContext())); }
#line 2577 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 96: /* forIndexExpression: '(' IDENT '=' expr error  */
#line 332 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                           {yyxpt(_("matching right parenthesis"),yyvsp[-4]);}
#line 2583 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 97: /* forIndexExpression: '(' IDENT '=' error  */
#line 333 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                      {yyxpt(_("indexing expression"),yyvsp[-1]);}
#line 2589 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 98: /* forIndexExpression: '(' IDENT error  */
#line 334 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyxpt(_("equals operator after loop index"),yyvsp[-1]);}
#line 2595 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 99: /* forIndexExpression: '(' error  */
#line 335 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
            {yyxpt(_("identifier that is the loop variable"),yyvsp[-1]);}
#line 2601 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 100: /* forIndexExpression: IDENT '=' error  */
#line 336 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyxpt(_("indexing expression"),yyvsp[-1]);}
#line 2607 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 101: /* forIndexExpression: error  */
#line 337 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
        {yyxpt(_("identifier or assignment (id = expr) after 'for' "),yyvsp[0]);}
#line 2613 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 102: /* whileStatement: WHILE expr optionalEndStatement END  */
#line 341 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                      {
    yyval.v.p = nullptr;
  }
#line 2621 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 103: /* whileStatement: WHILE expr optionalEndStatement statementList END  */
#line 344 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                    {
    yyval.v.p = yyvsp[-4].v.p;
    yyval.v.p->addChild(yyvsp[-3].v.p);
    yyval.v.p->addChild(yyvsp[-1].v.p);
  }
#line 2631 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 104: /* whileStatement: WHILE error  */
#line 349 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyxpt(_("test expression after 'while'"),yyvsp[-1]);}
#line 2637 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 105: /* whileStatement: WHILE expr optionalEndStatement statementList error  */
#line 351 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
  {yyxpt(_("'end' to match 'while' statement from line ") + decodeline(yyvsp[-4]),yyvsp[0]);}
#line 2643 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 106: /* ifStatement: IF conditionedStatement elseIfBlock elseStatement END  */
#line 355 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                        {
    yyval.v.p = yyvsp[-4].v.p;
    yyval.v.p->addChild(yyvsp[-3].v.p);
    if (yyvsp[-2].v.p != nullptr) yyval.v.p->addChild(yyvsp[-2].v.p);
    if (yyvsp[-1].v.p != nullptr) yyval.v.p->addChild(yyvsp[-1].v.p);
  }
#line 2654 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 107: /* ifStatement: IF error  */
#line 361 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
           {yyxpt(_("condition expression for 'if'"),yyvsp[-1]);}
#line 2660 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 108: /* ifStatement: IF conditionedStatement elseIfBlock elseStatement error  */
#line 362 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                          {yyxpt(_("'end' to match 'if' statement from line ") + decodeline(yyvsp[-4]),yyvsp[0]);}
#line 2666 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 109: /* conditionedStatement: expr optionalEndStatement statementList  */
#line 366 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                          {
    yyval.v.p = AbstractSyntaxTree::createNode(OP_CSTAT,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-2].v.p->getContext());
  }
#line 2674 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 110: /* conditionedStatement: expr error  */
#line 369 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
             {yyxpt("valid list of statements after condition",yyvsp[0]);}
#line 2680 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 111: /* elseIfBlock: %empty  */
#line 373 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = nullptr;}
#line 2686 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 113: /* elseIfStatementList: elseIfStatement  */
#line 378 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {
    yyval.v.p = AbstractSyntaxTree::createNode(OP_ELSEIFBLOCK,yyvsp[0].v.p,yyvsp[0].v.p->getContext());
  }
#line 2694 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 114: /* elseIfStatementList: elseIfStatementList elseIfStatement  */
#line 381 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                      {
    yyval.v.p = yyvsp[-1].v.p; yyval.v.p->addChild(yyvsp[0].v.p);
  }
#line 2702 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 115: /* elseIfStatement: ELSEIF conditionedStatement  */
#line 387 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                              {
    yyval.v.p = yyvsp[0].v.p;
  }
#line 2710 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 116: /* elseIfStatement: ELSEIF error  */
#line 390 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
               {yyxpt(_("test condition for 'elseif' clause"),yyvsp[-1]);}
#line 2716 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 117: /* elseStatement: ELSE statementList  */
#line 393 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                     {
    yyval.v.p = yyvsp[0].v.p;
  }
#line 2724 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 118: /* elseStatement: %empty  */
#line 396 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = nullptr;}
#line 2730 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 119: /* elseStatement: ELSE error  */
#line 397 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
             {yyxpt(_("statement list for 'else' clause"),yyvsp[-1]);}
#line 2736 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 120: /* assignmentStatement: symbRefList '=' expr  */
#line 401 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_ASSIGN,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2742 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 121: /* assignmentStatement: symbRefList '=' error  */
#line 402 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                          {yyxpt(_("expression in assignment"),yyvsp[-1]);}
#line 2748 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 122: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '(' ')'  */
#line 406 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                        {
  yyval.v.p = AbstractSyntaxTree::createNode(OP_MULTICALL,yyvsp[-5].v.p,yyvsp[-2].v.p,yyvsp[-6].v.i);
  }
#line 2756 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 123: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '(' indexList ')'  */
#line 409 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                    {
    yyvsp[-3].v.p->addChild(AbstractSyntaxTree::createNode(OP_PARENS,yyvsp[-1].v.p,yyvsp[-2].v.i));
    yyval.v.p = AbstractSyntaxTree::createNode(OP_MULTICALL,yyvsp[-6].v.p,yyvsp[-3].v.p,yyvsp[-7].v.i);
  }
#line 2765 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 124: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '{' indexList '}'  */
#line 413 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                    {
    yyvsp[-3].v.p->addChild(AbstractSyntaxTree::createNode(OP_PARENS,yyvsp[-1].v.p,yyvsp[-2].v.i));
    yyval.v.p = AbstractSyntaxTree::createNode(OP_MULTICALL,yyvsp[-6].v.p,yyvsp[-3].v.p,yyvsp[-7].v.i);
  }
#line 2774 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 125: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT  */
#line 417 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                 {
    yyvsp[0].v.p->addChild(AbstractSyntaxTree::createNode(OP_PARENS,NULL,-1));
    yyval.v.p = AbstractSyntaxTree::createNode(OP_MULTICALL,yyvsp[-3].v.p,yyvsp[0].v.p,yyvsp[-4].v.i);
  }
#line 2783 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 126: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '{' indexList error  */
#line 421 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                      {yyxpt(_("matching right bracket"), yyvsp[-2]);}
#line 2789 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 127: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '(' indexList error  */
#line 422 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                      {yyxpt(_("matching right parenthesis"), yyvsp[-2]);}
#line 2795 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 128: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '(' error  */
#line 423 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                            {yyxpt(_("indexing list"), yyvsp[-1]);}
#line 2801 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 129: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT '{' error  */
#line 424 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                            {yyxpt(_("indexing list"), yyvsp[-1]);}
#line 2807 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 130: /* multiFunctionCall: '[' matrixDef ']' '=' IDENT error  */
#line 425 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                       {yyxpt(_("left parenthesis"),yyvsp[-1]);}
#line 2813 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 131: /* multiFunctionCall: '[' matrixDef ']' '=' error  */
#line 426 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                {yyxpt("identifier",yyvsp[-1]);}
#line 2819 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 132: /* expr: expr ':' expr  */
#line 430 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = AbstractSyntaxTree::createNode(OP_COLON,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2825 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 133: /* expr: expr ':' error  */
#line 431 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after ':'"), yyvsp[-1]);}
#line 2831 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 135: /* expr: expr '+' expr  */
#line 433 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_PLUS,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2837 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 136: /* expr: expr '+' error  */
#line 434 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '+'"), yyvsp[-1]);}
#line 2843 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 137: /* expr: expr '-' expr  */
#line 435 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_SUBTRACT,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2849 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 138: /* expr: expr '-' error  */
#line 436 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '-'"), yyvsp[-1]);}
#line 2855 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 139: /* expr: expr '*' expr  */
#line 437 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_TIMES,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2861 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 140: /* expr: expr '*' error  */
#line 438 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '*'"),yyvsp[-1]);}
#line 2867 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 141: /* expr: expr '/' expr  */
#line 439 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_RDIV,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2873 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 142: /* expr: expr '/' error  */
#line 440 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '/'"),yyvsp[-1]);}
#line 2879 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 143: /* expr: expr '\\' expr  */
#line 441 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyval.v.p = AbstractSyntaxTree::createNode(OP_LDIV,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2885 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 144: /* expr: expr '\\' error  */
#line 442 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyxpt(_("an expression after '\\'"),yyvsp[-1]);}
#line 2891 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 145: /* expr: expr '|' expr  */
#line 443 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_OR,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2897 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 146: /* expr: expr '|' error  */
#line 444 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '|'"),yyvsp[-1]);}
#line 2903 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 147: /* expr: expr '&' expr  */
#line 445 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_AND,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2909 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 148: /* expr: expr '&' error  */
#line 446 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '&'"),yyvsp[-1]);}
#line 2915 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 149: /* expr: expr SOR expr  */
#line 447 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_SOR,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2921 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 150: /* expr: expr SOR error  */
#line 448 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '||'"),yyvsp[-1]);}
#line 2927 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 151: /* expr: expr SAND expr  */
#line 449 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyval.v.p = AbstractSyntaxTree::createNode(OP_SAND,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2933 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 152: /* expr: expr SAND error  */
#line 450 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyxpt(_("an expression after '&&'"),yyvsp[-1]);}
#line 2939 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 153: /* expr: expr '<' expr  */
#line 451 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_LT,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2945 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 154: /* expr: expr '<' error  */
#line 452 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '<'"),yyvsp[-1]);}
#line 2951 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 155: /* expr: expr LE expr  */
#line 453 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_LEQ,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2957 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 156: /* expr: expr LE error  */
#line 454 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '<='"),yyvsp[-1]);}
#line 2963 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 157: /* expr: expr '>' expr  */
#line 455 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_GT,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2969 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 158: /* expr: expr '>' error  */
#line 456 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '>'"),yyvsp[-1]);}
#line 2975 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 159: /* expr: expr GE expr  */
#line 457 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_GEQ,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2981 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 160: /* expr: expr GE error  */
#line 458 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '>='"),yyvsp[-1]);}
#line 2987 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 161: /* expr: expr EQ expr  */
#line 459 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_EQ,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 2993 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 162: /* expr: expr EQ error  */
#line 460 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '=='"),yyvsp[-1]);}
#line 2999 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 163: /* expr: expr NE expr  */
#line 461 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_NEQ,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3005 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 164: /* expr: expr NE error  */
#line 462 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyxpt(_("an expression after '~='"),yyvsp[-1]);}
#line 3011 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 165: /* expr: expr DOTTIMES expr  */
#line 463 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT_TIMES,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3017 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 166: /* expr: expr DOTTIMES error  */
#line 464 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyxpt(_("an expression after '.*'"), yyvsp[-1]);}
#line 3023 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 167: /* expr: expr DOTRDIV expr  */
#line 465 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT_RDIV,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3029 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 168: /* expr: expr DOTRDIV error  */
#line 466 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyxpt(_("an expression after './'"),yyvsp[-1]);}
#line 3035 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 169: /* expr: expr DOTLDIV expr  */
#line 467 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                      {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT_LDIV,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3041 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 170: /* expr: expr DOTLDIV error  */
#line 468 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyxpt(_("an expression after '.\\'"),yyvsp[-1]);}
#line 3047 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 171: /* expr: '-' expr  */
#line 469 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_NEG,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3053 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 172: /* expr: '+' expr  */
#line 470 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_POS, yyvsp[0].v.p, yyvsp[-1].v.i);}
#line 3059 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 173: /* expr: '~' expr  */
#line 471 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_NOT,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3065 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 174: /* expr: '~' error  */
#line 472 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyxpt(_("an expression after logical not"),yyvsp[0]);}
#line 3071 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 175: /* expr: expr '^' expr  */
#line 473 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                   {yyval.v.p = AbstractSyntaxTree::createNode(OP_POWER,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3077 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 176: /* expr: expr '^' error  */
#line 474 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyxpt(_("an expression after '^'"),yyvsp[-1]);}
#line 3083 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 177: /* expr: expr DOTPOWER expr  */
#line 475 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT_POWER,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3089 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 178: /* expr: expr DOTPOWER error  */
#line 476 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyxpt(_("an expression after '.^'"),yyvsp[-1]);}
#line 3095 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 179: /* expr: expr '\''  */
#line 477 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_TRANSPOSE,yyvsp[-1].v.p,yyvsp[0].v.i);}
#line 3101 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 180: /* expr: expr DOTTRANSPOSE  */
#line 478 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT_TRANSPOSE,yyvsp[-1].v.p,yyvsp[0].v.i);}
#line 3107 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 181: /* expr: '(' expr ')'  */
#line 479 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = yyvsp[-1].v.p;}
#line 3113 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 182: /* expr: '(' expr error  */
#line 480 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyxpt(_("a right parenthesis after expression to match this one"),yyvsp[-2]);}
#line 3119 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 183: /* expr: '(' error  */
#line 481 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
               {yyxpt(_("an expression after left parenthesis"),yyvsp[-1]);}
#line 3125 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 188: /* terminal: '@' IDENT  */
#line 489 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p =  AbstractSyntaxTree::createNode(OP_FUNCTION_HANDLE_NAMED, yyvsp[0].v.p, yyvsp[0].v.i);}
#line 3131 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 189: /* terminal: '@' '(' argumentList ')' expr  */
#line 490 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_FUNCTION_HANDLE_ANONYMOUS,yyvsp[-2].v.p,yyvsp[0].v.p, yyvsp[-2].v.p->getContext());}
#line 3137 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 190: /* terminal: '@' '(' ')' expr  */
#line 491 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                     {yyval.v.p = AbstractSyntaxTree::createNode(OP_FUNCTION_HANDLE_ANONYMOUS,yyvsp[0].v.p, yyvsp[0].v.p->getContext());}
#line 3143 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 191: /* terminal: symbRefList  */
#line 492 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                {yyval.v.p = AbstractSyntaxTree::createNode(OP_RHS,yyvsp[0].v.p,yyvsp[0].v.p->getContext());}
#line 3149 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 192: /* terminal: '[' matrixDef ']'  */
#line 493 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                      {yyval.v.p = yyvsp[-1].v.p;}
#line 3155 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 193: /* terminal: '[' error  */
#line 494 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyxpt(_("a matrix definition followed by a right bracket"),yyvsp[-1]);}
#line 3161 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 194: /* terminal: '[' rowSeparator matrixDef ']'  */
#line 495 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                   {yyval.v.p = yyvsp[-1].v.p;}
#line 3167 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 195: /* terminal: '[' matrixDef rowSeparator ']'  */
#line 496 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                   {yyval.v.p = yyvsp[-2].v.p;}
#line 3173 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 196: /* terminal: '[' rowSeparator matrixDef rowSeparator ']'  */
#line 497 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                                {yyval.v.p = yyvsp[-2].v.p;}
#line 3179 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 197: /* terminal: '[' ']'  */
#line 498 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_EMPTY,NULL,yyvsp[-1].v.i);}
#line 3185 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 198: /* terminal: '{' cellDef '}'  */
#line 499 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyval.v.p = yyvsp[-1].v.p;}
#line 3191 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 199: /* terminal: '{' rowSeparator cellDef '}'  */
#line 500 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                 {yyval.v.p = yyvsp[-1].v.p;}
#line 3197 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 200: /* terminal: '{' cellDef rowSeparator '}'  */
#line 501 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                 {yyval.v.p = yyvsp[-2].v.p;}
#line 3203 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 201: /* terminal: '{' rowSeparator cellDef rowSeparator '}'  */
#line 502 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                              {yyval.v.p = yyvsp[-2].v.p;}
#line 3209 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 202: /* terminal: '{' '}'  */
#line 503 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                  {yyval.v.p = AbstractSyntaxTree::createNode(OP_EMPTY_CELL,NULL,yyvsp[-1].v.i);}
#line 3215 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 203: /* terminal: '{' error  */
#line 504 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyxpt(_("a cell-array definition followed by a right brace"),yyvsp[-1]);}
#line 3221 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 205: /* symbRefList: symbRefList symbRef  */
#line 508 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                          {yyval.v.p = yyvsp[-1].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 3227 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 206: /* symbRef: '(' indexList ')'  */
#line 511 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                    {yyval.v.p = AbstractSyntaxTree::createNode(OP_PARENS,yyvsp[-1].v.p,yyvsp[-2].v.i); }
#line 3233 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 207: /* symbRef: '(' ')'  */
#line 512 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
            {yyval.v.p = AbstractSyntaxTree::createNode(OP_PARENS,NULL,yyvsp[-1].v.i); }
#line 3239 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 208: /* symbRef: '(' indexList error  */
#line 513 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                              {yyxpt(_("matching right parenthesis"),yyvsp[-2]);}
#line 3245 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 209: /* symbRef: '{' indexList '}'  */
#line 514 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                      {yyval.v.p = AbstractSyntaxTree::createNode(OP_BRACES,yyvsp[-1].v.p,yyvsp[-2].v.i); }
#line 3251 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 210: /* symbRef: '{' indexList error  */
#line 515 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                              {yyxpt(_("matching right brace"),yyvsp[-2]);}
#line 3257 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 211: /* symbRef: '.' IDENT  */
#line 516 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOT,yyvsp[0].v.p,yyvsp[-1].v.i); }
#line 3263 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 212: /* symbRef: '.' '(' expr ')'  */
#line 517 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                           {yyval.v.p = AbstractSyntaxTree::createNode(OP_DOTDYN,yyvsp[-1].v.p,yyvsp[-3].v.i);}
#line 3269 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 214: /* indexElement: ':'  */
#line 521 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
        {yyval.v.p = AbstractSyntaxTree::createNode(OP_ALL,NULL,yyvsp[0].v.i);}
#line 3275 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 215: /* indexElement: '/' IDENT '=' expr  */
#line 522 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                       {yyval.v.p = AbstractSyntaxTree::createNode(OP_KEYWORD,yyvsp[-2].v.p,yyvsp[0].v.p,yyvsp[-3].v.i);}
#line 3281 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 216: /* indexElement: '/' IDENT '=' error  */
#line 523 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                        {yyxpt(_("expecting expression after '=' in keyword assignment"),yyvsp[-1]);}
#line 3287 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 217: /* indexElement: '/' IDENT  */
#line 524 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = AbstractSyntaxTree::createNode(OP_KEYWORD,yyvsp[0].v.p,yyvsp[-1].v.i);}
#line 3293 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 218: /* indexElement: '/' error  */
#line 525 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyxpt(_("expecting keyword identifier after '/' in keyword assignment"),yyvsp[-1]);}
#line 3299 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 220: /* indexList: indexList ',' indexElement  */
#line 530 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                   {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addPeer(yyvsp[0].v.p);}
#line 3305 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 221: /* cellDef: rowDef  */
#line 534 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = AbstractSyntaxTree::createNode(OP_BRACES,yyvsp[0].v.p,yyvsp[0].v.p->getContext());}
#line 3311 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 222: /* cellDef: cellDef rowSeparator rowDef  */
#line 535 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                   {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 3317 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 223: /* matrixDef: rowDef  */
#line 539 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
              {yyval.v.p = AbstractSyntaxTree::createNode(OP_BRACKETS,yyvsp[0].v.p,yyvsp[0].v.p->getContext());}
#line 3323 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 224: /* matrixDef: matrixDef rowSeparator rowDef  */
#line 540 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                                     {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 3329 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 228: /* rowDef: expr  */
#line 552 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
            {yyval.v.p = AbstractSyntaxTree::createNode(OP_SEMICOLON,yyvsp[0].v.p,yyvsp[0].v.p->getContext());}
#line 3335 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;

  case 229: /* rowDef: rowDef columnSep expr  */
#line 553 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"
                             {yyval.v.p = yyvsp[-2].v.p; yyval.v.p->addChild(yyvsp[0].v.p);}
#line 3341 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"
    break;


#line 3345 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.cpp"

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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

#line 555 "..\\..\\NelSon\\modules\\interpreter\\src\\grammar\\NelSonParser.yxx"

//=============================================================================
namespace Nelson {
//=============================================================================
  void callyyparse() {
    yyparse();
  }
//=============================================================================
}
//=============================================================================
// clang-format on
