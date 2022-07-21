#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    return maxi;
}

int getMin(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    return mini;
}

int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum Number is: "<<getMax(arr,n)<<endl;
    cout<<"Minimum Number is: "<<getMin(arr,n)<<endl;

    return 0;
}