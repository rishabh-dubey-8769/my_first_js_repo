// #include<iostream>                    /*for your kind information*/
// using namespace std;                        /*string and array*/
// int main (){
//     char val1[10]={'2','4','\0','\0','6','\0','5'};
//     int n=sizeof(val1)/sizeof(char);
//     for(int i=0;i<n;i++){
//         cout <<val1[i]<<" ";
//     }
//     cout <<endl;
//     string val2="sudhanshu\0she\0khar";
//     cout <<val2<<endl;
//     cout <<endl;
// }
/*..............................................................................*/


#include<iostream>
#include<deque>
using namespace std;
deque<string>reverse(deque<string>v,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(v[s],v[e]);
        s++,e--;
    }
    return v;
}
int main (){
    deque<string>v;
    v.push_back("YOU");
    v.push_back("ARE");
    v.push_back("VERY");
    v.push_back("NICE");
    int n=v.size();
    v=reverse(v,n);
    for(int i=0;i<n;i++){
        cout <<v.front()<<" ";
        v.pop_front();
    }
    cout <<endl;
}