#include<iostream>
using namespace std;

int main() {

    //declare of Array
    int arr[14] ;
    // Accessing of Array'
    cout<<"Value at 19th index: "<<arr[20]<<endl;

    //without Initialisation 
    int second[10];
    int n = 10;

    for(int i=0;i<n;i++){
        cout<<second[i]<<" ";
    }
    cout<<endl;
    //With Initialisation
    int third[10] = {20,30,50};
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;
    int fourth[10] = {0};
    for(int i=0;i<n;i++){
        cout<<fourth[i]<<" ";
    }
    return 0;
}