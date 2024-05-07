// C++ Program to demonstrate 
// the Compilation Error occurred
// due to violation of Static
// Data Memeber Rule
#include <iostream>
using namespace std;

class A {
	int x;

public:
	A() 
	{ 
	cout << "A's constructor called " << 
			endl; 
	}
};

class B {
	static A a;

public:
	B() 
	{ 
	cout << "B's constructor called " << 
			endl; 
	}
	static A getA() 
	{ 
	return a; 
	}
};

// Driver code
int main()
{
	B b;
	A a = b.getA();
	return 0;
}
