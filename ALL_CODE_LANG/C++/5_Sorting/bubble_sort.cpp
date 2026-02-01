#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    bool swapped;
    for( int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if (swapped !=1){break;}
    }
}
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}
int main (){
    int arr[]={6,2,8,4,10};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    print(arr,n);
}