#include <iostream>
using namespace std;
void insertion_sort(int a[],int n){
    // int j;
    for (int i=0;i<n-1;i++){
        int temp=a[i];
        int j=i-1;
        for (;j>=0;j--){
            if (a[j]>temp){
                a[j+1]=a[j];
            }
            else {break;}
        }
        a[j+1]=temp;
    }
}
void print (int a[],int n){
    for (int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
}
int main (){
    int a[]={6,2,5,4,9};
    int n=sizeof(a)/sizeof(int);
    insertion_sort(a,n);
    print (a,n);
}