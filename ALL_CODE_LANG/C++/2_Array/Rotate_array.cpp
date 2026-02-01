// #include<iostream>                 /*method-1 working */
// #include<vector>
// using namespace std;
// int main (){
//     vector<int>v={1,2,3,4,5,6};
//     vector<int>temp(v.size());
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         temp[(i+0)%n]=v[i];
//     }
//     v=temp;
//     for(int i:v){
//         cout <<i<<" ";
//     }
//     cout <<endl;
// }
/*............................................................................................. */

// #include<iostream>
// #include<array>
// #include<vector>             /*method-2 not working */
// using namespace std;
// int main (){
//     int a[]={1,2,3,4,5};
//     int n=sizeof(a)/sizeof(int);
//     int i=0;
//     while(i<n){
//         a[(i+1)%n]=a[i];
//         i++;
//     }
//     for(int i=0;i<n;i++){
//         cout <<a[i]<<" ";
//     }
//     cout <<endl;
// }
// /*rotating array by 1 in clockwise*/
/*............................................................................................. */

// #include<iostream>
// #include<algorithm>             /*method -3   not working */
// #include<vector>
// using namespace std;
// int main (){
//     int a[]={1,2,3,4,5};
//     int n=sizeof(a)/sizeof(int);
//     int i=0;
//     // int temp=a[0];
//     while(i<n-1){
//         swap(a[i],a[i+2]);
//         i++;
//     }
//     // a[n-2]=temp;
//     for(int i=0;i<n;i++){
//         cout <<a[i]<<" ";
//     }
//     cout <<endl;
// }
/*rotating array by 2 in clockwise*/
/*................................................................................................ */

// #include<iostream>
// #include<vector>                         /* check if array is both _sorted & _rotated */
// using namespace std;                  
// int main(){                              /*not working*/
//     vector<int>v={1,2,4,3,5,6};
    // vector<int>temp(v.size());
//     int n=v.size();
//     int k=0;
//     int response;
//     while(k<n){
//         for(int i=0;i<n;i++){
//             temp[(i+k)%n]=v[i];
//         }
//         v=temp;
//         for(int i=0;i<n;i++){
//             if(v[i]<v[i+1]){
//                 response=0;
//                 break;
//             }
//             else{k++;}
//         }
//         if(response==0){
//             cout <<"Yes,sorted&rotated.";
//             break;
//         }
//     }
// }

#include<iostream>
#include<vector>                 /* check if array is both _sorted & _rotated */
using namespace std;
int main (){
    vector<int>v={3,4,4,5,2,1};
    int n=v.size();
    int i=1;
    int count=0;
    while(i<n){
        if(v[i-1]>v[i]){
            count++;
        }
        i++;
    }
    if(v[n-1]>v[0]){
        count++;
    }
    if(count<=1){
        cout<<"yes,(sorted&rotated)."<<endl;
    }
    else{
        cout<<"sorry,not (sorted&rotated)."<<endl;
    }
    /* check if array is both _sorted & _rotated */
}