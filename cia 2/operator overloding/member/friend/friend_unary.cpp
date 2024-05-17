#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int x){
        this->x=x;
    }
    friend A operator -(A a){
        return A(-a);
    }
    void print(){
        cout<<x;
    }
};
int main(){
    A A1(10);
    A1=-A1;
    A1.print();
}