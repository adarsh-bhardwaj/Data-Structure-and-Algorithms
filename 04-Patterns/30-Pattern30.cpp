#include<iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=(n-row+1)){
            cout<<col<<" ";
            col++;
        }

        int space = row + row - 2;
        while(space){
            cout<<"* ";
            space--;
        }
        // space = row - 1;
        // while (space)
        // {
        //     cout<<"* ";
        //     space --;
        // }
        col--;
        while(col){
            cout<<col<<" ";
            col--;
        }
        cout<<endl;
        row = row + 1;
    }


    return 0;
}