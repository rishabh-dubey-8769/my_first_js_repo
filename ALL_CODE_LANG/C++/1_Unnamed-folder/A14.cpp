// #include <iostream>
// using namespace std;
// int main (){
//     int n,i;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     while (i<=n){
//         if(i==3){
//             i++;
//             continue;
//             // break;
//         }
//         else {
//             cout <<i<<endl;
//             i++;
//         }
//     }
// }.................................................................................
 
//  #include <iostream>
//  using namespace std;
//  int main (){
//     int n,i;
//     cout <<"enter n=";
//     cin >>n;
//     for (i=1;i<=n;){
//         if (i==3){
//             i++;
//             continue;
//         }
//         else {
//             cout <<i<<endl;
//             i++;
//         }
//     }
//  }...........................................................................

//  #include <iostream>
//  using namespace std;
//  int main(){
//     for (int i=0; i<=15; i+=2){
//         cout <<i<<" ";
//         if (i&1){
//             continue;
//         }
//         i++;
//     }
//   }...........................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     for (int i=0;i<5;i++){
//         for (int j=i;j<=5;j++){
//             if (i+j==10){
//                 break;
//             }
//             cout <<i<<" "<<j<<endl;
//         }
//     }
// }...............................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int a=3;
//     cout <<a<<endl;
//     if (false!=1){
//         cout <<a;
//     }
// }.....................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,a,b,c;
//     int prod=1,sum=0;
//     cout <<"enter number=";
//     cin >>n;
//     while (n!=0){
//         a=n%10;
//         prod*=a;
//         sum+=a;
//         n/=10;
//     }
//     cout <<"sum="<<sum<<"\n"<<"product="<<prod<<endl;
//     cout <<"Difference="<<"\n"<<"prod - sum=";
//     cout <<prod-sum;
// }
//  ...............................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int a=-4;
//     cout <<abs(a);
// }................................................................................

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,i,bit ,ans;
//     cout <<"enter n=";
//     cin >>n;
//     ans =0;
//     i=0;
//     while (n!=0){
//         bit =n%10;
//         ans =ans + (bit * pow (2,i));
//         n=n/10;
//         i++;
//     }
//     cout <<"ans="<<ans;
// }.................................................................................

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,i,ans,bit,N,rep=0,j=0;
//     cout <<"enter n=";
//     cin >>n;
//     ans=0;
//     i=0;
//     while (n!=0){
//         bit =!(n&1);
//         ans=( bit * pow(10,i))+ans ;
//         n>>=1;
//         i++;

//     }
//     // cout <<"ans ="<<ans;
//         N=ans;
//         while (N!=0){
//             bit =N%10;
//             rep=rep+(bit *pow(2,j));
//             N/=10;
//             j++;
//         }
//         cout <<"Answer ="<<rep;
// }.......................................................................................


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,a,ans;
//     cout <<"enter n=";
//     cin >>n;
//     if (1<=n && (n&(n-1))==0){
//         cout <<"power of 2";}
//         else {
//             cout <<"not power of 2";
//         }
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter n=";
//     cin >>n;
//     int i=1;
//         while (i<=n){
//             if ((i&(i-1))==0)
//             cout <<i<<"\n";
//             i++;
//         }
//     }
// #include <iostream>
// using namespace std;
// int main (){
//     int n,i,sum=0;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     sum=0;
//     while (i<=n){
//         if(i!=3){
//             sum+=i;
//             i++;
//         }
//         else {
//             i++;
//             continue ;
//         }
//     }
//      cout <<"SUM="<<sum;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,i,a,b,bin;
//     cout <<"enter n=";
//     cin >>n;
//     i=0;
//     bin=0;
//     while (n!=0){
//         a=n%2;
//         bin=bin+a*pow(10,i);
//         n=n/2;
//         i++;
//     }
//     cout <<"BINARY CODE= "<<bin;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,i,bit,bin;
//     cout <<"enter n=";
//     cin >>n;
//     i=0;
//     bin=0;
//     while (n!=0){
//         bit=n&1;
//         bin=bin+bit*pow(10,i);
//         i++;
//         n>>=1;
//     }   
//     cout <<"BINARY VALUE= "<<bin;
//     }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int i,n,sum,bit;
//     cout <<"enter n=";
//     cin>>n;
//     i=0;
//     sum=0;
//     while (n!=0){
//         bit=n%10;
//          sum+=bit*pow(2,i);
//             n/=10;;
//             i++;
//     }
//             cout <<"Numerical Value= "<<sum;

// }
// #include <iostream>
// using namespace std;
// int main (){
//     int i;
//     cout <<"enter i=";
//     cin >>i;
//     cout <<(i>>=1);
// }





































