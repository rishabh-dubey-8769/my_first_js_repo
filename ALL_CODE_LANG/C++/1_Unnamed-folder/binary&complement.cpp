#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n,j,bit,value,i=0,ans=0;
    cout <<"enter number=";
    cin >>n;
    while (n!=0){
        bit=n&1;
        ans=ans+bit*pow(10,i);
        n=n>>1;
        i++;
    }
    // output binary value of complement
    cout <<"binary value= "<<ans<<endl;
    n=ans;
    ans=0,i=0;
    while (n!=0){
        bit=n%10;
        if(bit==0){
            bit=1;
        }
        else{
            bit=0;
        }
        ans=ans+bit*pow(10,i);
        n=n>>1;
        i++;
    }
    n=ans;
    ans=0,i=0;
    while (n!=0){
        bit=n%10;
        ans=ans+bit*pow(2,i);
        n=n/10;
        i++;
    }
    // output decimal value of complement
    cout <<"decimal= "<<ans;
    return 0;
}