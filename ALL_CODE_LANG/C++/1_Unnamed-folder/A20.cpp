// #include <iostream>
// using namespace std;
// int main (){
//     int i,j,n;
//     cout <<"enter n=";
//     cin >>n;
//     char k='A';
//     i=1;
//     while (i<=n){
//         j=1;
//         while (j<=i){
//             cout <<k;
//             j++;
//         }
//         k++;
//         i++;
//         cout <<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n,i,j;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     while (i<=n){
//         if (i==1||i==n){
//             j=1;
//             while (j<=n){
//                 cout <<"*";
//                 j++;
//             }
//             cout <<endl;
//         }
//     else {
//         cout <<"*";
//         j=2;
//         while (j<=n-1){
//             cout <<" ";
//             j++;
//         }       
//         cout <<"*";
//     }
//      i++;
//         cout <<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n,i,j;
//     cout <<"enter n=";
//     cin >>n;
//     if(n%2!=0){
//         i=1;
//         while (i<=n){
//             if (i!=(n/2)+1){
//                 j=1;
//                 while (j<=n){
//                     if(j==(n/2)+1){
//                         cout <<"*";
//                         j++;
//                     }
//                     else{
//                         cout <<" ";
//                         j++;
//                     }
//                 }
//             }
//             else{
//                 j=1;
//                 while (j<=n){
//                     cout <<"*";
//                     j++;
//                 }
//                 j++;
//             }
//             i++;
//             cout <<endl;
//         }
//     }
//     else {
//         cout <<"I M SORRY BABU.";
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter number =";
//     cin >>n;
//     cout <<"n%10="<<n%10<<endl;
//     cout <<"n/10="<<n/10<<endl;
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter n=";
//     cin >>n;
//     cout<<"Absolute value="<<abs(n);
// }



// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     int n,i;
//     cout <<"enter n=";
//     cin >>n;
//     i=0;
//     while (i<=31){
//         if(n==pow(2,i)){
//             cout <<"EUREKA."<<endl;
//             break;
//         }
//         else{i++;}
//     }
//     cout <<endl;
// }
// #include <iostream>
// using namespace std;
// int main (){
//     float n;
//     cout <<"ENTER DECIMAL VALUE=";
//     cin>>n;
//     int x=n;
//     float k=n-x;
//     if((k==0)&&n>=0){
//         cout <<"WHOLE NUMBER.";
//     }
//     else{
//         cout <<"NOT WHOLE NUMBER.";
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n,arr[50],sum=0;
//     cout <<"enter n=";
//     cin >>n;
//     for(int i=0;i<n;i++){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//         sum=sum+arr[i];
//     }
//     cout <<"SUM= "<<sum<<endl;
// }


//  #include <iostream>
//  using namespace std;
//  void sum(){
//     int a,b,sum;
//     cout <<"enter num1=";
//     cin >>a;
//     cout <<"enter num2=";
//     cin >>b;
//     sum=a+b;
//     cout <<"SUM= "<<sum<<endl;
//  }
//  int main (){
//     sum();
//     sum();

//  }

// #include <iostream>
//  using namespace std;
//  int sum(int x,int y){
//     int sum=x+y;
//     return sum;
//  }
//  int main (){
//      int a,b;
//     cout <<"enter num1=";
//     cin >>a;
//     cout <<"enter num2=";
//     cin >>b;
//     cout <<"SUM= "<<sum(a,b)<<endl;
//  }


// #include <iostream>
// using namespace std;
// int bitcount(){
//     int n,i,bit,count;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;count =0;
//     while (n!=0){
//         bit =n&1;
//         if(bit==1){
//             count ++;
//             n=n>>1;
//         }
//         else{n=n>>1;}
//     }
//     return count;
// }
// int main (){
//     cout <<"Total Bitcounts= "<<bitcount()+bitcount()<<endl;
// }

// #include <iostream>
// using namespace std;
// int  update(int a){
//     a=a/2;
//     return a;
// }
// int main (){
//     int a=10;
//     a=update(a);
//     cout <<a<<'\n'<<update(a)<<endl;
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[10]={4,5,6,8};
//     cout <<arr[0]<<endl;
//     cout <<arr[1]<<endl;
//     cout <<arr[2]<<endl;
//     cout <<arr[3]<<endl;
//     cout <<arr[43]<<endl;
// }
// #include <iostream>
// using namespace std;
// void count(){
//     int size,i,count ,arr[100];
//     cout <<"enter size=";
//     cin  >>size;
//     i=0;count=0;
//     while (i<size){
//         cout <<"arr["<<i<<"]=";
//         cin >>arr[i];
//         i++;
//     }
//     i=0;
//     while (i<size){
//        if(arr[i]!=0){
//         count++;
//         i++;}
//         else{i++;}
//     }
//     cout <<"No. of elements in array="<<count<<endl;
// }

// int main (){
//     count();
// }


































