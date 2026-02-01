// #include <iostream>
// using namespace std;
// int sqrut(int n,int start,int end){
//     long long int sq,ans,mid;
//     while (start<=end){
//         mid=start+(end-start)/2;
//         sq=mid*mid;
//         if (sq==n){
//             return mid;
//         }
//         if(sq<n){
//             ans=mid;
//             start=mid+1;
//         }
//         else {end =mid-1;}
//     }
//     return ans;
// }
// int main (){
//     int n;
//     cout <<"enter n= ";
//     cin >>n;
//     int start=1,end=n;
//     cout <<sqrut(n,start,end);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int sqrut(int n, int start, int end)
// {
//     long long int mid, ans, sq;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         sq = mid * mid;
//         if (sq == n)
//         {
//             return mid;
//         }
//         if (sq < n)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }
// double accurate(int n, int precision, int ans)
// {
//     double factor = 1, value;
//     for (int i = 1; i <= precision; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             value = j;
//         }
//     }
//     return value;
// }
// int main()
// {
//     int n;
//     cout << "enter n= ";
//     cin >> n;
//     int x;
//     cout <<"enter upto_decimal= ";
//     cin >>x;
//     int start = 1, end = n;
//     int ans=sqrut(n, start, end);
//     cout << accurate(n, x, ans);
//     return 0;
// }