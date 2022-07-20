#include<iostream>
using namespace std;

int main(){ 
    
    int n,exp;
    cin>>n;
    
    
    while (n!=0)
    {
        if(n>=100){
            exp = 1;
        }
        else if(n>=50) {
            exp = 2;
        }
        else if(n>=20){
            exp = 3;
        }
        else{
            exp =4;
        }
        switch (exp)
        {
        case 1:
            cout<<"Notes of 100's required is: "<<n/100<<endl;
            n = n % ((n/100) * 100);
            break;
        case 2:
            cout<<"Notes of 50's required is: "<<n/50<<endl;
            n = n % ((n/50) * 50);
            break;
        case 3:
            cout<<"Notes of 20's required is: "<<n/20<<endl;
            n = n % ((n/20) * 20);
            break;
        case 4:
            cout<<"Notes of 1's required is: "<<n/1<<endl;
            n = n % ((n/1) * 1);
            break;
        
        default:
            break;
        }
    }
    return 0;
}