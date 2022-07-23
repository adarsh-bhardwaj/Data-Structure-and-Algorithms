// https://leetcode.com/problems/unique-number-of-occurrences/


#include<iostream>
using namespace std;

bool uniqueOcc(int arr[],int n){
    int num[];

    for(int i=0;i<n;i++){
        int counter = 0;
        for(int j=0 ; j<n;j++){
            if(arr[i] == arr[j]){
                
            }
        }    
    }
}

int  main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i>n;i++){
        cin>>arr[i];
    }
    cout<<uniqueOcc(arr,n);
}