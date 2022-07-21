#include<iostream>
using namespace std;

long long int fact(int n){
    long long int ans=1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}

int main(){

    int n,r;
    cin>>n>>r;

    long long int ans = fact(n)/(fact(r)*fact(n-r));

    cout<<"Answer is: "<<ans<<endl;
    return 0;
}