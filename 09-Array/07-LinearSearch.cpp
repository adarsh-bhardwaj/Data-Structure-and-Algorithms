#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++) {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Number to Found it"<<endl;
    cin>>key;
    
    int found = linearSearch(arr,n,key);

    if(found >0){
        cout<<"Found at index Number: "<<found;
    }
    else{
        cout<<"Element Found in array"<<endl;
    }

    return 0;
}