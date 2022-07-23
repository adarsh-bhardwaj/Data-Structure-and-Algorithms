#include<iostream>
using namespace std;

int uniqueNumber(int arr[],int n){

    bool ans = 1;
    int number;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j] && i != j){
                ans = 0;
                break;
            }
        }
        if(ans){
            number = arr[i];
            break;
        }
        ans = 1;
    }
    return number;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Answer is: "<<uniqueNumber(arr,n);
}