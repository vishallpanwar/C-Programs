#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    if(a!=b){
       
        if(a>b){
            a=a-b;
        }

        if(b>a){
            b=b-a;
        }
    }
return a;
}

int main(){

    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    int hcf=gcd(a,b);

    cout<<"THe GCD of these numbers is:"<<hcf;

    return 0;
}