#include<iostream>
using namespace std;
int main(){
    //5 .int -> 6,2,8,5,0
    int arr[5]; //declaration
    // arr[0]=6;
    // arr[1]=2;
    // arr[2]=8;
    // arr[3]=5;
    // arr[4]=0;
    cout<<"enter array element : ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";
    arr[0]=100;
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
} 