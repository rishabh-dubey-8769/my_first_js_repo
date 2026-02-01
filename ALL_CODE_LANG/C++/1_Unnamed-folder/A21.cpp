// #include <iostream>
// using namespace std;
// void arrsum(int n){
//     int arr[100],sum=0;
//     for (int i=0;i<n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//         sum+=arr[i];
//     }
//     cout <<"sum of all elements= "<<sum<<endl;
// }
// int main (){
//     int n,i;
//     cout <<"enter n=";
//     cin  >>n;
//     arrsum(n);
// }

// #include <iostream>
// using namespace std;
// void check(int n){
//     int arr[100];
//     int key,count=0;
//     cout <<"enter key=";
//     cin >>key;
//     for (int i=0;i<n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//         if(arr[i]==key){
//             count++;
//         }
//         }
//     cout <<"counting= "<<count<<endl;
// }
// int main (){
//     int n,i;
//     cout <<"enter size=";
//     cin  >>n;
//     check(n);
// }
// #include <iostream>
// using namespace std;
// bool check(int arr[],int n,int key){
//     for (int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main (){
//     int n,arr[100];
//     cout <<"enter size=";
//     cin >>n;
//     int key;
//     cout <<"enter key=";
//     cin >>key;
//     for (int i=0;i<n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     bool value=check(arr,n,key);
//     if(value){
//         cout <<"EUREKA."<<endl;
//     }
//     else{
//         cout <<"I AM SORRY BABU."<<endl;}
// }
// #include <iostream>
// using namespace std;
//     void swap_(int arr[],int n){
//         for (int i=1;i<=n/2;i++){
//             int a=arr[i];
//             arr[i]=arr[n-i+1];
//             arr[n-i+1]=a;
//         }
//         for (int i=1;i<=n;i++){
//             cout <<arr[i]<<" ";
//         }
//     }
// int main (){
//     int n,arr[100];
//     cout <<"enter n=";
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     swap_(arr,n);
// }
// #include <iostream>
// using namespace std;
// void swapalternate_(int arr[],int n){
//     int i=1;
//     while (i<=n){
//         int a=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=a;
//         i+=2;
//     }
//     for (int i=1;i<=n;i++)
//     {cout <<arr[i]<<" ";}
// }
// int main (){
//     int n,arr[100];
//     cout <<"enter n=";
//     cin >>n;
//         if(n%2==0)
//         {for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//         swapalternate_(arr,n);
// }
//     else{
//         cout <<"I AM SORRY."<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// void unique_(int arr[],int n){
//     int value=0;
//     for (int i=1;i<=n;i++){
//         value^=arr[i];
//     }
//     cout <<"UNIQUE_ELEMENT= "<<value<<endl;
// }
// int main  (){
//     int n,arr[100];
//     cout <<"enter size=";
//     cin >>n;
//     cout <<"enter elements= "<<endl;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     cout <<endl;
//     cout <<"UNIQUE_ELEMENTS= "<<endl;
//     unique_(arr,n);
// }

// #include <iostream>
// using namespace std;
// void duplicate_(int arr[],int n){
//     int k,i=1;
//     while (i<=n){
//         k=1;
//         while (k<=n){
//             if((arr[i]==arr[k])&&i!=k){
//                 cout <<arr[i]<<" ";
//                 k++;

//             }
//         }
//         i++;
//     }
//     cout <<endl;
// }
// int main  (){
//     int n,arr[100];
//     cout <<"enter size=";
//     cin >>n;
//     cout <<"enter elements= "<<endl;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     cout <<endl;
//     cout <<"duplicate_ELEMENTS= "<<endl;
//     duplicate_(arr,n);
// }
// #include <iostream>
// using namespace std;
// void unique_(int arr[],int n){
//     int k,i=1;
//     while (i<=n){   
//         k=1;
//         while (k<=n){
//             if (i==k){k++;}
//             if(arr[i]==arr[k]){
//                 i++;
//                 break;
//             }
//             else if (k==n){
//                 cout <<arr[i]<<" ";
//                 i++;
//                 break;           
//             } 
//             else {k++;}
//         }
//     }
//     cout <<endl;
// }

// int main (){
//     int n,arr[100];
//     cout <<"enter size= ";
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]= ";
//         cin >>arr[i];
//     }
//     unique_(arr,n);
// }

// #include <iostream>
// using namespace std;
// void unique_(int arr[],int n){
//     int k,i=1;
//     while (i<=n){   
//         k=1;
//         while ((k<=n)&&(i!=k)){
//             if(arr[i]==arr[k]){
//                 i++;
//                 break;
//             }
//             else if (k!=n && arr[i]!=arr[k]){
//                 k++;           
//             } 
//             else if(k==n && arr[i]!=arr[k]){
//                 cout <<arr[i]<<" ";
//                 i++;
//                 break;
//             }
//         }
//         // k++;
//     }
//     cout <<endl;
// }

// int main (){
//     int n,arr[100];
//     cout <<"enter size= ";
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]= ";
//         cin >>arr[i];
//     }
//     unique_(arr,n);
// }


// #include <iostream>
// using namespace std;
// void unique_(int arr[],int n){
//     int k;
//     int i=1;
//     while (i<=n){   
//          k=1;
//         while ((k<=n)){
//             if(i==k) k++;
//            if(arr[i]==arr[k]){
//             i++;
//             break;
//            }
//            else {
//             if(k==n) {
//                 cout<<arr[i]<<endl;
//                 i++;
//                 break;
//             }
//             else k++;
//            }
//         }       
//     }  
// }

// int main (){
//     int n,arr[100];
//     cout <<"enter size= ";
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]= ";
//         cin >>arr[i];
//     }
//     unique_(arr,n);
// }

// #include <iostream>
// using namespace std;
// void unique_(int arr[],int n){
//     int i=1,k,count[100]={0};
//     while (i<=n){
//         k=1;
//         while (k<=n){
//             if(i==k)
//             {k++;}
//             if(arr[i]==arr[k])
//             {count[i]+=1;}
//             if (k==n){break;}
//             else {k++;}
//         }
//         i++;
//     }
//     for(int m=1;m<=n;m++){
//         count[m]+=1;
//     }
//     for(int m=1;m<=n;m++){
//         cout<<count[m]<<" ";
//     }

//      bool flag= true;
//     // loop starts..................................
//     for (int i = 1; i <= n; i++) {
//         for(int j=1;j<=n;j++){
//             if(i==j)j++;
//             if(count[i]==count[j]){
//                 flag = false;
//                 break;
//             } 
//         }
//     }
//     if(flag==true) cout<<"True";
//     else cout<<"False";
// // loop ends..................................
// }
// int main (){
//     int n,arr[100];
//     cout <<"enter size=";
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     unique_(arr,n);
// } 
// #include <iostream>
// using namespace std;
// void call(int n){
//     cout <<n<<endl;
// }
// void print(int n){
//     cout <<n<<endl;
// }
// int main (){
//     int n;
//     cout <<"enter n= ";
//     cin >>n;
//     call(n);
//     print(n);
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main (){
//     int n,i,j;
//     int A[]={2,5,3,7,8,3};
//     int B[]={9,11,5,8,5,3,10};
//     if(sizeof(A)>=sizeof(B)){
//         n=sizeof(A)/sizeof(int);
//     }
//     else {
//         n=sizeof(B)/sizeof(int);
//     }
//     i=1;
//     while (i<=n){
//         j=1;
//         while (j<=n){
//             if(A[i]==B[j]){
//                 cout <<A[i]<<endl;
//                 // NUMBER UPDATED.
//                 B[j]=INT_MIN;
//                 i++;
//             }
//             else{j++;}
//         }
//         i++;
//     }
//     cout <<endl;}



// CODE NOT WORKING 
// #include <iostream>                  
// #include <limits.h>                  
// using namespace std;                 
// int main (){                         
//     int n,i,j;                       
//     int A[]={2,5,3,7,8,3};            
//     int B[]={9,11,5,8,5,3,10};
//     if(sizeof(A)>=sizeof(B)){
//         n=sizeof(A)/sizeof(int);
//     }
//     else {
//         n=sizeof(B)/sizeof(int);
//     }
//     i=1,j=1;
//     while (i<=n&&j<=n){
//         if(A[i]<B[j]){
//             i++;
//         }
//         else if(A[i]==B[j]){
//             cout <<A[i]<<endl;
//             i++,j++;
//         }
//         else {j++;}
//     }
//     cout <<endl;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int a[]={5,4,9,2,6,1,33,7};
//     int n= sizeof(a)/sizeof(int );
//             sort(a,a+n);
//     for(int i=0;i<n;i++){  
//         cout <<a[i]<<endl;      
//     }
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int a[]={0,1,1,0,1,1,1,0,1,0,0};
//     int n=sizeof(a)/sizeof(int );
//     int count_0=0,count_1=0;
//     for (int i=0;i<n;i++){
//         if(a[i]==0){
//             count_0++;
            
//         }
//         if(a[i]==1){
//             count_1++;
            
//         }
//     }
//     cout<< count_1<<endl;
//     for (int i=0;i<count_0;i++){
//         cout<<" 0"<<" ";
//     }
//     for (int i=0;i<count_1;i++){
//         cout<<" 1"<<" ";
//     }
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int a[]={3,2,4};
    int n,key,i,j;
    cout <<"enter key= ";
    cin >>key;
    n=sizeof(a)/sizeof(int);
    i=0;
    while (i<n){
        if (a[i]<=key){
            j=0;
            while (j<n){
                if(a[i]+a[j]==key && j>i){
                    cout <<i<<" & "<<j<<endl;
                    j++;
                    break;
                }
                else{j++;}
            }
            
        }
        i++;
    }
    cout <<endl;
}





















