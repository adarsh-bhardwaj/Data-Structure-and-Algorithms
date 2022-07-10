#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i=2;

    bool flag = 1;
    if(n==0 || n==1){
        cout<<"Number is not Prime";
    }
    else {
        while(i <=  n/2){
            if(n%i ==  0){
                cout<<"Number is not Prime"<<endl;
                flag = 0;
                break;
            }
            i = i+1;
        }

        if(flag){
            cout<<"It is a Prime Number"<<endl;
        }
    }
}