// #include <iostream>
// using namespace std;
// int main (){                            /* METHOD--1 */
//     int a[]={1,3,5,7,9};                   
//     int b[]={4,6,8};
//     int T[100]={0};
//     int n_a=sizeof(a)/sizeof(int);
//     int n_b=sizeof(b)/sizeof(int);
//     // sort(a,a+n);                       ----optional
//     // sort(b,b+m);                       ----optional
//     int i=0,j=0,k=0;
//     while(i<n_a&&j<n_b){
//         if(a[i]<b[j]){
//         T[k]=a[i];
//         i++;
//         k++;}
//         else {
//             T[k]=b[j];
//             j++;
//             k++;}
//     }
//     while(i<n_a){ 
//         T[k]=a[i];
//         k++,i++;
//     }
//     while(j<n_b){                                                                            
//         T[k]=b[j];
//         k++,j++;
//     }     
//     cout <<" Merged array[a & b] = "<<endl;
//     for(int i=0;i<n_a+n_b;i++){
//         cout <<T[i]<<" ";
//     }
//     cout <<endl;
// }
// ...................................................................... 

// #include <iostream>
// // #include <set>                         /*--------optional----------*/
// #include <algorithm>                   /*--------optional----------*/
// #include <vector>                                    
// using namespace std;                      /*--------METHOD-2----------*/
// int main (){
//     vector<int>v;
//     vector<int>a={1,3,5,2,7,9};
//     vector<int>b={4,6,0,8};
//     sort(a.begin(),a.end());             /*--------optional----------*/
//     sort(b.begin(),b.end());             /*--------optional----------*/
//     int n=a.size();
//     int m=b.size();
//     int i=0,j=0;
//     while(i<n&&j<m){
//         if(a[i]<b[j]){
//             v.push_back(a[i]);
//             i++;
//         }
//         if(a[i]>b[j]){
//             v.push_back(b[j]);
//             j++;
//         }
//         if(a[i]==b[j]){
//             v.push_back(a[i]);
//             i++,j++;
//         }
//     }
//     while(i<n){
//         v.push_back(a[i]);
//         i++;
//     }
//     while(j<m){
//         v.push_back(b[j]);
//         j++;
//     }
//     cout <<" afte Merging array[a & b] = "<<endl;
//     // set<int>s(v.begin(),v.end());        /*--------optional----------*/
//     // for(auto i:s){
//     //     cout <<i<<" ";
//     // }
//     // cout <<endl;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*................................................................................*/
// #include <iostream>
// #include<vector>
// using namespace std;                  /*check if sorted*/
// int main (){
//     vector<int >v={3,2,1,4,5};
//     int i=0;
//     while(i<v.size()){
//         if((v[i]==v[i+1])||(v[i]<v[i+1])){
//             i++;
//         }
//         else{break;}
//     }
//     if(i==(v.size()-1)){
//         cout <<" SORTED "<<endl;
//     }
//     else {cout <<" unsorted "<<endl;}
// }