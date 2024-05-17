#include <iostream>
using namespace std;
class A
{
int val;
public:
void p(){
    cout<<val;
}
A(){
    val=0;
}
A(A& a){
    val=a.val;
}
A(int a){
    val=a;
}
~A(){
    cout<<"\nDestroied"<<val;
}
};
int main(){
A a1;
a1.p();
A a2(10);
a2.p();
A a3(a2);
a3.p();
}