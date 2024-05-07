#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter three numbers";
cin>>a>>b>>c;
if(a>b&&a>c)
{
cout<<""<<a;
}
else if(b>c){
    cout<<"\n"<<b;

}
else{
    cout<<"\n"<<c;
}
}
