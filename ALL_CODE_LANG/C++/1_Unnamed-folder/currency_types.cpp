#include <iostream>
using namespace std;
int main (){
    int type[50],n,size,i;
    cout <<"Enter Amount=";
    cin>>n;
    cout <<"How many types you want=";
    cin >>size;
    for(int i=1;i<=size;i++){
        if(n>=0) 
    {cout <<"Type["<<i<<"]=";
    cin >>type[i];}
    }
    cout <<endl;
    i=1;
    while (i<=size){
        cout <<"Type["<<i<<"]="<<n/(type[i])<<endl;
        n=n%(type[i]);
        i++;
    }
    cout <<endl;
}