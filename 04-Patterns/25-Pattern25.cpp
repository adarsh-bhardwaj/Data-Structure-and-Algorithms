#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int space = 1;
        while(space <= (row-1)){
            cout<<"  ";
            space = space + 1;
        }
        int col = 1;
        while (col<=(n-row+1))
        {
            cout<<row<<" ";
            col = col + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}