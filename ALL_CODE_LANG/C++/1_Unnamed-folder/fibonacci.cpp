#include <iostream>
using namespace std;
void fibb(){
    int a,b,i,size,next;
    cout <<"enter size of fibbonacci=";
    cin >>size;
    a=0,b=1,i=3;
    cout <<"FIBBONACCI_SERIES="<<a<<" "<<b<<" ";
    while (i<=size){
        next=a+b;
        cout <<next<<" ";
        a=b;
        b=next;
        i++;
    }
}
int main(){
    fibb();
}
