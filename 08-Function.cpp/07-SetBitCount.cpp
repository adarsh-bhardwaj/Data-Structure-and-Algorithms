#include<iostream>
using namespace std;

int setBit(int a,int b){
    int totalBit = 0;
    while(a || b){
        if(a & 1){
            totalBit++;
        }
        if(b & 1){
            totalBit++;
        }
        a >>= 1;
        b >>= 1;
    }
    return totalBit;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"Total SetBit is: "<<setBit(a,b)<<endl;

    return 0;
}