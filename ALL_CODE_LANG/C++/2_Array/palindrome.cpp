// #include<iostream>                    /*    "check_palindrome "     */
// #include<vector>                        /* ........method-1...... */
// #include<algorithm>
// using namespace std;
// bool check_palindrome(char arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         if(arr[s]!=arr[e]){
//             return 0;
//         }
//         else{
//             s++,e--;
//         }
//     }
//     return 1;
// }
// char reverse(char ch[],int len){
//     reverse(ch,ch+len);
//     return ch[len];
// }
// char to_lowercase(char arr[],int n){
//     int i=0;
//     while(i<n){
//         if(arr[i]>='A'&&arr[i]<='Z')
//         arr[i]=arr[i]-'A'+'a';
//         i++;
//     }
//     return arr[n];
// }
// int getlength(char ch[100]){
//     int count=0;
//     for(int i=0;i<100;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{count++;}
//     }
//     return count;
// }
// int main (){
//     char ch[100];
//     cout <<"enter character= ";
//     cin >>ch;
//     int len=getlength(ch);
//     to_lowercase(ch,len);
//     reverse(ch,len);
//     cout<<"check_palindrome= "<<check_palindrome(ch,len);
//     // check_palindrome(ch,len);
//     // if(check_palindrome){
//     //     cout <<"Yeah ,palindrome."<<endl;
//     // }
//     // else{cout <<"Not, palindrome.";}
// }
/*........................................................................................*/
// #include<iostream>
// #include<deque>                 /* ........method-1...... */
// #include<algorithm>
// using namespace std;
// int main (){
//     deque<char>d={'j','a','h','a','j'};
//     int n;
//     n=d.size();
//     int s=0,e=n-1;
//     int i;
//     int count=0;
//     deque<char>original(d);
//     while(s<e){
//         swap(d[s],d[e]);
//         s++,e--;
//     }
//     deque<char>reverse(d);
//     for(i=0;i<n;i++){
//         if(original[i]!=reverse[i]){
//             cout <<" not palindrome."<<endl;
//             break;
//         }
//         else{
//             count++;
//         }
//     }
// if(count==n){
//     cout<<" Yeah,palindrome.";
// }
// cout<<endl;
// }
/*......................................................................*/
// #include<iostream>
// #include<deque>                           /* ........method-2...... */
// #include<algorithm>
// using namespace std;
// int main (){
//     deque<char>d={'j','a','h','a','j'};
//     int n=d.size();
//     int s=0,e=n-1;
//     int count=0;
//     while(s<e){
//         if(d[s]==d[e])
//         s++,e--,count++;
//         else{
//             cout<<"not palindrome."<<endl;
//             break;
//         }
//     }
//     if(count==n/2){
//         cout<<" Yeah,palindrome.";
//     }
//     cout<<endl;
// }
/*............................................................................*/
