#include <stdio.h>
#ifndef CLASS_A
#define CLASS_A
class A 
{
private:
	int id;
	static int count;
public:
	A(); 
	~A();
// rules of three: copy constructor, assignment and destructor supposed to 
// go together
	A(const A &other); 
	A& operator=(const A  &rhs);
	int getId() { return id;};
	void setId(int inId) { id = inId;};
	
};


#endif
