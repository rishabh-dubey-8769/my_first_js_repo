/*Replace spaces by '@40' */
#include<iostream>
#include<deque>
using namespace std;
deque<string>new_string(deque<string>s,int n){
    for(int i=0;i<n;i++){
        if(s[i]=="\0"){
            s[i]="@40";
            s.push_back(s[i]);
        }
        else{s.push_back(s[i]);}
    }
    return s;
}
int main (){
    deque<string>s;
    s.push_back("YOU");
    s.push_back("ARE");
    s.push_back("\0");
    s.push_back("VERY");
    s.push_back("\0");
    s.push_back("NICE");
    int n=s.size();
    s=new_string(s,n);
    for(int i=0;i<n;i++){
        cout <<s.front()<<" ";
        s.pop_front();
    }
}






















