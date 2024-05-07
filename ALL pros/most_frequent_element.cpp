#include<iostream>
using namespace std;
void sort(int *arr,int a){
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(*(arr+j)>*(arr+j+1)){
            int temp=*(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=temp;
        }
    }
}
}
void dupli(int *arr,int a){
for(int i=0;i<a;i++){
    for(int j=i+1;j<a;j++){
        if(*(arr+i)==*(arr+j)){
            printf("%d",*(arr+i));
        }
    }
}
}
void countdupli(int *arr,int a,int *b){
    int i=0;
for(int i=0;i<a;i++){
    for(int j=i+1;j<a;j++){
        if(*(arr+i)==*(arr+j)){i++;
            printf("%d",*(arr+i));
            
        }
    }
}
cout<<"\n"<<i;
*b=i;
}
int main(){
int a;
cout<<"enter the number of number:";
cin>>a;
int arr[a];
cout<<"enter the array elements:";
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
sort(&arr[0],a);
int b;
countdupli(&arr[0],a,&b);
cout<<b;
//countdupli(&arr[0],a);

}