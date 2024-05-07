#include <iostream>
#include <cstring> // For gets
using namespace std;
class emplo{
    string name;
    int reg;
    int salary;
    public:
    void getdata();
    void putdata();
};
void emplo::getdata(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"\nENter regester number :";
    cin>>reg;
    cout<<"\nEnter employe salary :";
    cin>>salary;
}
void emplo::putdata(){
    cout<<"name:"<<name<<"\nreg No:"<<reg<<"\nsalary:"<<salary;
}
int main(){
    int n;
    cout<<"enter no of employes :";
    cin>>n;
    emplo e[n];
    cout<<"Enter employe detailes:\n--------------------------------------------------------------\n";
    for(int i=0;i<n;i++){
        e[i].getdata();
    }
    cout<<"Displaying employe detailes:\n--------------------------------------------------------------\n";
    for(int i=0;i<n;i++){
        e[i].putdata();
    }
}