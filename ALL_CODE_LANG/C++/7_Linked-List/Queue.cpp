// #include<bits/stdc++.h>
// using namespace std;
// class _queue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//     _queue(int n){
//         arr=new int[n];
//         front=-1;rear=-1;size=n;
//     }
//     bool isempty(){
//         return (front==-1);
//     }
//     bool isfull(){
//         return (rear+1)%size==front;
//     }
//     void push(int x){
//         if(isempty()){
//             front++;
//             rear++;
//             arr[rear]=x;
//             cout<<" "<<x<<" is pushed"<<endl;
//         }
//         else if(isfull()){
//             cout<<"queue overflow"<<endl;
//         }
//         else{
//             rear=(rear+1)%size;
//             arr[rear]=x;
//             cout<<" "<<x<<" is pushed"<<endl;
//         }
//     }
//     void pop(){
//         if(isempty()){
//             cout<<"queue underflow"<<endl;
//         }
//         else{
//             cout<<" "<<arr[front]<<" is popped"<<endl;
//             if(front==rear){front=rear=-1;}
//             else{front=(front+1)%size;}
//         }
//     }
//     int start(){
//         if(isempty()){
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
// };
//     int main(){
//         _queue q(5);
//         //pushing the elements
//         q.push(4);
//         q.push(5);
//         q.push(3);
//         q.pop();
//         q.push(7);
//         q.push(32);
//         q.push(89);
//         cout<<"empty-> "<<q.isempty()<<endl;
//         cout<<"full-> "<<q.isfull()<<endl;
//         // q.pop();
//         cout<<"front->"<<q.start();
//     }
//......................................................................
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
// class _queue{
//     ListNode *front;
//     ListNode *rear;
//     public:
//     // _queue(){}
//     _queue(){
//         this->front=NULL;
//         this->rear=NULL;
//     }
//     bool isempty(){
//         return front==NULL;
//     }
//     void push(int x){
//         ListNode *temp=new ListNode(x);
//         if(isempty()){
//             front=temp;
//             rear=temp;
//         }
//         else{
//             rear->next=temp;
//             rear=temp;
//         }
//         cout<<x<<" is pushed"<<endl;
//     }
//     void pop(){
//         if(isempty()){
//             cout<<"stack underflow"<<endl;
//         }
//         else{
//             cout<<"           "<<front->data<<" is poped"<<endl;
//             ListNode *temp=front;
//             front=front->next;
//             delete temp;
//         }
//     }
//     int start(){
//         if(isempty()){
//             cout<<"stack underflow"<<endl;
//             return -1;
//         }
//         return front->data;
//     }
// };
// int main(){
//     _queue q;
//     q.push(5);
//     q.push(6);
//     q.pop();
//     q.push(3);
//     q.push(7);
//     q.push(1);
//     cout<<"empty-> "<<q.isempty()<<endl;
//     cout<<"front-> "<<q.start()<<endl;
// }
//...........................................................................
// #include<bits/stdc++.h>
// using namespace std;
// int main(){                   //print all elements in a queue
//     queue<int>q;
//     q.push(5);
//     q.push(6);
//     q.push(9);
//     q.push(3);
//     int n=q.size();
//     while(n--){
//         cout<<q.front()<<endl;
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<q.front()<<endl;
// }
//...................................................................
// #include<bits/stdc++.h>
// using namespace std;
// int main(){                   //queue reversal 
//     queue<int>q;
//     q.push(5);
//     q.push(6);
//     q.push(9);
//     q.push(3);
//     stack<int>s;
//     int n=q.size();
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     while(n--){
//         cout<<q.front()<<endl;
//         q.push(q.front());
//         q.pop();
//     }
// }
//...................................................
// #include<bits/stdc++.h>
// using namespace std;
// int main(){                   //reversal of first k elements of a queue 
//     queue<int>q;
//     q.push(5);
//     q.push(6);
//     q.push(9);
//     q.push(3);
//     q.push(8);
//     int k=3;
//     int x=k;
//     stack<int>s;
//     int n=q.size();
//     while(k--){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     int m=n-x;
//     while(m--){
//         q.push(q.front());
//         q.pop();
//     }
//     while(n--){
//         cout<<q.front()<<endl;
//         q.push(q.front());
//         q.pop();
//     }
// }
//...............................................................
// #include<bits/stdc++.h>
// using namespace std;
// class _queue{                  // queue using two stacks
//     public:
//     stack<int>a;
//     stack<int>b;
//     bool isempty(){
//         return a.empty()&&b.empty();
//     }
//     void push(int x){
//         a.push(x);
//     }
//     int pop(){
//         // if(q.empty()){return 0;}
//         if(!b.empty()){int m=b.top();b.pop();return m;}
//         else{
//             if(a.empty()){cout<<"queue underflow"<<endl;return ;}
//             else{
//                 while(!a.empty()){
//                     b.push(a.top());
//                     a.pop();
//                 }
//                 int m=b.top();b.pop();return m;
//             }
//         }
//     }
//     int start(){
//         if(!b.empty()){
//             return b.top();
//         }
//         else{
//             if(a.empty()){cout<<"queue is empty"<<endl;return -1;}
//             else{
//                 while(!a.empty()){
//                     b.push(a.top());
//                     a.pop();
//                 }
//                 int m=b.top();return m;
//             }
//         }
//     }
// };
//..................................................................
#include<bits/stdc++.h>
using namespace std;
class _stack{
    public:
    queue<int>a;
    queue<int>b;
    bool empty(){
        return a.empty()&&b.empty();
    }
    void push(int x){
        
    }
};