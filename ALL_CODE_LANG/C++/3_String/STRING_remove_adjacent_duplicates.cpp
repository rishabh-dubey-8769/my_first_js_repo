// #include<iostream>
// #include<string>
// using namespace std;
// string rmv_adj_duplicte(string s) {
//     string result;
//     for (char c : s) {
//         if (!result.empty() && result.back() == c) {
//             result.pop_back();
//         } else {
//             result.push_back(c);
//         }
//     }
//     return result;
// }
// int main(){
//     string s;
//     cout <<"enter string value= ";
//     cin >>s;
//     s=rmv_adj_duplicte(s);
//     for(auto i:s){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*.......................................................................*/
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int removeDuplicates(int nums[10]) {
        int n=10;
        set<int>s;
        vector<int>v;
        vector<int>a;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto i:s){
            v.push_back(i);
        }
        for(auto i:v){
            a.push_back(i);
        }
        int arr[100]={0};
        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
    return a.size();
}
int main (){
    int nums[10]={0,0,1,1,1,2,2,3,3,4};
    int new_size=removeDuplicates(nums);
    for(int i=0;i<new_size;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}