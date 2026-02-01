// #include<iostream>
// #include<vector>                            /*method - 1*/
// #include<deque>                          /* not working */
// using namespace std;
// vector<string>remove_by_part(vector<string>s,vector<string>p,int n,int m){
//     vector<string>v;
//     for(int i=0;i<n;i++){
//         bool found=0;
//         for(int j=0;j<m;j++){
//             int a=i,b=j,count=0;
//             while(a<n&&b<m){
//                 if(s[a]==p[b]){count++;}
//                 else{break;}
//                 a++,b++;
//             }
//             if(count==m){
//                 found=1;
//                 i=i+m-1;
//                 break;
//             }
//         }
//         if(found==0){
//                 v.push_back(s[i]);
//         }
//     }
//     return v;
// }
// int main (){
//     /* "S"----Actual_word*/
//     /* "P"----part to be removed (in a pair or group)*/
//     // vector<string>s={"d","a","a","b","c","b","a","a","b","c","b","c"};
//     // vector<string>p={"a","b","c"};
//     vector<string>s={"a","x","x","x","x","y","y","y","y","b"};
//     vector<string>p={"x","y"};
//     int n=s.size();
//     int m=p.size();
//     vector<string>_arr;
//     _arr=remove_by_part(s,p,n,m);
//     for(int i=0;i<_arr.size();i++){
//         cout <<_arr[i]<<endl;
//     }
//     cout <<endl;             
// }
/*.........................................................................................*/
#include<iostream>
#include<vector>
#include<string> 
using namespace std;
string remove_by_parts(string s,string part){
    while(s.length()!=0&&s.find(part)<s.length()){
        s.erase(s.find(part),part.size());
    }
    return s;
}
int main (){
    string s;
    s.push_back("a");
    s.push_back("x");
    s.push_back("x");
    s.push_back("x");
    s.push_back("x");
    s.push_back("y");
    s.push_back("y");
    s.push_back("y");
    s.push_back("y");
    s.push_back("b");
    part.push_back("x");
    part.push_back("y");
    remove_by_parts(s,part);
    for(int i:s){
        cout <<i<<endl;
    }
    cout <<endl;  
}