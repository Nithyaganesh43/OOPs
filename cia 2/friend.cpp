#include<iostream>
using namespace std;
class avg{
    private:
    int a,b,c,d,e;
    public:
    void get(int a1,int b1,int c1,int d1,int e1){
    a=a1;
    b=b1;
    c=c1;
    d=d1;
    e=e1;
    }
    friend void disp(avg r);
    
};
void disp(avg r)
{
        cout<<(r.a+r.b+r.c+r.d+r.e)/5;
    }
int main(){
    avg r;
    r.get(45,65,25,35,260);
    
    avg r1;
    r1.get(45,65,25,35,260);
    disp(r);
    disp(r1);
}