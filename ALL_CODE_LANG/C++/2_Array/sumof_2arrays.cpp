#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
int main (){
    vector<int>a={3,2,1,5,4};
    vector<int>b={7,2,9};
    deque<int>v;
    int m=a.size();
    int n=b.size();
    int i=m-1,j=n-1,sum;
    int val1=a[i];
    int val2=b[j];
    int carry=0;
    while(i>=0&&j>=0){
        sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        v.push_front(sum);
        i--,j--;
    }
    while(i>=0){
        sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        v.push_front(sum);
        i--;
    }
    while(j>=0){
        sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        v.push_front(sum);
        j--;
    }
    while(carry!=0){
        sum=carry;
        carry=sum/10;
        sum=sum%10;
        v.push_front(sum);
    }
    /*To add in reverse order..............optional*/
    reverse (v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout <<endl;}