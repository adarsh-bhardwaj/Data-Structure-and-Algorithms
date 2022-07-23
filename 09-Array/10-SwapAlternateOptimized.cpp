#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<endl<<"Printing Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

void swapAlternate(int arr[],int n){
    for(int i=0;i<n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==0){
        cout<<"Array Size Must be more than 0";
        return 0;
    }
    cout<<"Array Befor Swap:"<<endl;
    print(arr,n);
    swapAlternate(arr,n);
    print(arr,n);
    return 0;
}