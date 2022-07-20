#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cin>>n;

    if(n<0){
        n = pow(2,16)+n;
    }
    cout<< n<<endl;
    unsigned long long int ans = 0;

    for(int i=0;n;i++){
        int bit = n&1;
        ans = (pow(10,i)*bit) + ans;
        n = n >>1;
    }

    cout<<ans<<endl;
}