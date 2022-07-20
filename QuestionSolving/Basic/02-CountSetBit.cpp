#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
     int size = sizeof(n)*8;
        int counter=0,loop=0;
        while(size != 0){
            
            if(n & (1<<loop)){
                counter++;
            }
            loop++;
            size --;
        }
    cout<<counter;

    return 0;
}