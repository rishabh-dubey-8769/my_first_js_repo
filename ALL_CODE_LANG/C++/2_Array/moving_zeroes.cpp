// #include<iostream>
// #include<deque>           /*moving all zeroes to the left*/
// using namespace std;
// int main (){
//     deque<int>v;
//     deque<int>a={1,0,3,4,0,2};
//     int i=0;
//     while(i<a.size()){
//         if(a.at(i)!=0){
//         v.push_back(a.at(i));
//         i++;}
//         else{v.push_front(a.at(i));
//         i++;}
//     }
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// #include <iostream>                       /* "moving all zeroes to the right." */
// #include <vector>
// using namespace std;                         /*-------METHOD-1--------*/
// int main (){
//     vector<int>v={0,1,0,3,12,0};
//     vector<int>z;
//     vector<int>n_z;
//     vector<int>new_array;
//     int n=v.size();
//     int k=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0){
//             z.push_back(v[i]);
//         }
//         else {
//             n_z.push_back(v[i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(i<n_z.size()){
//             new_array.push_back(n_z[i]);
//         }
//         else{
//             new_array.push_back(z[k++]);
//         }
//     }
//     for(int i:new_array){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
// .............................................................
// #include <iostream>
// #include <vector>                    /*-------METHOD-2--------*/
// using namespace std;
// int main(){
//     vector<int>v={0,1,0,3,12,0};
//     int i=0;
//     for(int j=0;j<v.size();j++){
//         if(v[j]!=0){
//             swap(v[j],v[i]);
//             i++;
//         }
//     }
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*..........................................................................................*/
// #include<iostream>                                                     
// using namespace std;                   /*...............method -3............*/
// int main (){
//     int a[]={1,0,3,4,0,2};
//     int n=sizeof(a)/sizeof(int);
//     int b[n];
//     int i=0,j=0;
//     while(i<n){
//         if(a[i]!=0){
//             b[j]=a[i];
//             j++;
//         }
//         else{
//             b[n-1]=a[i];
//             n--;
//         }
//         i++;
//     }
//     for(int i=0;i<sizeof(a)/sizeof(0);i++){
//     cout <<b[i]<<" ";
//     }
//     cout <<endl;
// }