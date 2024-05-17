#include <iostream>
#include <stdio.h>
using namespace std;
 
class Test {
public:
    Test() {}
    Test( Test& t)
    {
        cout << "Copy ructor called " << endl;
    }
 
    Test& operator=( Test& t)
    {
        cout << "Assignment operator called " << endl;
        return *this;
    }
};
 
// Driver code
int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;
    getchar();
    return 0;
}