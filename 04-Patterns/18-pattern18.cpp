#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    int counter = 0;
    while(row <= n){
        int col = 1;
        while (col<=row)
        {
            cout<<char('A' + counter)<<" ";
            col = col + 1;
            counter = counter + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}