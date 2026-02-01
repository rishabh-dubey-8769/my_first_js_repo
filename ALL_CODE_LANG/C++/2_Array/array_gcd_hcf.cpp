// #include<iostream>
// using namespace std;
// int findGCD(int nums[5],int n) {
//         int max=nums[0];
//         for(int i=0;i<n;i++){
//             if(nums[i]>=max){
//                 max=nums[i];
//             }
//         }                   
//         int a=max;  
//         int min=nums[0];
//         for(int i=0;i<n;i++){
//             if(nums[i]<=min){
//                 min=nums[i];
//             }
//         }
//         int b=min;
//         if(a==b){return b;}
//         while(a>b){
//             a=a-b;
//             if(a==b){return b;}
//             if(a==0){return b;}
//             if(a<b){
//                 swap(a,b);
//             }
//         }
//         return a+b;   
// }
// int main (){
//     int nums[]={2,5,6,9,17};
//     cout<<"HCF= "<<findGCD(nums,5);
//     // findGCD(nums,5);
// }