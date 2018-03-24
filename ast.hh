#include <functional>
#include <string>
#include <cmath>


/* interface to the lexer */
void yyerror(char *s, ...);

namespace tiger {

///////////////////////////////////////////////////////////////////////////////
// Base AST node class, to define the hierarchy.
class ASTNode {
 public:
  using value_t = std::string;  
  using ASTptr = const ASTNode*; // Can't use smart ptr in union :(

  ASTNode() = default;
  virtual ~ASTNode() = default;
  virtual value_t print() const = "";
};

///////////////////////////////////////////////////////////////////////////////
// ID node
class IdASTNode : public ASTNode {
	public:
		IdASTNode (value_t value) //takes in a string with no spaces
		: ASTNode(), value_(value)
		{}
		virtual ~IdASTNode() = default;

		virtual value_t print() const
		{
			return (value_ );
		}	

	private:
		const value_t value_;

};



///////////////////////////////////////////////////////////////////////////////
//		DECLARATIONS
///////////////////////////////////////////////////////////////////////////////
// Single Declaration
class DecASTNode : public ASTNode {
	public:
		DecASTNode (ASTptr dec)
		: ASTNode(), dec_(dec)
		{}
		virtual ~DecASTNode(){
			delete dec_;
		}

		virtual value_t print() const
		{
			return (dec_->print());
		}	

	private:
		const ASTptr dec_; //can be type declaration (l.109), variable declaration (l.203), or function declaration (l.233)

};


// Declaration Sequence
class DecSeqASTNode : public ASTNode {
	public:
		DecSeqASTNode (ASTptr dec, ASTptr seq = nullptr) 
		: ASTNode(), dec_(dec), seq_(seq)
		{}
		virtual ~DecSeqASTNode(){
			delete dec_;
			delete seq_;
		}

		virtual value_t print() const
		{
			if (seq_ == nullptr){
				return (dec_->print());
			} else {
				return (dec_->print() + " \n " + seq_->print());
			}
		}	

	private:
		const ASTptr dec_; //single declaration
		const ASTptr seq_; //declaration sequence
};


///////////////////////////////////////////////////////////////////////////////
//		TYPE DECLARATIONS
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Type Declaration
class TypeDecASTNode : public ASTNode {
	public:
		TypeDecASTNode (ASTptr id, ASTptr type) 
		: ASTNode(), id_(id), type_(type)
		{}
		virtual ~TypeDecASTNode(){
			delete id_;
			delete type_;
		}

		virtual value_t print() const
		{
			return ("type " + id_->print() + " = " + type_->print());
		}	

	private:
		const ASTptr id_; // ID (l.24)
		const ASTptr type_; //Type-ID, Array of Type, or Record Types

};

///////////////////////////////////////////////////////////////////////////////
// Type IDs. Right now they're functionally like IDs, but they can only be certain 
// words, so it's probably best to make it a separate type of node

class TypeIdASTNode : public IdASTNode {

	private:
		const value_t value_;
};

///////////////////////////////////////////////////////////////////////////////
// Array of Type:
class ArrayTypeASTNode : public ASTNode {
	public:
		ArrayTypeASTNode (ASTptr type) 
		: ASTNode(), type_(type)
		{}
		virtual ~ArrayTypeASTNode(){
			delete type_;
		}

		virtual value_t print() const
		{
			return ("Array of " + type_->print());
		}	

	private:
		const ASTptr type_; //Type-ID

};

///////////////////////////////////////////////////////////////////////////////
// Records Fields:
class RecFieldASTNode : public ASTNode {
	public:
		RecFieldASTNode (ASTptr id, ASTptr type, ASTptr fields = nullptr)
		: ASTNode(), id_(id), type_(type), fields_(fields)
		{}
		virtual ~RecFieldASTNode(){
			delete id_;
			delete type_;
			delete fields_;
		}

		virtual value_t print() const
		{
			if (fields_ == nullptr){
				return (id_->print() + ": " + type_->print());
			} else {
				return (id_->print() + ": " + type_->print() + ", " + fields_->print());
			}
		}	

	private:
		const ASTptr id_; // ID
		const ASTptr type_; // Type-ID
		const ASTptr fields_; //Records Fields
};


///////////////////////////////////////////////////////////////////////////////
// Record types:
class RecTypeASTNode : public ASTNode {
	public:
		RecTypeASTNode (ASTptr fields) 
		: ASTNode(), fields_(fields)
		{}
		virtual ~RecTypeASTNode(){
			delete fields_;
		}

		virtual value_t print() const
		{
			return ("{" + fields_->print() + "}");
		}	

	private:

		const ASTptr fields_; //Records Field or empty
};

///////////////////////////////////////////////////////////////////////////////
//		VARIABLE DECLARATION
///////////////////////////////////////////////////////////////////////////////
class VarDecASTNode : public ASTNode {
	public:
		VarDecASTNode (ASTptr id, ASTptr exp, ASTptr type = nullptr)
		: ASTNode(), id_(id), exp_(exp), type_(type)
		{}
		virtual ~VarDecASTNode(){
			delete id_;
			delete exp_;
			delete type_;
		}

		virtual value_t print() const
		{
			if (type_ == nullptr){
				return ("var " + id_->print() + " := " + exp_->print())
			} else {
				return ("var " + id_->print() + " : " + type_->print() + " := " + exp_->print())
			}
		}	

	private:
		const ASTptr id_; //ID
		const ASTptr exp_; //Single expression (l.270)
		const ASTptr type_; //Type-ID
};


///////////////////////////////////////////////////////////////////////////////
//		FUNCTION DECLARATION
///////////////////////////////////////////////////////////////////////////////
class FuncDecASTNode : public ASTNode {
	public:
		FuncDecASTNode (ASTptr id, ASTptr fields, ASTptr exp, ASTptr type = nullptr) 
		: ASTNode(), id_(id), fields_(fields), type_(type), exp_(exp)
		{}
		virtual ~FuncDecASTNode(){
			delete id_;
			delete fields_;
			delete type_;
			delete exp_;
		}

		virtual value_t print() const
		{
			if (type_ == nullptr){
				return ("function " + id_->print() + " (" + fields_->print() + ") = " + exp_->print())
			} else{
				return ("function " + id_->print() + " (" + fields_->print() + "): " + type_->print() + " = " + exp_->print())
			}
		}	

	private:
		const ASTptr id_;
		const ASTptr fields_; //Record Fields(l.153)
		const ASTptr type_;
		const ASTptr exp_;
};


///////////////////////////////////////////////////////////////////////////////
//		EXPRESSIONS 
///////////////////////////////////////////////////////////////////////////////

// Single Expression
class ExpASTNode : public ASTNode {
	public:
		ExpASTNode (ASTptr exp) // exp can be anything below between and including literals and control structs
		: ASTNode(), exp_(exp)
		{}
		virtual ~ExpASTNode(){
			delete exp_;
		}


		virtual value_t print() const
		{
			return (exp_->print());
		}	

	private:
		const ASTptr exp_; //

};


// Expression Sequence
class ExpSeqASTNode : public ASTNode {
	public:
		ExpSeqASTNode (ASTptr exp, ASTptr seq = nullptr) 
		: ASTNode(), exp_(exp), seq_(seq)
		{}
		virtual ~ExpSeqASTNode(){
			delete exp_;
			delete seq_;
		}

		virtual value_t print() const
		{
			if (seq_ == nullptr){
				return (exp_->print());
			} else {
				return (exp_->print() + "; " + seq_->print());
			}
		}	

	private:
		const ASTptr exp_; //Single expression
		const ASTptr seq_; //Expression Sequence
};


///////////////////////////////////////////////////////////////////////////////
//		LITERALS 
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Integers
class NumASTNode : public ASTNode {
	public:
		using ASTintptr = const NumASTNode*;

	  	NumASTNode(value_t value)
	   	: ASTNode(), value_(value)
	  	{}
	  	virtual ~NumASTNode() = default;

	  	virtual int eval() const
	  	{
	    	return std::atoi(value_);
	  	}


	  	virtual value_t print() const
	  	{
	    	return (value_);
	  	}


	private:
	  	const value_t value_;
};


// Strings
class StrASTNode : public ASTNode {
	public:
		StrASTNode (value_t value)
		: ASTNode(), value_(value)
		{}
		virtual ~StrASTNode() = default;


		virtual value_t print() const
		{
			return ("\"" + value_ + "\"");
		}	

 private:
  const value_t value_;

};

// Nil
class NilASTNode : public ASTNode {
	public:
		NilASTNode ()
		: ASTNode()
		{}
		virtual ~NilASTNode() = default;


		virtual value_t print() const
		{
			return ("");
		}	

};




///////////////////////////////////////////////////////////////////////////////
//		CREATION
///////////////////////////////////////////////////////////////////////////////

// Array Creation
class ArrCreateASTNode : public ASTNode {
	public:
		ArrCreateASTNode (ASTptr type, ASTptr size, ASTptr init) 
		: ASTNode(), type_(type), size_(size), init_(init)
		{}
		virtual ~ArrCreateASTNode(){
			delete type_;
			delete size_;
			delete init_;
		}

		virtual value_t print() const
		{
			return (type_->print() + "[" + size_->print() + "] of " + init_->print());
		}	

 	private:
 		const ASTptr type_; 
  		const ASTptr size_; // Single Expression, integer
  		const ASTptr init_; // Single Expression
};


// Record Fields
class RecordFieldASTNode : public ASTNode {
	public:
		RecordFieldASTNode (ASTptr id, ASTptr type, ASTptr fields = nullptr) 
		: ASTNode(), id_(id), type_(type), fields_(fields)
		{}
		virtual ~RecordFieldASTNode(){
			delete id_;
			delete type_;
			delete fields_;
		}

		virtual value_t print() const
		{
			if (fields_ == nullptr){
				return (id_->print() + "=" + type_->print());
			} else {
				return (id_->print() + "=" + type_->print() + ", " + fields_->print());
			}
		}	

	private:
		const ASTptr id_;
		const ASTptr type_;
		const ASTptr fields_; //Record Fields
};


// Record Creation
class RecCreateASTNode : public ASTNode {
	public:
		RecCreateASTNode (ASTptr type, ASTptr fields) 
		: ASTNode(), type_(type), fields_(fields)
		{}
		virtual ~RecCreateASTNode(){
			delete type_;
			delete fields_;
		}

		virtual value_t print() const
		{
			return (type_->print() + "{" + fields_->print() + "}");
		}	

 	private:
 		const ASTptr type_;
  		const ASTptr fields_;
};



// Object Creation

class ObjCreateASTNode : public ASTNode {
	public:
		ObjCreateASTNode (ASTptr type) 
		: ASTNode(), type_(type)
		{}
		virtual ~ObjCreateASTNode(){
			delete type_;
		}


		virtual value_t print() const
		{
			return ("new " + type_->print());
		}	

 	private:
 		const ASTptr type_;
};



///////////////////////////////////////////////////////////////////////////////
//		CALLS
///////////////////////////////////////////////////////////////////////////////
// Expression List
class ExpListASTNode : public ASTNode {
	public:
		ExpListASTNode (ASTptr exp, ASTptr list = nullptr) 
		: ASTNode(), exp_(exp), list_(list)
		{}
		virtual ~ExpListASTNode(){
			delete exp_;
			delete list_;
		}


		virtual value_t print() const
		{
			if (list_ == nullptr){
				return (exp_->print());
			} else {
				return (exp_->print() + ", " + list_->print());
			}
		}	

 	private:
 		const ASTptr exp_;
 		const ASTptr list_; // Expression List
};



// Function Call

class FunCallASTNode : public ASTNode {
	public:
		FunCallASTNode (ASTptr id, ASTptr list) 
		: ASTNode(), id_(id), list_(list)
		{}
		virtual ~FunCallASTNode(){
			delete id_;
			delete list_;
		}

		virtual value_t print() const
		{
			return (id_->print() + " (" + list_->print() + ")");
		}	

 	private:
 		const ASTptr id_;
 		const ASTptr list_;
};



// Method Call

class MethodCallASTNode : public ASTNode {
	public:
		MethodCallASTNode (ASTptr lval, ASTptr fun) 
		: ASTNode(), lval_(lval), fun_(fun)
		{}
		virtual ~MethodCallASTNode(){
			delete lval_; 
			delete fun_;
		}


		virtual value_t print() const
		{
			return (lval_->print() + "." + fun_->print());
		}	

 	private:
 		const ASTptr lval_; // Any L-Value (l.765)
 		const ASTptr fun_; // Takes a function call
};


///////////////////////////////////////////////////////////////////////////////
//		ARITHMETIC 
///////////////////////////////////////////////////////////////////////////////
// Template Binary Operator
template <template <typename> class O>
class OpASTNode : public NumASTNode {
	public:
		OpASTNode (std::string sign, ASTintptr left, ASTintptr right) 
		: NumASTNode(), sign_(sign), left_(left), right_(right)
		{}
		virtual ~OpASTNode(){
			delete left_;
			delete right_;
		}


	  	int eval() const
	  	{
	    	auto op = O<int>();
	    	return op(left_->eval(), right_->eval());
	  	}

		virtual value_t print() const
		{
			return (left_->print() + sign_ + right_->print());
		}	

	protected:
		const std::string sign_;
 		const ASTintptr left_; // Integer Literal (l.323)
 		const ASTintptr right_; // Integer Literal
};






















///////////////////////////////////////////////////////////////////////////////
//		L-VALUES 
///////////////////////////////////////////////////////////////////////////////

// Variable
class VarASTNode : public ASTNode {
	public:
		VarASTNode (ASTptr id)
		: ASTNode(), id_(id)
		{}
		virtual ~VarASTNode(){
			delete id_;
		}

		virtual value_t print() const
		{
			return (id_->print());
		}	

 	private:
  		const ASTptr id_;
};


// Dot Field
class DotFieldASTNode : public ASTNode {
	public:
		DotFieldASTNode (ASTptr lval, ASTptr id)
		: ASTNode(), lval_(lval), id_(id)
		{}
		virtual ~DotFieldASTNode(){
			delete lval_;
			delete id_;
		}

		virtual value_t print() const
		{
			return (lval_->print() + "." + id_->print());
		}	

 	private:
 		const ASTptr lval_;
  		const ASTptr id_;
};


// Array Element Notation
class ArrElASTNode : public ASTNode {
	public:
		ArrElASTNode (ASTptr lval, ASTptr exp)
		: ASTNode(), lval_(lval), exp_(exp)
		{}
		virtual ~ArrElASTNode(){
			delete lval_;
			delete exp_;
		}

		virtual value_t print() const
		{
			return (lval_->print() + "[" + exp_->print() + "]");
		}	

 	private:
 		const ASTptr lval_;
  		const ASTptr exp_;
};


///////////////////////////////////////////////////////////////////////////////
//		CONTROL STRUCTURES 
///////////////////////////////////////////////////////////////////////////////

// If-Then-Else
class IfASTNode : public ASTNode {
	public:
		IfASTNode (ASTptr ifExp, ASTptr thenExp, ASTptr elseExp = nullptr) 
		: ASTNode(), ifExp_(ifExp), thenExp_(thenExp), elseExp_(elseExp) // all inputs are expressions
		{}
		virtual ~IfASTNode(){
			delete ifExp_;
			delete thenExp_;
			delete elseExp_;
		}

		virtual value_t print() const
		{
			if (elseExp_ != nullptr){
				return ("if " + ifExp_->print() + " then " + thenExp_->print() + " else " + elseExp_->print());
			} else {
				return ("if " + ifExp_->print() + " then " + thenExp_->print());
			}
		}	

 	private:
  		const ASTptr ifExp_;
  		const ASTptr thenExp_;
  		const ASTptr elseExp_;
};


// While-Do
class WhileASTNode : public ASTNode {
	public:
		WhileASTNode (ASTptr whileExp, ASTptr doExp)
		: ASTNode(), whileExp_(whileExp), doExp_(doExp)
		{}
		virtual ~WhileASTNode(){
			delete whileExp_ ;
			delete doExp_;
		}

		virtual value_t print() const
		{
			return ("while " + whileExp_->print() + " do " + doExp_->print());

		}	

 	private:
  		const ASTptr whileExp_;
  		const ASTptr doExp_;
};


// For loop
class ForASTNode : public ASTNode {
	public:
		ForASTNode (ASTptr id, ASTptr start, ASTptr end, ASTptr exp) 
		: ASTNode(), id_(id), start_(start), end_(end), exp_(exp)
		{}
		virtual ~ForASTNode(){
			delete id_;
			delete start_;
			delete end_;
			delete exp_;
		}

		virtual value_t print() const
		{
			return ("for " + id_->print() + ":= " + start_->print() + " to " + end_->print() + " do " + exp_->print());
		}	

 	private:
  		const ASTptr id_;
  		const ASTptr start_; // expression that produces an integer
  		const ASTptr end_; // expression that produces an integer
  		const ASTptr exp_; // expression

};


// Break
class BreakASTNode : public ASTNode {
	public:
		BreakASTNode () // takes no input, but can only go in "exp" of a for loop, or in "doExp" in a while loop
		: ASTNode()
		{}
		virtual ~BreakASTNode() = default;


		virtual value_t print() const
		{
			return ("break");
		}	

};


// Let-In
class LetASTNode : public ASTNode {
	public:
		LetASTNode (ASTptr decs, ASTptr exps) 
		: ASTNode(), decs_(decs), exps_(exps)
		{}
		virtual ~LetASTNode(){
			delete decs_;
			delete exps_;
		}

		virtual value_t print() const
		{
			return ("let " + decs_->print() + " in " + exps_->print() + " end");

		}	

 	private:
  		const ASTptr decs_; // Declaration sequence (l.68)
  		const ASTptr exps_; // Expression sequence (l.292)
};



}//namespace ending