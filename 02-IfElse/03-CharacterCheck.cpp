#include<iostream>
using namespace std;

int main() {

    char ch;
    cout<<"Enter any Alphabet "<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"It is UpperCase "<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"It is lowercase "<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"It is number  "<<endl;
    }
    else {
        cout<<"It must be Some Special Character "<<endl;
    }
    return 0;
}