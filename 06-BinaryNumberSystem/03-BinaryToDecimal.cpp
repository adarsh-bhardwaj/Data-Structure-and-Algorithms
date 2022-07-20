#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cin>>n;

    int ans=0;

    for(int i=0;n;i++){
        int digit = n%10;
            if(digit){
                ans = pow(2,i) + ans;
            }
        n = n/10;
    }

    cout<<ans<<endl;

}