// #include<iostream>
// #include<vector>              /*binary_search type -I*/
// using namespace std;
// bool search(int matrix[][4],int target){
//     int row=3,col=4;
//     // restore 2D array in vector ( 1D ) form
//     vector<int>v;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//         v.push_back(matrix[i][j]);  }
//     }
//     // apply binary search(s->start, e->end)
//     int s=0,e=v.size()-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(v[mid]==target){
//             return true;}
//         if(v[mid]<target){
//             s=mid+1;}
//         if(v[mid]>target){
//             e=mid-1;}
//     }
//     return false;}
// int main (){
//     int matrix[3][4]={1,3,5,7,10,11,16,20,23,30,34,60};
//     int target=13;
//     int value=search(matrix,target);
//     if(value){cout<<"found"<<endl;}
//     else{cout<<"not found"<<endl;}
// }
/*..............................................................................*/
// #include<iostream>
// #include<vector>          /*binary_search type -II*/
// using namespace std;
// bool search(int matrix[][4], int target) {
//     int row = 4;
//     int col = 4;
//     int r=0,c=col-1;
//     while(r<row&&col>=0){
//         if(col<0&&r>=row)break;
//         int element=matrix[r][c];
//         if(element==target){return 1;}
//         else if(element<target){r++;}
//         else{c--;}
//     }
//     return false;
// }
// int main() {
//     int matrix[4][4] = {-5};
//     int target =-10;
//     bool value = search(matrix, target);
//     if (value) {
//         cout << "found" << endl;
//     } else {
//         cout << "not found" << endl;
//     }
//     return 0;
// }