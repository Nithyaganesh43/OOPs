#include <iostream>
using namespace std;
class A{
int *a;
public:
A(){
    a=new int;
    *a=10;
    cout<<"poranthuta\n";
}
void p(){
    cout<<*a;
}
~A(){
    delete a;
    cout<<"\nsethutan";
}
};
int main(){
    A a;
    a.p();
}