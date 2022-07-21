#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    cout<<"-------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"-------------------"<<endl;
}

int main(){
    int arr[10]= {10,20,30,40,50,60,70,80,90,100};
    int n=10;
    cout<<sizeof(arr)/sizeof(int)<<endl;
    printArray(arr,n);
    return 0;
}