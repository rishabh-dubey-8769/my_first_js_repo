//    #include <iostream>
//    using namespace std;
//     int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
//    }
//     int ncr(){
//         int n,r;
//     cout <<"enter n=";
//     cin >>n;
//     cout <<"enter r=";
//     cin >>r;
//         int num=factorial(n);
//         int denom=factorial(r)*factorial(n-r);
//         int c=num/denom;
//         return c;
//     }
//     int npr(){
//         int n,r;
//         cout <<"enter n=";
//     cin >>n;
//     cout <<"enter r=";
//     cin >>r;
//         int num=factorial(n);
//         int denom=factorial(n-r);
//         int d=num/denom;
//         return d;
//     }
//     int main (){
//     cout <<"ncr="<<ncr()<<endl;
//     cout <<"npr="<<npr()<<endl;
//     return 0;
//     }.......................................................................................................
// #include <iostream>
// using namespace std;
// // int count (){
//     void count (){
//     int n,i;
//     cout <<"enter n=";
//     cin >>n;
//     for (i=1;i<=n;i++){
//         cout <<i<<" ";
//     }
//     // return i;
// }
// int main (){
//     count ();
//     cout <<endl;
// }....................................................................................

// #include <iostream>
// using namespace std;
// void prime(){
//     int n,p,i,k;
//     cout <<"enter n=";
//     cin >>n;
//     p=2;
//     while (p<=n){
//         i=2;
//         while (i<p){
//             while (p%i==0){
//                 p++;
//             }
//             i++;
//         }
//         cout <<p<<"\n";
//         p++;
//     }
// }
// int main (){
//     prime();
//     return 0;
// }.......................................................................................

// #include <iostream>
// using namespace std;
// void fib(){
//     int n,a ,b,i,next;
//     cout <<"enter n=";
//     cin >>n;
//     a=0;b=1;i=3;
//     cout <<a<<" "<<b<<" ";
//     while (i<=n){
//         next=a+b;
//         cout <<next<<" ";
//         a=b;
//         b=next;
//         i++;
//     }
// }
// int main (){
//     fib();
//     return 0;
// }....................................................................................

// #include <iostream>
// using namespace std;
// void value(){
//     int n;
//     cout <<"enter n=";
//     cin >>n;
//     cout <<"value ="<<3*n+7<<endl;
// }
// int main (){
//     value ();
//     return 0;
// }....................................................................
// #include <iostream>
// using namespace std;
// void dummy(int n){
//     // n++;
//     cout <<"M ="<<n<<endl;
// }
// int main (){
//     int n;
//     cout <<"enter n=";
//     cin >>n;
//     dummy (n);
//     cout <<"N ="<<n<<endl;
//     return 0;
// }........................................................................

// #include <iostream>
// #include <cmath>
// using namespace std;
// int  Bitcount(){
//     int n,i,ans,bit,k,sum=0;
//     cout <<"enter n=";
//     cin >>n;
//     ans=0;
//     i=0;
//      while (n!=0){
//         bit =n&1;
//         ans=bit * pow (10,i)+ans;
//         i++;
//         n=n>>1;}
//     k=ans;
//     while (k!=0){
//         sum+=k%10;k=k/10;
//     }
//     return sum;
// }
// int main (){
//     cout <<"Bitcount ="<<Bitcount ()+Bitcount ()<<endl;
//     return 0;
// }....................................................................................
// #include <iostream>
// using namespace std;
// int main (){
//     int n,k;
//     cout <<"enter n=";
//     cin >>n;
//     int arr[n];
//     for (int i=0;i<n;i++)
//     {cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//     }
//     cout <<"enter k=";
//     cin >>k;
//     cout <<"arr["<<k<<"]="<<arr[k];                       
//     }.................................................................................
// #include <iostream>
// using namespace std;
// int main (){
//     int arr[10]={2,5,7,4,48,6};
//     cout <<"array[0]="<<arr[0]<<endl;
//     cout <<"array[4]="<<arr[4]<<endl;
//     cout <<"array[5]="<<arr[5]<<endl;
//     cout <<"array[6]="<<arr[6]<<endl;
//     cout <<"array[7]="<<arr[7]<<endl;
//     cout <<"array[8]="<<arr[8]<<endl;
//     cout <<"array[9]="<<arr[9]<<endl;
//     cout <<"array[10]="<<arr[10]<<endl;
// }.....................................................................................

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4]={};
//     cout <<"arr[-1]"<<arr[-1]<<endl;
//     cout <<"arr[0]"<<arr[0]<<endl; 
//     cout <<"arr[1]"<<arr[1]<<endl;
//     cout <<"arr[2]"<<arr[2]<<endl;   
// }.....................................................................................
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter n=";
//     cin>>n;
//     int arr[n]={0};
//     for (int i=0;i<n;i++){
//         cout <<"array["<<i<<"]="<<arr[i]<<endl;
//     }
// }.....................................................................................

// #include <iostream>
// using namespace std;
// void PRINT(){
//     int size,sum=0,k;
//     cout <<"enter size=";
//     cin>>size;
//     int arr[size]={k};
//     cout <<"enter all elements:"<<endl;
//     for(int i=0;i<size;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>k;
//         if (k<=0){
//             break;
//         }
//         sum+=k;
//     }
//     cout <<"sum ="<<sum<<endl;
//     int capicity=sizeof(arr)/sizeof (int );
//     cout <<"Capicity(no. of elements)of array="<<capicity<<endl;
// }
// int main (){
//    { PRINT ();}
// }..............................................................................................

// #include <iostream>
// #include <climits>
// using namespace std;
// int mincheck(int arr[],int size){
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++){
//         mini=min(mini,arr[i]);
//     }
//     return mini;
// }
// int maxcheck(int arr[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         maxi=max(maxi,arr[i]);
//     }
//     return maxi;
// }
// int main (){
//     int size;
//     cout <<"enter size=";
//     cin >>size;
//     int arr[50];
//     for (int i=0;i<size;i++){
//         cout <<"array["<<i<<"]=";
//         cin>>arr[i];
//     }
//     cout <<"max value="<<maxcheck(arr,size)<<endl;
//     cout <<"min value="<<mincheck(arr,size)<<endl;
//     return 0;
// }.......................................................................................
