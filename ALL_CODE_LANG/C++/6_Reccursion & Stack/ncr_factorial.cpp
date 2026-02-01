#include <iostream>
using namespace std;
int  fact(int n){
    int i=1,fact=1;
    while (i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}

int ncr(int n,int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);
    int ans=num/denom;
    return ans;
}

int main (){
    int n;
    cout <<"enter n=";
    cin >>n;
    int r;
    cout <<"enter r=";
    cin >>r;
    cout <<n<<"C"<<r<<"="<<ncr(n,r)<<endl;
}