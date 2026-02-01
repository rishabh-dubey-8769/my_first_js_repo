#include<iostream>
#include<vector>
using namespace std;
void rotate_90_deg(int matrix[][3]){
    /* OLD MATRIX */
    int r=3;
    int c=3;
    /*rs-> row_start,re-> row_end,cs-> column_start,ce-> column_end*/    
    int i,j,rs=0,re=r-1,cs=0,ce=c-1,k=r-1,count=0;
    /* NEW MATRIX */
    int r_new=c;
    int c_new=r;
    vector<int>v(r*c);
    for(int j=cs;j<=ce;j++){
        if(count<r*c){
            int p=cs;
            for(int i=rs;i<=re;i++){
            v[c_new*i+j]=matrix[k][p];
            count++,p++;}
            k--;
        }
    }
    for(auto i:v){
        cout<<i<<" ";}
}
int main (){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    rotate_90_deg(matrix);
}















