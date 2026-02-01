// #include <iostream>
// using namespace std;
// int main (){
//     int i,j,k,n;
//     cout <<"enter n=";
//     cin >>n;
//     i=1,k=1;
//     while (i<=n){
//         j=1;
//         while (j<=i-1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//             while (j<=n-i+1){
//                 cout <<k;
//                 k++,j++;
//             }
//             i++;
//             cout <<endl;
        
//     }
// }

// #include <iostream>
// using namespace std;
// int main (){
//     // Row--"r", Col--"c"
//     int r,c,i,j;
//     cout <<"enter Row =";
//     cin >>r;
//     i=1;c=2*r-1;
//     while (i<=r){
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=i){
//             cout <<"*";
//             j++;          
//         }
//         j=1;
//         while (j<=i-1){
//             cout <<"*";
//             j++;
//         }
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     // Row--"r", Col--"c"
//     int r,c,i,j,k;
//     cout <<"enter Row =";
//     cin >>r;
//     i=1;c=2*r-1;
//     while (i<=r){
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=i){
//             cout <<j;
//             j++;          
//         }
//         j=1;k=i-1;
//         while (j<=i-1){
//             cout <<k;
//             j++,k--;
//         }
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4; // You can adjust this value to change the size of the pattern
//     int i = 1, j, k;

//     // Print the ascending part of the pattern
//     while (i <= n) {
//         j = 1;
//         // Print spaces
//         while (j <= n - i) {
//             cout << " ";
//             j++;
//         }
//         k = 1;
//         // Print asterisks
//         while (k <= 2 * i - 1) {
//             cout << "*";
//             k++;
//         }
//         j = 1;
//         // Print spaces again
//         while (j <= n - i) {
//             cout << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     // Print the descending part of the pattern
//     i = n - 1;
//     while (i >= 1) {
//         j = 1;
//         // Print spaces
//         while (j <= n - i) {
//             cout << " ";
//             j++;
//         }
//         k = 1;
//         // Print asterisks
//         while (k <= 2 * i - 1) {
//             cout << "*";
//             k++;
//         }
//         j = 1;
//         // Print spaces again
//         while (j <= n - i) {
//             cout << " ";
//             j++;
//         }
//         cout << endl;
//         i--;
//     }

//     return 0;
// }

// This code uses nested while loops to print the pattern. The outer loop (i) controls the number of rows, and the inner loops (j and k) print the spaces and asterisks, respectively.

// Example output:

// ...*...
// ..***..
// .*****.
// *******
// .*****.
// ..***..
// ...*...
// #include <iostream>
// using namespace std;
// int main (){
//     while (i<=r){
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         j=1;
//         while (j<=i){
//             cout <<k;
//             j++;
//         }
//         j=1;
//         while (j<=i-1){
//             cout <<m;
//             j++;
//         }
//         j=1;
//         while (j<=c/2-i+1){
//             cout <<" ";
//             j++;
//         }
//         m+=2;k+=2;i+=1;
//             cout <<endl;

//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int i,j,k,r,c;
//     cout <<"enter Row=";
//     cin >>r;
//     i=1;c=2*r;
//     k=r;
//     while (i<=r){
//         j=1;
//         while (j<=r-i+1){
//             cout <<j;
//             j++;
//         }
//         j=1;
//         while (j<=i-1){
//             cout <<"*";
//             j++;
//         }
//         j=1;
//         while (j<=i-1){
//             cout <<"*";
//             j++;
//         }
//         j=1;
//         k=r-i+1;
//         while (j<=r-i+1){
//             cout <<k;
//             j++;k--;
//         }
//         i++;
//         cout <<endl;
//     }
// } 
// #include <iostream>
// using namespace std;
// int main (){
//     int size,next,i,a,b;
//     cout <<"enter size=";
//     cin >>size;
//     i=1,a=0,b=1;
//     int sum=a+b;
//     cout <<"Series is ="<<endl;
//     cout <<a<<'\n'<<b<<'\n';
//     while (i<=size-2){
//         next =a+b;
//         cout <<next<<endl;
//         a=b;
//         b=next;
//         sum+=next;

//         i++;
//     }
//     cout <<"SUM IS= "<<sum<<endl;
// }











