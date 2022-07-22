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
    int f_index = 0;
    int s_index = 1;

    for(int i=0;i< n/2 ; i++){
        swap(arr[f_index],arr[s_index]);
        f_index += 2;
        s_index += 2;
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Befor Swap:"<<endl;
    print(arr,n);
    swapAlternate(arr,n);
    print(arr,n);
    return 0;
}