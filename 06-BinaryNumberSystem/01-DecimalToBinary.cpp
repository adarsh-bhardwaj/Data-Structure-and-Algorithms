#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cin>>n;

    float ans = 0;
    
    for(int i=0; n!=0; i++){
        int bit = n & 1;
        ans = (pow(10,i) * bit ) + ans;
        n = n >> 1;
    }

    cout<<"Answer is: "<<ans<<endl;
}