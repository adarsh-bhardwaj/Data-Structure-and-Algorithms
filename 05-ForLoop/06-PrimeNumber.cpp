#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    bool flag = 1;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"It is Prime Number";
    }
    else {
        cout<<"It is not Prime Number";
    }

    return 0;
}