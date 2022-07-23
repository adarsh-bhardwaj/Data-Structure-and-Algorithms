#include<iostream>
using namespace std;

void Inseration(int arr[],int arr2[],int n,int m){

    for(int i = 0;i<n;i++){
        for(int j=i;j<m;j++){
            if(arr[i] == arr2[j]){
                cout<<arr[i]<<" ";
                break;
            } 
        }
    }
}

int  main(){
    int n,m;
    cin>>n>>m;
    int arr[1000],arr2[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    Inseration(arr,arr2,n,m);
}