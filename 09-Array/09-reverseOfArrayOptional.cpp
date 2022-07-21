#include<iostream>
using namespace std;

void reverseArray(int arr[],int n) {
    int start = 0;
    int end = n-1;

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl<<endl;
    cout<<"Array Before Reverse: "<<endl;
    printArray(arr,n);
    reverseArray(arr,n);
    cout<<endl<<endl;
    cout<<"Array After Reverse: "<<endl;
    printArray(arr,n);

    return 0;
}