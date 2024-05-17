#include<iostream>
using namespace std;
class complex
{
    float real,img;
    public:
    complex(float a=0,float b=0){
        real=a;
        img=b;
    }
    complex operator +(complex x){
        complex temp;
        cout<<"\n"<<real<<"\n"<<x.real;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    void print(){
        cout<<"\n"<<real <<" + "<<img<<"i";
    }
};
int main(){
    complex A1(10,10);
    complex A2(12,12);
    complex A3= A2 + A1;
    A3.print();
}
