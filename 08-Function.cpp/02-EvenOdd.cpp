#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return true;
    }
    
    return false;
}

int main(){

    int n;
    cin >> n;

    if(isEven(n)){
        cout<<"Entered Number is Even"<<endl;
    }
    else{
        cout<<"Entered Number is Odd"<<endl;
    }

    return 0;
}