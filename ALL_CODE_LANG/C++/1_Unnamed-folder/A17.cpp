    // #include <iostream>
    // using namespace std;
    // bool search(int arr[],int size){
    // int key;
    // cout <<"enter key=";
    // cin >>key;
    // for (int i=0;i<size;i++){
    //     if (arr[i]==key){
    //         return 1;
    //     }
    // }
    // return 0;
    // }
    // int main (){
    // int size;
    // cout <<"enter size=";
    // cin >>size;
    // int arr[50];
    // for(int i=0;i<size;i++){
    //     cout <<"array["<<i<<"]=";
    //     cin >>arr[i];
    // } 
    // int found =search(arr,size);
    // if(found){
    //     cout <<"PRESENT"<<endl;
    // }
    // else{cout <<"ABSENT"<<endl;}
    // return 0;
    // }...............................................................................

    // #include  <iostream>
    // using namespace std;
    // void search(int arr[],int size){
    //     int key,value=0;
    //     cout <<"enter key=";
    //     cin >>key;
    //     for (int i=0;i<size;i++){ 
    //         if(arr[i]==key){
    //             value=1;} 
    //     }
    //     if(value)
    //     {cout<<"PRESENT"<<endl;}
    //     else{cout <<"ABSENT"<<endl;}
    // }
    // int main (){
    //     int size;
    //     cout <<"enter size=";
    //     cin >>size;
    //     int arr[50];
    //     for (int i=0;i<size;i++){
    //         cout <<"array["<<i<<"]=";
    //         cin >>arr[i];
    //     }
    //     search(arr,size);
    //     search(arr,size);
    // }..................................................................

    // #include <iostream>
    // using namespace std;
    // void swap(){
    //     int size;
    //     cout <<"enter size=";
    //     cin>>size;
    //     int arr[50],k;
    //     for (int i=0;i<size;i++){
    //         cout <<"array["<<i<<"]=";
    //         cin>>arr[i];
    //     }
    //     cout <<"Swapped values are:"<<endl;
    //     for(int i=0;i<size;i++){
    //         if (i<size/2){
    //         k=arr[i];
    //         arr[i]=arr[size-i-1];
    //         arr[size-i-1]=k;}
    //         cout <<"array["<<i<<"]= "<<arr[i]<<endl;;
    //     }
    // }
    // int main (){
    //     swap();
    // }..........................................................................

    // #include <iostream>
    // using namespace std;
    // void swap_alternate(){
    //     int size,k;
    //     cout <<"enter size=";
    //     cin >>size;
    //     int arr[50];
    //     for (int i=0;i<size;i++){
    //         cout <<"array["<<i<<"]=";
    //         cin >>arr[i];
    //     }
    //     cout <<"Alternately Swapped array="<<endl;
    //     if (size%2==0){
    //         for(int i=0;i<size;i+=2){
    //         k=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=k;
    //         cout <<"array["<<i<<"]= "<<arr[i]<<endl;
    //         cout <<"array["<<i+1<<"]= "<<arr[i+1]<<endl;
    //     }}
    //     else{
    //          for(int i=0;i<size-1;i+=2){
    //         k=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=k;
    //         cout <<"array["<<i<<"]= "<<arr[i]<<endl;
    //         cout <<"array["<<i+1<<"]= "<<arr[i+1]<<endl;
    //     }
    //     cout <<"array["<<size-1<<"]= "<<arr[size-1]<<endl;
    //     }
    // }
    // int main (){
    //     swap_alternate();
    //     swap_alternate();

    // }..............................................................................

                // #include <iostream>
                // using namespace std;
                // void unique_check(){
                //     int size;
                //     cout <<"enter size=";
                //     cin >>size;
                //     int arr[50];
                //     for(int i=0;i<size;i++){
                //         cout <<"array["<<i<<"]=";
                //         cin>>arr[i];
                //     }
                //     int ans=0;
                //     for(int i=0;i<size;i++){
                //         ans^=arr[i];
                //     }
                //     cout <<"Unique elements = "<<endl;
                //     cout <<ans<<endl;
                // }
                // int main (){
                //     unique_check();
                //     unique_check();
                // }

















