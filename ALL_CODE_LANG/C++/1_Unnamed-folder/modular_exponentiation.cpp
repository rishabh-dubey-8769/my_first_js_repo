#include<iostream>
using namespace std;
int mod_exp(int x,int n,int m){
    int prod=1,result,ans;
    for(int i=1;i<=n/2;i++){
        prod=prod*x;
    }
    // product_found
    if(n%2==0){
        result=prod*prod;
    }
    else{
        result=prod*prod*x;
    }
    // result_found
    if(result<m){
        ans=result;
    }
    else{
        while(result>=m){
            result=result-m;
        }
        ans=result;
    }
    // answer_found
    return ans;
}
int main(){
    int x,n,m;
    cout<<"enter x= ";
    cin>>x;
    cout<<"enter n= ";
    cin>>n;
    cout<<"enter m= ";
    cin>>m;
    cout<<"modular_exponentiation= "<<mod_exp(x,n,m);
}