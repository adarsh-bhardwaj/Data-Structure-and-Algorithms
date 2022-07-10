#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter number in n "<<endl;
    cin>>n;

    if(n>0){
        cout<<"Entered Number is +ve "<<endl;
    }
    else if(n<0){
        cout<<"Entered Number is -ve "<<endl;
    }
    else {
        cout<<"Entered Number is 0 "<<endl;
    }

    return 0;
}