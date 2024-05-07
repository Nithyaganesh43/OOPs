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
cout<<"\n1.the largest three elements in an array: ";
    cout<<" "<<arr[a-1];

cout<<"\n2.the largest three elements in an array: ";
for(int i=a-1;i>=a-3;i--)
{
    cout<<" "<<arr[i];
}
cout<<"\n3.the second largest element in an array of integers: ";
    cout<<" "<<arr[a-2];
cout<<"\nEnter value of k:";
int k;
cin>>k;
cout<<"4.the largest "<<k<<"th elements in an array: ";
    cout<<" "<<arr[a-k];
    cout<<"\n5.find the second smallest elements in a given array of integers: ";
    cout<<" "<<arr[1];

}