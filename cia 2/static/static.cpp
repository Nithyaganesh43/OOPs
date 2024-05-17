#include<iostream>
using namespace std;
class Area
{
    static int a;
    int l,b;
    public:
    Area(){
        l=10;
        b=145;
        a++;
    }
    friend void p(Area& t);
};
void p(Area& t){
        cout<<t.l<<t.b;
        cout<<"\n"<<Area::a;
        cout<<"\n";
}
int Area::a=0;
int main(){
Area a,b,c,d;
p(a);
    }