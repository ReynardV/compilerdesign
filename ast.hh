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
  using value_t = std::string;  // All values will be floating-point
  using ASTptr = const ASTNode*; // Can't use smart ptr in union :(

  ASTNode() = default;
  virtual ~ASTNode() = default;
  virtual value_t print() const = "";
};

///////////////////////////////////////////////////////////////////////////////
// A node type that evaluates identifiers:
class IdASTNode : public ASTNode {
	public:
		IdASTNode (value_t value)
		: ASTNode(), value_(value)
		{}
		virtual ~IdASTNode() = default;

	virtual value_t print() const
	{
		return ("[ " + value_ + " ]");
	}	

 private:
  const value_t value_;

};

///////////////////////////////////////////////////////////////////////////////
//		TYPE DECLARATIONS
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Type IDs. Right now they're functionally like IDs, but they have some additional restrictions, so 
// it's probably best to make it a separate type of node

class TypeIdASTNode : public IdASTNode {

	private:
		const value_t value_;
}

///////////////////////////////////////////////////////////////////////////////
// A node type that evaluates type declarations:
class TypeDecASTNode : public ASTNode {
	public:
		TypeDecASTNode (ASTptr id, ASTptr type) //type can be Type-Id, Array of, or Record Types
		: ASTNode(), id_(id), type_(type)
		{}
		virtual ~TypeDecASTNode() = default;


	virtual value_t print() const
	{
		return ("[ type " + id_ + " = " + type_ + " ]");
	}	

	private:
		const value_t id_;
		const value_t type_;

};

///////////////////////////////////////////////////////////////////////////////
// Array of Type:
class ArrayTypeASTNode : public ASTNode {
	public:
		ArrayTypeASTNode (ASTptr type) // type should be TypeId
		: ASTNode(), type_(type)
		{}
		virtual ~ArrayTypeASTNode() = default;


	virtual value_t print() const
	{
		return ("[ Array of " + type_ + " ]");
	}	

	private:
		const value_t type_;

};

///////////////////////////////////////////////////////////////////////////////
// Records Fields:
class RecFieldASTNode : public ASTNode {
	public:
		RecFieldASTNode (ASTptr id, ASTptr type, ASTptr fields = nullptr) //fields should be Records Field
		: ASTNode(), id_(id), type_(type), fields_(fields)
		{}
		virtual ~RecFieldASTNode() = default;


	virtual value_t print() const
	{
		if (fields == nullptr){
			return (id_ + ": " + type_);
		} else {
			return (id_ + ": " + type_ + ", " + fields_);
		}
	}	

	private:
		const value_t id_;
		const value_t type_;
		const value_t fields_
};


///////////////////////////////////////////////////////////////////////////////
// Record types:
class RecTypeASTNode : public ASTNode {
	public:
		RecTypeASTNode (ASTptr fields) //fields should be Records Field
		: ASTNode(), fields_(fields)
		{}
		virtual ~RecTypeASTNode() = default;


	virtual value_t print() const
	{

		return ("{" + fields_ + "}");
	
	}	

	private:

		const value_t fields_
};

///////////////////////////////////////////////////////////////////////////////
//		VARIABLE DECLARATION
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Variable Declaration (Short)
class SVarDecASTNode : public ASTNode {
	public:
		SVarDecASTNode (ASTptr id, ASTptr exp) //exp should be an expression
		: ASTNode(), id_(id), exp_(exp)
		{}
		virtual ~SVarDecASTNode() = default;


	virtual value_t print() const
	{
		return ("[ var " + id_ + " := " + exp_ + " ]")
	}	

	private:
		const value_t id_;
		const value_t exp_;
};

///////////////////////////////////////////////////////////////////////////////
// Variable Declaration (Long)
class LVarDecASTNode : public ASTNode {
	public:
		LVarDecASTNode (ASTptr id, ASTptr type, ASTptr exp) //exp should be an expression
		: ASTNode(), id_(id), type_(type), exp_(exp)
		{}
		virtual ~LVarDecASTNode() = default;


	virtual value_t print() const
	{
		return ("[ var " + id_ + " : " + type_ + " := " + exp_ + " ]")
	}	

	private:
		const value_t id_;
		const value_t type_;
		const value_t exp_;
};


///////////////////////////////////////////////////////////////////////////////
//		FUNCTION DECLARATION
///////////////////////////////////////////////////////////////////////////////

// Procedure Declaration 
class ProcDecASTNode : public ASTNode {
	public:
		ProcDecASTNode (ASTptr id, ASTptr fields, ASTptr exp) 
		: ASTNode(), id_(id), fields_(fields), exp_(exp)
		{}
		virtual ~ProcDecASTNode() = default;


	virtual value_t print() const
	{
		return ("[ function " + id_ + " (" + fields_ + ") = " + exp_ + " ]")
	}	

	private:
		const value_t id_;
		const value_t fields_;
		const value_t exp_;
};



// Function Declaration 
class FuncDecASTNode : public ASTNode {
	public:
		FuncDecASTNode (ASTptr id, ASTptr fields, ASTptr type, ASTptr exp) 
		: ASTNode(), id_(id), fields_(fields), type_(type), exp_(exp)
		{}
		virtual ~FuncDecASTNode() = default;


	virtual value_t print() const
	{
		return ("[ function " + id_ + " (" + fields_ + "): " + type_ + " = " + exp_ + " ]")
	}	

	private:
		const value_t id_;
		const value_t fields_;
		const value_t type_;
		const value_t exp_;
};


///////////////////////////////////////////////////////////////////////////////
//		LITERALS 
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Integers
class NumASTNode : public ASTNode {
 public:
  NumASTNode(value_t value)
   : ASTNode(), value_(value), numValue_(atoi(value))
  {}
  virtual ~NumASTNode() = default;




  virtual value_t print() const
  {
    return ("[ " + value_ + " ]");
  }


 private:
  const value_t value_;
  const int numValue_;
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
		return ("[ \"" + value_ + "\" ]");
	}	

 private:
  const value_t value_;

};






}//namespace ending