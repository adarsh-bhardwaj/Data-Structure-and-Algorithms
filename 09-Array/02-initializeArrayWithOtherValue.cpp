#include<iostream>
using namespace std;

int main() {

    int arr[10];
    int n=10;

    for(int i=0;i<n;i++){
        arr[i] = -21;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}