#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"Enter Operator: ";
    cin>>op;
    cout<<"Enter First Value: ";
    cin>>a;
    cout<<"Enter Second Value: ";
    cin>>b;

    switch (op)
    {
    case '+':
        cout<<"Answer is: "<<a+b<<endl;
        break;
    case '-':
        cout<<"Answer is: "<<a-b<<endl;
        break;
    case '*':
        cout<<"Answer is: "<<a*b<<endl;
        break;
    case '/':
        if(a==0){
            cout<<"First Value can't be zero";
            break;
        }
        cout<<"Answer is: "<<a/b<<endl;
        break;
    case '%':
        if(a==0){
            cout<<"First Value can't be zero";
            break;
        }
        cout<<"Answer is: "<<a%b<<endl;
        break;
    
    default:
        cout<<"Invalid Operation";
        break;
    }
}