// #include<iostream>
// #include<string>/*method -1, partially working, less accurate*/
// #include<vector>
// using namespace std;
// string compress_string(string s){
//     string v;
//     int count[26]={0};
//     for(char c:s){
//         int index=c-'a';
//         count[index]++;
//          if(v.back()!=c){
//             v.push_back(c);
//             v.push_back(count[index]+'0');
//         } else {
//             v.pop_back();
//             v.back() = count[index] + '0';
//         }
//     }
//     return v;
// }
// int main (){
//     string s;
//     cout <<"enter string value= ";
//     cin >>s;
//     /*for e.g.let.......
//      I/P:aabbbc, then O/P:a2b3c
//     i.e.if a is occuring 2 times, then print'a2';
//     and if count=1, then print 'a' only don't print 1.
//     and if count = 13, then print= a13;*/
//     s=compress_string(s);
//     for(auto i:s){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*.................................................................*/
#include<iostream>
#include<string>  /*method -2, 0%-working,but more accurate*/
#include<vector>
using namespace std;
string compress_string(string s){
    string v;
    int count[26]={0};
    for(char c:s){
        int index=c-'a';
        count[index]++;
    }
   for(char c:s){
    int i=0;
    while(i<26){
        if(count[i]==1&&v.back()!=c){
            v.push_back(c);
        }
        else if(count[i]<10&&count[i]>1&&v.back()!=c){
            v.push_back(c);
            v.push_back(count[i]+'0');
        }
        else if(count[i]>=10&&v.back()!=c){
            int k=count[i]+'0';
            v.push_back(c);
            v.push_back(k/10);
            v.push_back(k%10);
        }
        i++;
    }
   } 
    return v;
}
int main (){
    string s;
    cout <<"enter string value= ";
    cin >>s;
    s=compress_string(s);
    for(auto i:s){
        cout <<i<<" ";
    }
    cout <<endl;
}