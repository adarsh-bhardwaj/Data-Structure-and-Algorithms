#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    cout<<"Counting Will Print Below: "<<endl;

    int i = 1;
    for(;;) {
        if(i<=n){
            cout<<i<<endl;
        }
        else {
            break;
        }

        i = i + 1;
    }

    return 0;
}