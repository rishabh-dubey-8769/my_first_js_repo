// #include <iostream>
// using namespace std;
// int main (){
//     int n,p,i,j;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     while (i<=n){
//         j=1;
//         p=n;
//         while (j<=i-1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=n-i+1){
//             cout <<p;
//             p--;
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
// }.......................................................................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,p,k,i,j;
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     p=1;
//     while (i<=n){
//         j=1;
//         p=i;
//         k=n-1;
//         while (j<=i){
//             cout <<p<<" ";
//             p+=k;
//             k--;
//             j++;
//         }
//         j=1;
//         while (j<=n-i){
//             cout <<" ";
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
// }...................................................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,p,i,j,arr[i][j];
//     cout <<"enter n=";
//     cin >>n;
//     i=1;
//     p=1;
//     while (i<=n){
//         j=1;
//         while (j<=i-1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=n-i+1){
//             arr[i][j]=p;
//             swap(arr[i][j], arr[j][i]);
//             cout <<arr[i][j];
//             p++;
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main  (){
//     int a,b;
//     cout <<"enter a=";
//     cin >>a;
//     cout <<endl;
//     cout <<"enter b=";
//     cin >>b;
//     cout <<(a&b)<<endl;
//     cout <<(a|b)<<endl;
//     cout <<(~b)<<endl;
//     cout <<(a^b)<<endl;
//     cout <<(a<<1)<<endl;
//     cout <<(b>>2)<<endl;
//     cout <<++a<<endl;
//     cout <<b+a++<<endl;
//     cout <<(++b)+(++a)<<endl;
//     cout <<(a--)+(b++)<<endl;
// }..........................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int a,b;
//     a=10;
//     b=1;
//     if (++a)
//     cout <<b<<endl;
//     else cout <<++b;
// }.........................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int a=1,b=2;
//     if ( ++b>2 ||a-- >0  )
//     cout <<"x"<<endl;
//     else 
//     cout <<"y"<<endl;  
//     cout <<a<<" "<<b;
// }.........................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,i,a,b;
//     cout <<"enter n=";
//     cin >>n;
//     a=0;
//     b=1;
//     cout << a <<" "<< b<<" ";
//     for (i=3;i<=n;i++){
//         int next = b+a;
//         cout <<next<<" ";
//         a=b;
//         b=next;
//     }
// }......................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,p,i;
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
//         cout <<p<<" ";
//         p++;
//     }
// }........................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,p,i;
//     cout <<"enter n=";
//     cin >>n;
//     bool prime;
//     cout <<"prime numbers = ";
//     for(p=2;p<=n;p++){
//      prime =1;
//         for (i=2;i<p;i++){
//             if(p%i==0){
//                 prime =0;
//                  break;
//             }           
//         }
//         if (prime)
//              cout <<p<<" "; 
//     }
// }..................................................................................

// #include <iostream>
// using namespace std;
// int main (){
//     int n,i;
//     cout <<"enter n=";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         cout <<"Hey"<<endl;
//         cout <<"Hello"<<endl;
//         continue;
//         cout <<"Cat"<<endl;
//         cout <<"Dog"<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, p, i, j;
//     cout << "enter n=";
//     cin >> n;
//     i = 1;
//     p = 1;
//     while (i <= n) {
//         j = 1;
//         while (j <= i - 1) {
//             cout << " ";
//             j++;
//         }
//         j = 1;
//         while (j <= n - i + 1) {
//             cout << p;
//             p++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout <<"enter size =";
//     cin >>n;
//     i=1;
//     k=1;
//     while (i<=n){
//         j=1;
//         while (j<=i-1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=n-i+1){
//             cout <<k;
//             j++;
//             k++;
//         }
//         i++;
//         cout <<endl;
//     }
// }

