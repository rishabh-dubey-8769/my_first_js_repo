// #include <iostream>
// #include <vector>                    /*using logic */
// using namespace std;
// int main(){
//     vector<int>v={5,2,4,3,9};
//     int n=v.size();
//     int start=0;
//     int end=n-1;
//     while(start<end){
//         swap(v[start],v[end]);
//         start++;
//         end--;
//     }
//     cout <<"after reversing = "<<endl;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
//...............................................................................
// #include <iostream>
// #include <algorithm>                   /*using algorithm */
// #include <vector>
// using namespace std;
// int main (){
//     vector<int>v;
//     v.push_back(5);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(9);
//     reverse(v.begin(),v.end());
//     cout <<"after reversing = "<<endl;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
//...............................................................................
// #include <iostream>
// #include <vector>             /* using function */
// using namespace std;
// vector<int>reversed_(vector<int>v){
//     int start=0,end=v.size()-1;
//     while(start<end){
//         swap(v[start],v[end]);
//         start++,end--;
//     }
//     return v;
// }
// void print(vector<int>v){
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
// int main (){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     vector<int>ans=reversed_(v);
//     print(ans);
// }