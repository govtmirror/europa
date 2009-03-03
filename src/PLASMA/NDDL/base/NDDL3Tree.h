/** \file
 *  This C header file was generated by $ANTLR version 3.1.1
 *
 *     -  From the grammar source file : ../base/antlr/NDDL3Tree.g
 *     -                            On : 2009-03-02 08:44:11
 *     -           for the tree parser : NDDL3TreeTreeParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The tree parser NDDL3Tree has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pNDDL3Tree, which is returned from a call to NDDL3TreeNew().
 *
 * The methods in pNDDL3Tree are  as follows:
 *
 *  - void      pNDDL3Tree->nddl(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->typeDefinition(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->type(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->simpleType(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->inlineType(pNDDL3Tree)
 *  - ExprList*      pNDDL3Tree->variableDeclarations(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->variableInitialization(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->initializer(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->anyValue(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->value(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->valueSet(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->booleanLiteral(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->stringLiteral(pNDDL3Tree)
 *  - AbstractDomain*      pNDDL3Tree->numericLiteral(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->numericInterval(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->allocation(pNDDL3Tree)
 *  - void      pNDDL3Tree->variableArgumentList(pNDDL3Tree)
 *  - NDDL3Tree_identifier_return      pNDDL3Tree->identifier(pNDDL3Tree)
 *  - ExprConstraint*      pNDDL3Tree->constraintInstantiation(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->classDeclaration(pNDDL3Tree)
 *  - void      pNDDL3Tree->classBlock(pNDDL3Tree)
 *  - void      pNDDL3Tree->componentTypeEntry(pNDDL3Tree)
 *  - void      pNDDL3Tree->classVariable(pNDDL3Tree)
 *  - void      pNDDL3Tree->constructor(pNDDL3Tree)
 *  - void      pNDDL3Tree->constructorArgument(pNDDL3Tree)
 *  - ExprConstructorSuperCall*      pNDDL3Tree->constructorSuper(pNDDL3Tree)
 *  - ExprAssignment*      pNDDL3Tree->assignment(pNDDL3Tree)
 *  - void      pNDDL3Tree->predicate(pNDDL3Tree)
 *  - void      pNDDL3Tree->predicateStatements(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->predicateParameter(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->predicateParameterAssignment(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->standardConstraint(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->rule(pNDDL3Tree)
 *  - void      pNDDL3Tree->ruleBlock(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->ruleStatement(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->ifStatement(pNDDL3Tree)
 *  - ExprIfGuard*      pNDDL3Tree->guardExpression(pNDDL3Tree)
 *  - NDDL3Tree_guardRelop_return      pNDDL3Tree->guardRelop(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->loopStatement(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->problemStmt(pNDDL3Tree)
 *  - NDDL3Tree_problemStmtType_return      pNDDL3Tree->problemStmtType(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->relation(pNDDL3Tree)
 *  - void      pNDDL3Tree->predicateInstanceList(pNDDL3Tree)
 *  - PredicateInstanceRef*      pNDDL3Tree->predicateInstance(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->qualified(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->qualifiedToken(pNDDL3Tree)
 *  - NDDL3Tree_temporalRelation_return      pNDDL3Tree->temporalRelation(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->methodInvocation(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->variableMethod(pNDDL3Tree)
 *  - NDDL3Tree_variableOp_return      pNDDL3Tree->variableOp(pNDDL3Tree)
 *  - Expr*      pNDDL3Tree->tokenMethod(pNDDL3Tree)
 *  - NDDL3Tree_tokenOp_return      pNDDL3Tree->tokenOp(pNDDL3Tree)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
#ifndef	_NDDL3Tree_H
#define _NDDL3Tree_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#include "Debug.hh"
#include "BoolDomain.hh"
#include "StringDomain.hh"
#include "NddlInterpreter.hh"

using namespace EUROPA;


 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct NDDL3Tree_Ctx_struct NDDL3Tree, * pNDDL3Tree;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#endif
typedef struct NDDL3Tree_identifier_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_identifier_return;

typedef struct NDDL3Tree_guardRelop_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_guardRelop_return;

typedef struct NDDL3Tree_problemStmtType_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_problemStmtType_return;

typedef struct NDDL3Tree_temporalRelation_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_temporalRelation_return;

typedef struct NDDL3Tree_variableOp_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_variableOp_return;

typedef struct NDDL3Tree_tokenOp_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    NDDL3Tree_tokenOp_return;




/** Context tracking structure for NDDL3Tree
 */
struct NDDL3Tree_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_TREE_PARSER	    pTreeParser;


     void (*nddl)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*typeDefinition)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*type)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*simpleType)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*inlineType)	(struct NDDL3Tree_Ctx_struct * ctx, AbstractDomain* baseType);
     ExprList* (*variableDeclarations)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*variableInitialization)	(struct NDDL3Tree_Ctx_struct * ctx, AbstractDomain* dataType);
     Expr* (*initializer)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*anyValue)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*value)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*valueSet)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*booleanLiteral)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*stringLiteral)	(struct NDDL3Tree_Ctx_struct * ctx);
     AbstractDomain* (*numericLiteral)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*numericInterval)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*allocation)	(struct NDDL3Tree_Ctx_struct * ctx);
     void (*variableArgumentList)	(struct NDDL3Tree_Ctx_struct * ctx, std::vector<Expr*>& result);
     NDDL3Tree_identifier_return (*identifier)	(struct NDDL3Tree_Ctx_struct * ctx);
     ExprConstraint* (*constraintInstantiation)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*classDeclaration)	(struct NDDL3Tree_Ctx_struct * ctx);
     void (*classBlock)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     void (*componentTypeEntry)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     void (*classVariable)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     void (*constructor)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     void (*constructorArgument)	(struct NDDL3Tree_Ctx_struct * ctx, std::vector<std::string>& argNames, std::vector<std::string>& argTypes);
     ExprConstructorSuperCall* (*constructorSuper)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     ExprAssignment* (*assignment)	(struct NDDL3Tree_Ctx_struct * ctx);
     void (*predicate)	(struct NDDL3Tree_Ctx_struct * ctx, ObjectType* objType);
     void (*predicateStatements)	(struct NDDL3Tree_Ctx_struct * ctx, InterpretedTokenFactory* tokenFactory);
     Expr* (*predicateParameter)	(struct NDDL3Tree_Ctx_struct * ctx, InterpretedTokenFactory* tokenFactory);
     Expr* (*predicateParameterAssignment)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*standardConstraint)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*rule)	(struct NDDL3Tree_Ctx_struct * ctx);
     void (*ruleBlock)	(struct NDDL3Tree_Ctx_struct * ctx, std::vector<Expr*>& ruleBody);
     Expr* (*ruleStatement)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*ifStatement)	(struct NDDL3Tree_Ctx_struct * ctx);
     ExprIfGuard* (*guardExpression)	(struct NDDL3Tree_Ctx_struct * ctx);
     NDDL3Tree_guardRelop_return (*guardRelop)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*loopStatement)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*problemStmt)	(struct NDDL3Tree_Ctx_struct * ctx);
     NDDL3Tree_problemStmtType_return (*problemStmtType)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*relation)	(struct NDDL3Tree_Ctx_struct * ctx);
     void (*predicateInstanceList)	(struct NDDL3Tree_Ctx_struct * ctx, std::vector<PredicateInstanceRef*>& instances);
     PredicateInstanceRef* (*predicateInstance)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*qualified)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*qualifiedToken)	(struct NDDL3Tree_Ctx_struct * ctx);
     NDDL3Tree_temporalRelation_return (*temporalRelation)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*methodInvocation)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*variableMethod)	(struct NDDL3Tree_Ctx_struct * ctx);
     NDDL3Tree_variableOp_return (*variableOp)	(struct NDDL3Tree_Ctx_struct * ctx);
     Expr* (*tokenMethod)	(struct NDDL3Tree_Ctx_struct * ctx);
     NDDL3Tree_tokenOp_return (*tokenOp)	(struct NDDL3Tree_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct NDDL3Tree_Ctx_struct * ctx);
        

        NddlSymbolTable* SymbolTable;

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pNDDL3Tree NDDL3TreeNew         (pANTLR3_COMMON_TREE_NODE_STREAM instream);
ANTLR3_API pNDDL3Tree NDDL3TreeNewSSD      (pANTLR3_COMMON_TREE_NODE_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the tree parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EXPONENT      22
#define T__29      29
#define FLOAT_SUFFIX      23
#define T__28      28
#define T__27      27
#define T__26      26
#define CONSTRUCTOR_INVOCATION      5
#define OCTAL_ESC      18
#define EOF      -1
#define T__93      93
#define T__94      94
#define T__91      91
#define T__92      92
#define T__90      90
#define INCLUDE      15
#define COMMENT      24
#define T__99      99
#define T__98      98
#define T__97      97
#define T__96      96
#define T__95      95
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define LINE_COMMENT      25
#define INT      12
#define T__85      85
#define T__84      84
#define T__87      87
#define T__86      86
#define T__89      89
#define T__88      88
#define WS      14
#define T__71      71
#define T__72      72
#define VARIABLE      9
#define T__70      70
#define T__76      76
#define T__75      75
#define T__74      74
#define T__73      73
#define CONSTRUCTOR      4
#define T__79      79
#define T__78      78
#define T__77      77
#define T__68      68
#define T__69      69
#define T__66      66
#define T__67      67
#define T__64      64
#define T__65      65
#define INT_SUFFIX      21
#define T__62      62
#define T__63      63
#define FLOAT      13
#define TOKEN_RELATION      8
#define T__61      61
#define T__60      60
#define T__55      55
#define T__56      56
#define ESCAPE_SEQUENCE      16
#define T__57      57
#define T__58      58
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define T__59      59
#define IDENT      10
#define DIGIT      20
#define T__50      50
#define T__42      42
#define T__43      43
#define T__40      40
#define T__41      41
#define T__46      46
#define T__47      47
#define T__44      44
#define T__45      45
#define T__48      48
#define T__49      49
#define UNICODE_ESC      17
#define HEX_DIGIT      19
#define T__30      30
#define T__31      31
#define T__32      32
#define T__33      33
#define T__34      34
#define T__35      35
#define T__36      36
#define T__37      37
#define NDDL      7
#define T__38      38
#define T__39      39
#define CONSTRAINT_INSTANTIATION      6
#define STRING      11
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for NDDL3Tree
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */