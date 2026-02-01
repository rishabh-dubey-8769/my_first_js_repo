// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int a[]={3,7,2,5,8,1,4};
//     int key;
//     cout <<"enter key=";
//     cin>>key;
//     int n= sizeof(a)/sizeof(int);
//     sort(a,a+n);
//     int start=0,mid,end=n-1;
//     while (start<=end){
//         mid=start+(end-start)/2;
//         if(a[mid]==key){
//             cout <<mid<<endl;
//             break;
//         }
//         else if(a[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     cout <<endl;
// }

// expecting 1st and last occurence:....................................................

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int a[]={0,2,3,5,5,5,5,7,7,9};
// answer expected " 3,6"
//     int key,first,last;
//     cout <<"enter key=";
//     cin>>key;
//     int n= sizeof(a)/sizeof(int);
//     sort(a,a+n);
//     int start=0,mid,end=n-1;
//     while (start<=end){
//         mid=start+(end-start)/2;
//         if(a[mid]==key){
//           first =mid;
//           while(first>0&&a[first-1]==key){
//             first--;
//           }
//           last=mid;
//           while(last<n-1&&a[last+1]==key){
//             last++;
//           }
//           cout <<"first index= "<<first<<'\n'<<"last index= "<<last<<endl;
//           break;
//         }
//         else if(a[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     cout <<endl;
// }

// MOUNTAIN PEAK PROBLEM.............................................................
// method - 1

// #include <iostream>
// using namespace std;
// int main (){
//     int a[]={3,5,8,7,1};
//     int n=sizeof(a)/sizeof(int);
//     int start=0,mid,end=n-1;
//     while(start<end){
//         mid=start+(end-start)/2;
//         if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
//             cout <<"Peak value= "<<a[mid]<<endl;
//             break;
//         }
//         else{start++;}
//     }
// }

// method-2
// MOUNTAIN PEAK PROBLEM
// #include <iostream>
// using namespace std;
// int peak(int a[],int n){
//     int start=0,mid,k,end=n-1;
//     while (start<end){
//         mid=start+(end-start)/2;
//         if(a[mid]<a[mid+1]){
//             start=mid+1;
//         }
//         else{end=mid;}
//     }
//     return a[end];
// }

// int main (){
//     int a[]={3,5,8,7,1};
//     int n=sizeof(a)/sizeof(int);
//     cout <<peak(a,n);
//     return 0;
// }

// PIVOT VALUE ......................................................................
// method-1

// #include <iostream>
// using namespace std;
// int pivot(int a[],int n){
//     int start=0,mid,end=n-1;
//     while (start<end){
//         mid=start+(end-start)/2;
//         if(a[mid]<a[mid-1]&&a[mid]<a[mid+1]){
//             return a[mid];
//             break;
//         }
//     }
// }
// int main (){
//     int a[]= {7,9,1,2,3};
//     int n=sizeof(a)/sizeof(int);
//     cout <<"pivot= "<<pivot(a,n);
//     return 0;
// }

// method-2

// #include <iostream>
// using namespace std;
// int pivot (int a[],int n){
//     int start=0,mid,end=n-1;
//     while(start<end){
//         mid=start+(end-start)/2;
//         if(a[mid]>=a[start]){
//             start=mid+1;
//         }
//         else{end=mid;
//         }

//     }
//     return a[start];
// }
// int main (){
//     int a[]={7,9,1,2,3};
//     int n=sizeof(a)/sizeof(int);
//     cout <<"pivot= "<<pivot(a,n);
//     return 0;
// }

// method-3
// #include <iostream>
// using namespace std;
// int pivot (int a[],int n){
//     int start=0,mid,end=n-1;
//     while(start<end){
//         mid=start+(end-start)/2;
//         if(a[mid]<=a[end]){
//             end=mid;
//         }
//         else{start=mid+1;}

//     }
//     return a[end];
// }
// int main (){
//     int a[]={7,9,1,2,3};
//     int n=sizeof(a)/sizeof(int);
//     cout <<"pivot= "<<pivot(a,n);
//     return 0;
// }

