#include<iostream>
#include<vector>
using namespace std;
void wave_print(int arr[][3],int rows,int cols){
    vector<int >v;
    for(int j=0;j<cols;j++){
        if(j%2==0){
            for(int i=0;i<rows;i++){
                v.push_back(arr[i][j]);
        }   }
        else{
            int p=rows-1,q=j;
            while(p>=0){
                v.push_back(arr[p][q]);
                p--;
            }
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main (){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int rows=3,cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    wave_print(arr,3,3);
    return 0;  
}