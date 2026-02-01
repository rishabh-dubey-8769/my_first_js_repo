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
    cout <<"Complement_code= "<<ans<<endl;
    n=ans;

    value=0,i=0;
    while (n!=0){
        bit=n%10;
        value=value+bit*pow(2,i);
        n=n/10;
        i++;
    }
    // output decimal value of complement
    cout <<"decimal= "<<value;
    return 0;
}