#include<iostream>
using namespace std;

void reverseArray(int arr[],int n) {
    for(int i=0;i< n/2; i++){
        int temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
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
#include<iostream>
using namespace std;

void reverseArray(int arr[],int n) {
    for(int i=0;i< n/2; i++){
        int temp = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
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