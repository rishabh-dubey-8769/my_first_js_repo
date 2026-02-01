#include<bits/stdc++.h>
using namespace std;
void check(){
    string s;
    cout<<"Enter reference string= ";
    cin>>s;
    int k;
    cout<<"Enter frame size= ";
    cin>>k;
    int n=s.size();
    deque<int>q;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int num=s[i]-'0';
        unordered_set<int>st;
        for(auto p:m){st.insert(p.second);}
        if(!st.count(num)){
            st.insert(num);
            if(q.size()<k){q.push_back(i);m[i]=num;}
            else{int ptr=q.front();q.pop_front();m[ptr]=num;q.push_back(ptr);}
            for(auto p:m){cout<<p.second<<" ";}
            cout<<endl;
        }
    }
}
int main(){
    check();
}