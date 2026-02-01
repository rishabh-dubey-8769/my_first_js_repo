#include<iostream>
#include<vector>                      /* SPIRAL_TYPE-1 Question */
using namespace std;
void spiral_print(int arr[][4],int row,int col){
    vector<int>v;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    /*rs-row_start,re-row_end,cs-column_start,ce-column_end*/    
    int i,j,count=0,rs=0,cs=0,re=row-1,ce=col-1;
    while(count<row*col){
        if(count<row*col)
        {i=rs;
        for(j=cs;j<=ce;j++){
            v.push_back(arr[i][j]);
            count++;
        }
        rs++;}
        if(count<row*col)
        {j=ce;
        for(i=rs;i<=re;i++){
            v.push_back(arr[i][j]);
            count++;
        }
        ce--;}
        if(count<row*col)
        {i=re;
        for(j=ce;j>=cs;j--){
            v.push_back(arr[i][j]);
            count++;
        }
        re--;}
        if(count<row*col)
        {j=cs;
        for(i=re;i>=rs;i--){
            v.push_back(arr[i][j]);
            count++;
        }
        cs++;}
        // rs++,cs++,re--,ce--;
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    spiral_print(arr,3,4);
}
/*..........................................................................................*/
// #include<iostream>
// #include<vector>                           /* SPIRAL_TYPE-2 Question */
// using namespace std;
// void spiral_print(int n){
//     int row=n;
//     int col=n;
//     int v[50][50]={0};
//     /*rs-row_start,re-row_end,cs-column_start,ce-column_end*/    
//     int i,j,k=1,count=0,rs=0,cs=0,re=row-1,ce=col-1;
//     while(count<row*col){
//         if(count<row*col&&k<=n*n)
//         {i=rs;
//         for(j=cs;j<=ce;j++){
//             v[i][j]=k;
//             count++;
//             k++;
//         }
//         rs++;}
//         if(count<row*col&&k<=n*n)
//         {j=ce;
//         for(i=rs;i<=re;i++){
//             v[i][j]=k;
//             count++;
//             k++;
//         }
//         ce--;}
//         if(count<row*col&&k<=n*n)
//         {i=re;
//         for(j=ce;j>=cs;j--){
//             v[i][j]=k;
//             count++;
//             k++;
//         }
//         re--;}
//         if(count<row*col&&k<=n*n)
//         {j=cs;
//         for(i=re;i>=rs;i--){
//             v[i][j]=k;
//             count++;
//             k++;
//         }
//         cs++;}
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//     cout<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     spiral_print(3);
// }