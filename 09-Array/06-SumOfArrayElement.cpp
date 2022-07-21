#include<iostream>
using namespace std;

int elementSum(int arr[],int n){

    int total = 0;

    for(int i=0;i<n;i++){
        total +=arr[i];
    }

    return total;
}


int main() {

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of Elements is "<<elementSum(arr,n)<<endl;
    return 0;
}