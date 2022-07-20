#include<iostream>
using namespace std;

int main() {

    int n=1;
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout<<"First Case";
        break;
    
    case '1': switch (n)
                {
                case 1:
                    cout<<"Value of Number is: "<<n<<endl;
                    break;
                }
        break;
    
    default:
        cout<<"Default Case Called";
        break;
    }

    return 0;
}