#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int x){
        this->x=x;
    }
    void operator -(){
        x=-x;//operating overloding nedakum edam
    }
    void print(){
        cout<<x;
    }
};
int main(){
    A A1(10);
    -A1;
    A1.print();
}