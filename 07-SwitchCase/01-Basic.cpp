#include<iostream>
using namespace std;

int main() {

    int n=2;
    char ch = '1';

    switch (n)
    {
    case 1:
        cout<<"First Case";
        break;
    
    case 2:
        cout<<"Second Case";
        break;
    
    default:
        cout<<"Default Case Called";
        break;
    }

    return 0;
}