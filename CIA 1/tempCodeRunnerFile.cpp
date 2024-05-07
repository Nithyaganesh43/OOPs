#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Size : ";
    cin>>n;
    int *arr=new int[n+1];
    cout<<"Enter the data :";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int r;
    cout<<"enter waht element to replace ";
    cin>>r;
    int t;
    cout<<" waht element to be replaced ";
    cin>>t;
    replace(arr,arr+n,t,r);
    for(int i=0;i<n;i++) {
        cout<<arr[i];
    }
    delete[] arr;
    return 0;
}