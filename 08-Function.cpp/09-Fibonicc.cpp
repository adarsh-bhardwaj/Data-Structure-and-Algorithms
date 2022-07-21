#include<iostream>
using namespace std;

void fibonnaic(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" "; 
    for(int i = 1;i <=n-2;i++){
        int currentNumber = a + b;
        a = b;
        b = currentNumber;
        cout<<currentNumber<<" ";
    }
}

int main(){
    
    int n;
    cin>>n;

    fibonnaic(n);

    return 0;
}