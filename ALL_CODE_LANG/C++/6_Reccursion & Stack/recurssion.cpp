// #include <iostream>
// using namespace std;
// void fncn(int n){
//     if(n==1){cout<<1<<endl;return ;}
//     fncn(n-1);
//     cout<<n<<endl;
// }
// int main (){
//     int n=3;
//     fncn(n);
// }
//...................................................
// #include<iostream>
// using namespace std;
// void print(int &n){
//     if(n==1){
//         return ;
//     }
//     if((n&1)==0){cout<<n<<endl;}
//     print(--n);
// }
// int main(){
//     int n=10;
//     print(n);
// }
//.....................................................
// #include<iostream>
// using namespace std; 
// int sum(int n){
//     if(n==0)return 0;
//     return n+sum(n-1);
// }
// int main(){
//     int n= 5;
//     cout<<"sum is = "<<sum(n)<<endl;
// }
//.....................................................
// #include<iostream>
// using namespace std; 
// int fact(int n){
//     if(n==1)return 1;
//     return fact(n-1)+n*n;
// }
// int main(){
//     int n= 3;
//     cout<<"fact is = "<<fact(n)<<endl;
// }
//...............................................
// #include<iostream>
// using namespace std;
// int exp(int base,int n){
//     if(n==1)return base;
//     return base*exp(base,n-1);
// }
// int main (){
//     int n=3;
//     int base=4;
//     cout<<exp(base,n);
// }
//.....................................................
// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n==1)return 1;
//     if(n==0)return 0;
//     return fib(n-1)+fib(n-2);
// }
// int main (){
//     int n=6;
//     cout<<"fibonacci value= "<<fib(n);
// }
//............................................................
// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n==1)return 1;
//     if(n==2)return 2;
//     return fib(n-1)+fib(n-2);
// }
// int main (){
//     int n=6;
//     cout<<"fibonacci value= "<<fib(n);
// }
//............................................................
// #include<iostream>
// using namespace std;
// int print(int *arr,int k){
//     if(k==0){return arr[0];}
//     return arr[k]+print(arr,k-1);
// }
// int main (){
//     int arr[]={3,6,5,2,7};
//     int size=sizeof(arr)/sizeof(int);
//     cout<<print(arr,size-1);
// }
//.........................................................
// #include<iostream>
// using namespace std;
// int mini(int *arr,int n){
//     if(n==0){return arr[0];}
//     return min(arr[n],mini(arr,n-1));
// }
// int main(){
//     int arr[]={36,5,24,9,8};
//     cout<<mini(arr,4);
// }
//.........................................................
// #include<iostream>
// using namespace std;
// bool palindrome(string s,int st,int end){
//     if(st>=end){return 1;}
//     if(s[st]!=s[end]){return 0;}
//     return palindrome(s,st+1,end-1);
// }
// int main (){
//     string s="jahaj";
//     int n=s.size();
//     cout<<palindrome(s,0,4);
// }
//..........................................................
// #include<iostream>
// using namespace std;
// int vowelcheck(string s,int n){
//     if(n==-1){return 0;}
//     if(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u'){return 1+vowelcheck(s,n-1);}
//     return vowelcheck(s,n-1);
// }
// int main (){
//     string s="eohit";
//     cout<<vowelcheck(s,4);
// }
//.............................................................
// #include <iostream>
// using namespace std;
// void reverse(string &s,int st,int end){
//     if(st>=end)return ;
//     swap(s[st],s[end]);
//     reverse(s,st+1,end-1);
// }
// int main (){
//     string s="raman";
//     reverse(s,0,4);
//     cout<<s;
// }
//...........................................................
// #include<iostream>
// using namespace std;
// void lowertoupper(string &s,int n){
//     if(n<0)return ;
//     s[n]=s[n]-'a'+'A';
//     lowertoupper(s,n-1);
// }
// int main (){
//     string s="raman";
//     lowertoupper(s,4);
//     cout<<s<<endl;
// }
//................................................
// #include<iostream>
// using namespace std;
// bool present(int *arr,int key,int n){
//     if(n<0){return 0;}
//     if(arr[n]==key)return 1;
//     present(arr,key,n-1);
// }
// int main(){
//     int arr[]={4,5,3,6,2};
//     cout<<present(arr,6,4);
// }
//................................................
// #include<bits/stdc++.h>
// using namespace std;
// bool binarysearch(int *arr,int key,int st,int end){
//     if(st>end){return 0;}
//     int mid=st+(end-st)/2;
//     if(arr[mid]==key)return 1;
//     else if(arr[mid]<key){binarysearch(arr,key,mid+1,end);}
//     else{binarysearch(arr,key,st,mid-1);}
// }
// int main (){
//     int arr[]={3,5,6,2,9};
//     sort(arr,arr+5);
//     cout<<binarysearch(arr,27,0,4);
// }
//.................................................
// #include<bits/stdc++.h>
// using namespace std;
// void mergesort(int *arr,int st,int mid,int end){
//     int left=st,right=mid+1,index=0;
//     vector<int>temp;
//     while(left<=mid&&right<=end){
//         if (arr[left] <= arr[right]) temp.push_back(arr[left++]);
//         else temp.push_back(arr[right++]);
//     }
//     while (left <= mid) temp.push_back(arr[left++]);
//     while (right <= end) temp.push_back(arr[right++]);
//     index=0;
//     while(st<=end){arr[st++]=temp[index++];}
// }
// void partition(int *arr,int st,int end){
//     if(st==end)return ;
//     int mid=st+(end-st)/2;
//     partition(arr,st,mid);
//     partition(arr,mid+1,end);
//     mergesort(arr,st,mid,end);
// }
// int main (){
//     int arr[]={2,8,3,1,2,5,4,6,7};
//     partition(arr,0,8);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//.....................................................
// #include<iostream>
// using namespace std;
// int pivotindex(int *arr,int st,int end){
//     int posn=st;
//     for(int i=st;i<=end;i++){
//         if(arr[i]<=arr[end]){swap(arr[i],arr[posn++]);}
//     }
//     return posn-1;
// }
// void quicksort(int *arr,int st,int end){
//     if(st>=end)return ;
//     int pivot=pivotindex(arr,st,end);
//     quicksort(arr,st,pivot-1);
//     quicksort(arr,pivot+1,end);
// } 
// int main(){
//     int arr[]={3,4,6,2,5};
//     quicksort(arr,0,4);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//..........................................................
// #include<bits/stdc++.h>
// using namespace std;
// void subset(int *arr,vector<vector<int>>&v,vector<int>temp,int end,int index){
//     if(index>end){v.push_back(temp);return ;}
//     subset(arr,v,temp,end,index+1);
//     temp.push_back(arr[index]);
//     subset(arr,v,temp,end,index+1);
//     temp.pop_back();
// }
// int main (){
//     int arr[]={1,2,3};
//     vector<vector<int>>v;
//     vector<int>temp;
//     subset(arr,v,temp,2,0);
//     for (auto vec : v) {
//         for (auto i : vec) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
//....................................................
// #include<bits/stdc++.h>
// using namespace std;
// void subsetsum(int *arr,vector<int>&v,int end,int index,int sum){
//     if(index>end){v.push_back(sum);return ;}
//     subsetsum(arr,v,end,index+1,sum);
//     subsetsum(arr,v,end,index+1,sum+arr[index]);
// }
// int main (){
//     int arr[]={1,2,3};
//     int sum=0;
//     vector<int>v;
//     subsetsum(arr,v,2,0,sum);
//     for (auto i : v) {
//         cout << i << " ";
//     }
//     cout << endl;
// }
//............................................................
// #include<bits/stdc++.h>
// using namespace std;
// void targetsum(int *arr,int index,int end,int target,vector<int>&v,vector<int>& result){
    // if (target == 0) {
    //     result=v; 
    //     return ;
    // }
    // if(target<0||index>end){return ;}
//     targetsum(arr,index+1,end,target,v,result);
//     v.push_back(arr[index]);
//     targetsum(arr,index+1,end,target-arr[index],v,result);
//     v.pop_back();
// }
// int main (){
//     int arr[]={3,6,4,5};
//     int target=8;
//     vector<int>v;
//     vector<int>result;
//     targetsum(arr,0,3,target,v,result);
//     for(auto i:result){
//         cout<<i<<endl;
//     }
//     cout<<endl;
// }
//..................................................
// #include<bits/stdc++.h>
// using namespace std;
// int targetsum(int *arr,int index,int end,int target){
//     if (index > end) { 
//         return (target == 0) ? 1 : 0;
//     }
//     return targetsum(arr,index+1,end,target+arr[index])+targetsum(arr,index+1,end,target-arr[index]);
// }
// int main (){
//     int arr[]={1,1,1,1,1};
//     int target=3;
//     cout<<targetsum(arr,0,4,target);
// }
//......................................................
// #include<bits/stdc++.h>
// using namespace std;
// void permutation(int *arr,int end,vector<vector<int>>&ans,vector<int>&temp,vector<bool>visited){
//     if(visited.size()==temp.size()){ans.push_back(temp);return ;}
//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permutation(arr,end,ans,temp,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }
// int main (){
//     int arr[]={1,2,3};
//     int n=sizeof(arr)/sizeof(int);
//     vector<int>temp;
//     vector<vector<int>>ans;
//     vector<bool>visited(n,0);
//     permutation(arr,n-1,ans,temp,visited);
//     for(auto vec:ans){
//     for(auto i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// }
//.....................................................
// #include<bits/stdc++.h>
// using namespace std;
// void permutation(vector<int>&arr,int itr,vector<vector<int>>&ans){
    // if(itr==arr.size()){ans.push_back(arr);return ;}
    // for(int i=itr;i<arr.size();i++){
    //     swap(arr[itr],arr[i]);
    //     permutation(arr,itr+1,ans);
    //     swap(arr[itr], arr[i]);
    // }
// } 
// int main (){
//     vector<int>arr={1,2,3};
//     int itr=0;
//     vector<vector<int>>ans;
//     permutation(arr,itr,ans);
//     for(auto vec:ans)
//     {for(auto i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;}
// }
//.....................................................
// #include<bits/stdc++.h>
// using namespace std;
// void rep_permutation(vector<int>& arr, vector<bool>& used, vector<int>& temp, vector<vector<int>>& ans) {
//     if (temp.size() == arr.size()) {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < arr.size(); i++) {
//         if (used[i]) continue;
//         if (i > 0 && arr[i] == arr[i - 1] && !used[i - 1]) continue;
//         used[i] = true;
//         temp.push_back(arr[i]);
//         rep_permutation(arr, used, temp, ans);
//         temp.pop_back();
//         used[i] = false;
//     }
// }
// int main (){
//     vector<int>arr={1,1,2,3};
//     int n=arr.size();
//     int index=0;
//     vector<vector<int>> ans;
//         vector<int> temp;
//         vector<bool> used(arr.size(), false);
//         sort(arr.begin(), arr.end()); 
//         rep_permutation(arr, used, temp, ans);
//         cout << "ans_size= " << ans.size() << endl;
//     for(auto vec:ans){
//         for(auto i:vec){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
//...........................................................
// #include<bits/stdc++.h>
// using namespace std;
// int winner (vector<int>&arr,int itr,int &k){
//     if(arr.size()==1){return arr[0];}
//     itr = (itr + k - 1) % arr.size();
//     arr.erase(arr.begin() + itr);
//     return winner(arr, itr,k);
// }
// int main(){
//     vector<int>arr={4,3,6,2,5,4,8,2,7};
//     int itr=0;
//     int k=3;
//     cout<<winner(arr,itr,k)<<endl;
// }
//.........................................................................
// #include<bits/stdc++.h>
// using namespace std;
// bool safe(vector<vector<int>>&arr,int m,int n,int x,int y,vector<vector<int>>visited){
//     if(x>=0&&x<m&&y>=0&&y<n&&arr[x][y]==1&&visited[x][y]==0){return 1;}
//     return 0;
// }
// void rat_maze(vector<vector<int>>&arr,int m,int n,int x,int y,vector<string>&temp,vector<vector<int>>&visited,vector<string>&ans){
//     if(x == m-1 && y == n-1){ans=temp;return;}
//     // go left.............
//     if(safe(arr,m,n,x,y-1,visited)){
//         visited[x][y-1]=1;
//         temp.push_back("L");
//         rat_maze(arr,m,n,x,y-1,temp,visited,ans);
//         temp.pop_back();
//         visited[x][y-1]=0;
//     }
//     // go right.............
//     if(safe(arr,m,n,x,y+1,visited)){
//         visited[x][y+1]=1;
//         temp.push_back("R");
//         rat_maze(arr,m,n,x,y+1,temp,visited,ans);
//         temp.pop_back();
//         visited[x][y+1]=0;
//     }
//     // go up.............
//     if(safe(arr,m,n,x-1,y,visited)){
//         visited[x-1][y]=1;
//         temp.push_back("U");
//         rat_maze(arr,m,n,x-1,y,temp,visited,ans);
//         temp.pop_back();
//         visited[x-1][y]=0;
//     }
//     // go down.............
//     if(safe(arr,m,n,x+1,y,visited)){
//         visited[x+1][y]=1;
//         temp.push_back("D");
//         rat_maze(arr,m,n,x+1,y,temp,visited,ans);
//         temp.pop_back();
//         visited[x+1][y]=0;
//     }
// }
// int main(){
//     vector<vector<int>>arr={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//     vector<string>ans;
//     int m=arr.size(),n=arr[0].size();
//     int x=0,y=0;
//     vector<string>temp;
//     vector<vector<int>> visited(m, vector<int>(n, 0));
//     rat_maze(arr,m,n,x,y,temp,visited,ans);
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//....................................................................
// #include<bits/stdc++.h>
// using namespace std;
// //number of 1 in the prefix is more than the number of 0 in the prefix
// void print_n_bit_binary_number(int &n,int zero,int one, string &temp,vector<string>&ans){
//     if(temp.size()==n){ans.push_back(temp);return ;}
//     if(zero<one){
//         temp.push_back('0');
//         print_n_bit_binary_number(n,zero+1,one,temp,ans);
//         temp.pop_back();
//     }
//     temp.push_back('1');
//     print_n_bit_binary_number(n,zero,one+1,temp,ans);
//     temp.pop_back();
// }
// int main(){
//     int n;
//     cout<<" enter the number= ";
//     cin>>n;
//     int zero=0,one=0;
//     string temp;
//     vector<string>ans;
//     print_n_bit_binary_number(n,zero,one,temp,ans);
//     for(auto i:ans){
//         cout<<i<<"  ";
//     }
//     cout<<endl;
// }