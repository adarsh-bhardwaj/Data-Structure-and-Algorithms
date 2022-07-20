#include<iostream>
using namespace std;

int main() {

    int n=2;

    while (1)
    {   
        switch(n){
            case 1:cout<<"First";
                exit(0);
            case 2:cout<<"Second";
                exit(0);
            
            default: cout<<"NoCase Present";
                exit(0);
        }
    }
    
    return 0;
}