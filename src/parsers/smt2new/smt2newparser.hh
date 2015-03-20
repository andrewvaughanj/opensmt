/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_SMT2NEW_SMT_NEWPARSER_HH_INCLUDED
# define YY_SMT2NEW_SMT_NEWPARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int smt2newdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_AS = 258,
    TK_DECIMAL = 259,
    TK_EXISTS = 260,
    TK_FORALL = 261,
    TK_LET = 262,
    TK_NUMERAL = 263,
    TK_PAR = 264,
    TK_STRING = 265,
    TK_ASSERT = 266,
    TK_CHECKSAT = 267,
    TK_DECLARESORT = 268,
    TK_DECLAREFUN = 269,
    TK_DEFINESORT = 270,
    TK_DEFINEFUN = 271,
    TK_EXIT = 272,
    TK_GETASSERTIONS = 273,
    TK_GETASSIGNMENT = 274,
    TK_GETINFO = 275,
    TK_GETOPTION = 276,
    TK_GETPROOF = 277,
    TK_GETUNSATCORE = 278,
    TK_GETVALUE = 279,
    TK_POP = 280,
    TK_PUSH = 281,
    TK_SETLOGIC = 282,
    TK_SETINFO = 283,
    TK_SETOPTION = 284,
    TK_THEORY = 285,
    TK_GETITPS = 286,
    TK_WRSTATE = 287,
    TK_RDSTATE = 288,
    TK_SIMPLIFY = 289,
    TK_NUM = 290,
    TK_SYM = 291,
    TK_KEY = 292,
    TK_STR = 293,
    TK_DEC = 294,
    TK_HEX = 295,
    TK_BIN = 296,
    KW_SORTS = 297,
    KW_FUNS = 298,
    KW_SORTSDESCRIPTION = 299,
    KW_FUNSDESCRIPTION = 300,
    KW_DEFINITION = 301,
    KW_NOTES = 302,
    KW_THEORIES = 303,
    KW_LANGUAGE = 304,
    KW_EXTENSIONS = 305,
    KW_VALUES = 306,
    KW_PRINTSUCCESS = 307,
    KW_EXPANDDEFINITIONS = 308,
    KW_INTERACTIVEMODE = 309,
    KW_PRODUCEPROOFS = 310,
    KW_PRODUCEUNSATCORES = 311,
    KW_PRODUCEMODELS = 312,
    KW_PRODUCEASSIGNMENTS = 313,
    KW_REGULAROUTPUTCHANNEL = 314,
    KW_DIAGNOSTICOUTPUTCHANNEL = 315,
    KW_RANDOMSEED = 316,
    KW_VERBOSITY = 317,
    KW_ERRORBEHAVIOR = 318,
    KW_NAME = 319,
    KW_NAMED = 320,
    KW_AUTHORS = 321,
    KW_VERSION = 322,
    KW_STATUS = 323,
    KW_REASONUNKNOWN = 324,
    KW_ALLSTATISTICS = 325
  };
#endif
/* Tokens.  */
#define TK_AS 258
#define TK_DECIMAL 259
#define TK_EXISTS 260
#define TK_FORALL 261
#define TK_LET 262
#define TK_NUMERAL 263
#define TK_PAR 264
#define TK_STRING 265
#define TK_ASSERT 266
#define TK_CHECKSAT 267
#define TK_DECLARESORT 268
#define TK_DECLAREFUN 269
#define TK_DEFINESORT 270
#define TK_DEFINEFUN 271
#define TK_EXIT 272
#define TK_GETASSERTIONS 273
#define TK_GETASSIGNMENT 274
#define TK_GETINFO 275
#define TK_GETOPTION 276
#define TK_GETPROOF 277
#define TK_GETUNSATCORE 278
#define TK_GETVALUE 279
#define TK_POP 280
#define TK_PUSH 281
#define TK_SETLOGIC 282
#define TK_SETINFO 283
#define TK_SETOPTION 284
#define TK_THEORY 285
#define TK_GETITPS 286
#define TK_WRSTATE 287
#define TK_RDSTATE 288
#define TK_SIMPLIFY 289
#define TK_NUM 290
#define TK_SYM 291
#define TK_KEY 292
#define TK_STR 293
#define TK_DEC 294
#define TK_HEX 295
#define TK_BIN 296
#define KW_SORTS 297
#define KW_FUNS 298
#define KW_SORTSDESCRIPTION 299
#define KW_FUNSDESCRIPTION 300
#define KW_DEFINITION 301
#define KW_NOTES 302
#define KW_THEORIES 303
#define KW_LANGUAGE 304
#define KW_EXTENSIONS 305
#define KW_VALUES 306
#define KW_PRINTSUCCESS 307
#define KW_EXPANDDEFINITIONS 308
#define KW_INTERACTIVEMODE 309
#define KW_PRODUCEPROOFS 310
#define KW_PRODUCEUNSATCORES 311
#define KW_PRODUCEMODELS 312
#define KW_PRODUCEASSIGNMENTS 313
#define KW_REGULAROUTPUTCHANNEL 314
#define KW_DIAGNOSTICOUTPUTCHANNEL 315
#define KW_RANDOMSEED 316
#define KW_VERBOSITY 317
#define KW_ERRORBEHAVIOR 318
#define KW_NAME 319
#define KW_NAMED 320
#define KW_AUTHORS 321
#define KW_VERSION 322
#define KW_STATUS 323
#define KW_REASONUNKNOWN 324
#define KW_ALLSTATISTICS 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 66 "smt2newparser.yy" /* yacc.c:1909  */

  char  *                      str;
  std::vector< std::string > * str_list;
  ASTNode *                    snode;
  std::list< ASTNode * > *     snode_list;

#line 201 "smt2newparser.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int smt2newparse (Smt2newContext* context);

#endif /* !YY_SMT2NEW_SMT_NEWPARSER_HH_INCLUDED  */