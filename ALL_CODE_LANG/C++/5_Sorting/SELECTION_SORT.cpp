#include <iostream>
using namespace std;
int mini(int arr[],int n,int i){
    int min=i;
    for (int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    return min;
}
int sort_(int arr[],int n){
    for (int i=0;i<n;i++){
        int min=mini(arr,n,i);
        swap(arr[i],arr[min]);
        cout <<arr[i]<<" ";
    }
    }
int main (){
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    sort_(arr,n);
}













