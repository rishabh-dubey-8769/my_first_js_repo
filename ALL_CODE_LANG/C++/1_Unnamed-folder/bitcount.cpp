#include <iostream>
using namespace std;
int main (){
    int n,i=1,bit,count=0;
    cout <<"enter n=";
    cin >>n;
    while (n!=0){
        bit=n&1;
        if(bit==1)
       { count++;}
        n>>=1;
    }
    cout <<"Bit_COUNT= "<<count;
}