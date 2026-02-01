#include<iostream>
using namespace std;
char get_character(string s,int n){
    int arr[26]={0};
    int no;
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch>='a'&&ch<='z'){
            no=ch-'a';
        }
        if(ch>='A'&&ch<='Z'){
            no=ch-'A'+'a';
        }
        arr[no]++;
    }
    int max=0,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    return ans+'a';
}
int main (){
    string s;
    cout<<"enter word= ";
    cin >>s;
    int n=s.size();
    cout <<"max_occuring_char= "<<get_character(s,n);
}