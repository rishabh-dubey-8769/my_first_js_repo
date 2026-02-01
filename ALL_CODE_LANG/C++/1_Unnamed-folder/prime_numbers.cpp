// #include <iostream>
// using namespace std ;         /* method-1 */
// int main (){
//     int n,p,i;
//     cout <<"enter n=";
//     cin >>n; 
//     cout <<"Prime numbers = "<<endl;
//     p=2;
//     while (p<n){
//         i=2;
//         while (i<=p-1){
//             while (p%i==0){
//                 p++;
//             }       
//             i++;    
//         }
//         cout <<p<<" ";
//         p++;
//     }
// }
/*..........................................................*/
// #include<iostream>
// #include<vector>                 /* method-2 */
// using namespace std;
// vector<int>find_prime(int n){
//     vector<int>v;
//     int p=2;
//     while(p<n){
//         int i=2;
//         bool is_prime=1;
//         while(i<p){
//             if(p%i==0){
//                 is_prime=0;
//                 break;
//             }
//             i++;
//         }
//         if(is_prime){
//             v.push_back(p);
//         }
//         p++;
//     }
//     return v;
// }
// int main (){
//     vector<int>v;
//     int n;
//     cout <<"enter n= ";
//     cin >>n;
//     v=find_prime(n);
//     for(auto i:v){
//         cout <<i<<" ";
//     }
//     cout<<endl;
// }
