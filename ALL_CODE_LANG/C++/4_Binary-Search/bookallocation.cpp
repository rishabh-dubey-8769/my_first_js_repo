// #include <iostream>
// using namespace std;
// bool check(int a[], int n, int count, int mid)
// {
//     int studentcount = 1, add = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (add + a[i] <= mid)
//         {
//             add += a[i];
//         }
//         else
//         {
//             studentcount++;
//             if (studentcount > count || a[i] > mid)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int allocate(int a[], int n, int count)
// {
//     int start = 0, sum = 0, mid, end, ans;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     end = sum;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         int i = 0, add = 0;
//         if (check(a, n, count, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//           ,  start = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int a[] = {10, 20, 30, 40};
//     // int a[] = {12,34,67,90};
//     // int a[] = {5,5,5,5};

//     int count, n = 4;
//     cout << "enter student_count= ";
//     cin >> count;
//     cout << allocate(a, n, count);
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {4, 9, 2, 5, 1};
//     int n = sizeof(a) / sizeof(int);
//     int min = a[0];
//     int max = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     cout << "min= " << min << endl;
//     cout << "max= " << max << endl;
// }

// agressive cows..................................................

// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool check(int a[],int count ,int n,int mid){
//     int cow_count=1;
//     int last_posn=a[0];
//     for(int i=0;i<n;i++){
//     if(a[i]-last_posn>=mid){
//         cow_count++;
//         if(cow_count==count){
//             return 1;
//         }
//         last_posn=a[i];
//     }
//     }
//     return 0;
// }
// int aggression(int a[],int n,int start,int end,int mid,int count){
//     int ans;
//     while (start<=end){
//         mid=start+(end-start)/2;
//         if(check(a,count,n,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{end=mid-1;}
//     }
//     return ans;
// }
// int main (){
//     int a[]={4,2,1,3,6};
//     int count;
//     cout<<"enter cows'count= ";
//     cin >>count;
//     int n = sizeof(a) / sizeof(int);
//     sort(a,a+n);
//     int min = a[0];
//     int max = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     int start=0;
//     int end=max-min;
//     int mid=start+(end-start)/2;
//     cout <<aggression(a,n,start,end,mid,count);
// }