// #include<bits/stdc++.h>
// using namespace std;
//     class _stack{
//         int *arr;
//         int size;
//         int top;
//         public:
//         _stack(int s){
//             this->size=s;
//             this->top=-1;
//             arr=new int[s];
//         }
//         void push(int value){
//             if(top==size-1){
//                 cout<<" stack overflow"<<endl;
//                 return ;
//             }
//             top++;
//             arr[top]=value;
//             cout<<value<<" is pushed"<<endl;
//         }
//         void pop(){
//             if(top==-1){
//                 cout<<"stack underflow"<<endl;
//                 return ;
//             }
//             cout<<arr[top]<<" is popped"<<endl;
//             top--;
//         }
//         int peek(){
//             if(top==-1){
//                 cout<<"stack is empty"<<endl;
//                 return -1;
//             }
//             return arr[top];
//         }
//         bool is_empty(){
//             return top==-1;
//         }
//         int is_stacksize(){
//             return top+1;
//         }
//     };
    // int main(){
    //     _stack st(5);
    //     st.push(-1);
    //     st.push(7);
    //     st.push(4);
    //     st.push(3);
    //     st.pop();
    //     int val=st.peek();
    //     if(st.is_empty()==0){
    //         cout<<"peak value= "<<val<<endl;
    //     }
    //     cout<<"empty= "<<st.is_empty()<<endl;
    //     cout<<"stack size= "<<st.is_stacksize()<<endl;
    // }
//...............................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class ListNode{
//     public:
//     int data;
//     ListNode *next;
//     ListNode(int value){
//         this->data=value;
//         this->next=NULL;
//     }
// };
// class _stack{
//     public:
//     ListNode *top;
//     int size;
//     _stack(){
//         this->top=NULL;
//         this->size=0;
//     }
//     void push(int value){
//         ListNode *temp=new ListNode(value);
//         if(temp==NULL){cout<<"stack overflow"<<endl;}
//         temp->next=top;
//         top=temp;
//         cout<<value<<" is pushed"<<endl;
//         size++;
//     }
//     void pop(){
//         if(top==NULL){cout<<"stack underflow"<<endl;return ;}
//         ListNode *temp=top;
//         top=top->next;
//         cout<<temp->data<<" is popped"<<endl;
//         delete temp;
//         size--;
//     }
//     int peek(){
//         if(top==NULL){cout<<"stack is empty"<<endl;return -1;}
//         return top->data;
//     }
//     bool is_empty(){
//         return top==NULL;
//     }
//     int is_stacksize(){
//         return size;
//     }
// };
// int main(){
//     _stack st;
//     st.push(-1);
//     st.push(7);
//     st.push(4);
//     st.push(3);
//     cout<<endl;
//     st.pop();
//     int val=st.peek();
//     if(st.is_empty()==0){
//         cout<<"peak value= "<<val<<endl;
//     }
//     cout<<"empty= "<<st.is_empty()<<endl;
//     cout<<"stack size= "<<st.is_stacksize()<<endl;
// }
//......................................................................................
// #include<bits/stdc++.h>
// using namespace std;            /*print corresponding opening&closing bracket numbers*/
// int main(){
//     string s="(aa(bdc))p(de)";
//     stack<int>a;
//     stack<int>b;
//     int count=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='('){
//             count++;
//             a.push(count);
//             b.push(a.top());
//         }
//         else if(s[i]==')'){
//             b.push(a.top());
//             a.pop();
//         }
//     }
//     vector<int>str(b.size());
//     for(int i=b.size()-1;i>=0;i--){
//         str[i]=b.top();
//         b.pop();
//     }
//     for(auto i:str){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//..................................................................
// #include<bits/stdc++.h>
// using namespace std;                   /*next greater element on right*/
// int main(){
//     vector<int>a={8,6,4,7,4,9,10,8,12};
//     stack<int>s;
//     vector<int>v(a.size(),-1);
//     int i=0;
//     while(i<a.size()){
//         if(s.empty()){s.push(i++);}
//         else if(a[i]<a[s.top()]){s.push(i++);}
//         else if(a[i]>a[s.top()]){
//             v[s.top()]=a[i];
//             s.pop();
//         }
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//.........................................................................
// #include<bits/stdc++.h>
// using namespace std;                   /*next greater element on left*/
// int main(){
//     vector<int>a={100,80,55,70,60,75,85};
//     stack<int>s;
//     vector<int>v(a.size(),-1);
//     int i=a.size()-1; 
//     while(i>=0){
//         if(s.empty()){s.push(i--);}
//         else if(a[i]<a[s.top()]){s.push(i--);}
//         else if(a[i]>a[s.top()]){
//             v[s.top()]=a[i];
//             s.pop();
//         }
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//...................................................................
// #include<bits/stdc++.h>
// using namespace std;                   
// int main(){          /*stock span problem(i.e. no. of consecutive smaller elements on left)*/
//     vector<int>a={100,80,55,70,60,75,85};
//     stack<int>s;
//     vector<int>b;
//     vector<int>v(a.size(),-1);
//     int i=a.size()-1;
//     while(i>=0){
//         if(s.empty()){s.push(i--);}
//         else if(a[i]<a[s.top()]){s.push(i--);}
//         else if(a[i]>=a[s.top()]){
//             v[s.top()]=i;
//             s.pop();
//         }
//     }
//     for(int j=0;j<v.size();j++){
//         if(v[j]==-1){b.push_back(1);}
//         else{b.push_back(j-v[j]);}
//     }
//     for(auto i:b){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//.....................................................................
// #include<bits/stdc++.h>
// using namespace std;                   /*next smaller element on right*/
// int main(){
//     vector<int>a={8,6,4,7,4,9,10,8,12};
//     stack<int>s;
//     vector<int>v(a.size(),-1);
//     int i=0;
//     while(i<a.size()){
//         if(s.empty()){s.push(i++);}
//         else if(a[i]>=a[s.top()]){s.push(i++);}
//         else if(a[i]<a[s.top()]){
//             v[s.top()]=a[i];
//             s.pop();
//         }
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//......................................................................
// #include<bits/stdc++.h>
// using namespace std;                   /*next smaller element on left*/
// int main(){
//     vector<int>a={8,6,4,7,4,9,10,8,12};
//     stack<int>s;
//     vector<int>v(a.size(),-1);
//     int i=a.size()-1;
//     while(i>=0){
//         if(s.empty()){s.push(i--);}
//         else if(a[i]>=a[s.top()]){s.push(i--);}
//         else if(a[i]<a[s.top()]){
//             v[s.top()]=a[i];
//             s.pop();
//         }
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//.............................................................
// #include<bits/stdc++.h>
// using namespace std;                   
// int main(){              /*largest rectangle in histogram*/
//     vector<int>a={2,3,4,2,6,5,4,5,3};
//     stack<int>s;
//     vector<int>l(a.size(),-1);
//     int i=a.size()-1;
//     while(i>=0){
//         if(s.empty()){s.push(i--);}
//         else if(a[i]>=a[s.top()]){s.push(i--);}
//         else if(a[i]<a[s.top()]){
//             l[s.top()]=i;
//             s.pop();
//         }
//     }
//     s = stack<int>();//emptying the stack.........
//     vector<int>r(a.size(),a.size());
//     i=0;
//     while(i<a.size()){
//         if(s.empty()){s.push(i++);}
//         else if(a[i]>=a[s.top()]){s.push(i++);}
//         else if(a[i]<a[s.top()]){
//             r[s.top()]=i;
//             s.pop();
//         }
//     }
//     vector<int>c;
//     for(int j=0;j<a.size();j++){
//         int count=r[j]-l[j]-1;
//         c.push_back(a[j]*count);
//     }
//     sort(c.begin(),c.end());
//     cout<<c.back()<<endl;
// }
//............................................................................
// #include<bits/stdc++.h>
// using namespace std;                        /*the celebrity problem*/
// int main(){
//     vector<vector<int>>m={{0,1,0,1,1},
//                           {0,0,0,1,1},
//                           {0,1,0,1,0},
//                           {0,0,0,0,0},
//                           {1,0,1,1,0}
//     };
//     stack<int>s;
//     int a=m.size();
//     int b=m[0].size();
//     for(int i=b-1;i>=0;i--){
//         s.push(i);
//     }
//     while(s.size()>1){
//         int p=s.top();
//         s.pop();
//         int q=s.top();
//         s.pop();
//         if(m[p][q]==1&&m[q][p]==0){s.push(q);}
//         else if(m[p][q]==0&&m[q][p]==1){s.push(p);}
//     }
//     int k=s.top();
//     for(int i=0;i<b;i++){
//         if(m[k][i]==1){cout<<" no celebrity found"<<endl;break;}
//     }
//     cout<<" celebrity= "<<k<<endl;
// }
//........................................................................
// #include<bits/stdc++.h>
// using namespace std;
// int main(){            //find the maximum of minimum for every sliding window
//     vector<int>a{10,20,15,50,10,70,30};
//     vector<int>ans;
//     int mini=0,maxi=0;
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         int k=i+1;
//         for(int j=0;j<n-k+1;j++){
//             mini = INT_MAX;
//             for(int m=j;m<j+k;m++){
//                 mini=min(mini,a[m]);
//             }
//             maxi=max(maxi,mini);
//             // mini=0;
//         }
//         ans.push_back(maxi);
//         maxi=0;
//     }
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }