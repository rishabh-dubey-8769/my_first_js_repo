// #include <iostream>               /* method -1 */
// #include <cmath>                    /*reverse number */
// using namespace std;
// int main (){
//     int n,digit,i=0,ans=0;
//     cout <<"enter n=";
//     cin >>n;
//     while (n!=0){
//         digit=n%10;
//         ans=ans*10+digit;
//         n=n/10;
//         i++;
//     }
//     cout <<"REVERSE= "<<ans;
// }
/*.....................................................................*/
// #include<iostream>
// #include<vector>                   /* method -2 */
// #include<deque>                     /*reverse array */
// using namespace std;
// int main(){
//     vector<int >a={1,2,3,4,5};
//     deque<int>v;
//     int n=a.size();
//     int i=0;
//     while(i<n){
//         v.push_front(a[i]);
//         i++;
//     }
//     for(auto i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*......................................................................*/
// #include<iostream>
// #include<deque>                   /* method -3 */
// using namespace std;               /*reverse array */
// int main (){
//     deque<int>d={1,2,3,4,5};
//     int n=d.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             swap(d[j],d[j+1]);
//         }
//     }
//     for(auto i:d){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*.....................................................................*/
// #include<iostream>
// #include<deque>                      /* method -4 */
// using namespace std;                 /*reverse array */
// int main (){
//     deque<int>d={1,2,3,4,5};
//     int n=d.size();
//     int s=0,e=n-1;
//     while(s<e){
//         swap(d[s],d[e]);
//         s++,e--;
//     }
//     for(auto i:d){
//         cout <<i<<" ";
//     }
//     cout<<endl;
// }