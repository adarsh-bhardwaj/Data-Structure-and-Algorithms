#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int sum=0,product = 1;
    while(n!=0){
        int rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }

    cout<<product-sum<<endl;

    return 0;
}