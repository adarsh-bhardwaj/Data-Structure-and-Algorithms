#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        float far = (i*(9.0/5))+32 ;
        cout<<i<<" C  = "<<far<<" F "<<endl;
        i=i+1;
    }
}