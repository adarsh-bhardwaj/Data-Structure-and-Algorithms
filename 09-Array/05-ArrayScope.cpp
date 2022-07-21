#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Element in update function:";
    arr[0] = 100;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[5]={10,20,30,40,50};
    int n = 5;
    update(arr,n);
    cout<<endl<<"Elements of Array in MAin Function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}