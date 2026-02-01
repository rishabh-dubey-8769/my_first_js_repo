// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public :
//     int data;
//     node *address;
//     node(int data){
//         this->data=data;
//         this->address=NULL;
//         cout<<data<<" "<<address<<endl;
//     }
// }; 
// int main(){
//     node *node1=new node(45);
// }
//...................................................
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int val){
//         this->data = val;
//         this->next = NULL;
//     }

// };
// int main(){
//     node *head;
//     head=NULL;
//     vector<int>arr={1,4,2,6,3,7,5};
//     for(int i=0;i<arr.size();i++){
//         if(head==NULL){
//             head=new node(arr[i]);
//         }
//         else{
//             node *temp;
//             temp=new node(arr[i]);
//             temp->next=head; // insertion in starting 
//             head=temp;
//         }
//     }
//     node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
//...................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     node *head;
//     head=NULL;
//     node *current=NULL;
//     vector<int>arr={2,4,6,8,10};
//     for(int i=0;i<arr.size();i++){
//         if(current==NULL){current=new node(arr[i]);head=current;}
//         else {
//             node *temp;
//             temp=new node(arr[i]);
//             current->next=temp;  // insertion in last
//             current=temp;
//         }
//     }
//     node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
//..............................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// void recursion(vector<int>&arr,int itr,int n,node *&head,node *&current){
//     if(itr==n){return ;}
//     if(current==NULL){current=new node(arr[itr]);head=current;}
//     else{
//         node *temp;
//         temp=new node(arr[itr]);
//         current->next=temp;
//         current=temp;
//     }
//     recursion(arr,itr+1,n,head,current);
// }
// int main(){
//     node *head;
//     head=NULL;
//     node *current=NULL;
//     vector<int>arr={2,4,6,8,10};
//     int n=arr.size();
//     recursion(arr,0,n,head,current);
//     node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
//..........................................................
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     vector<int>arr={2,4,6,10};
//     int k=3,ans=8;
//     Node *head=new Node(arr[0]);
//     Node *curr = head;
//     // Creating the linked list from the array
//     // and linking the nodes together
//     for (int i = 1; i < arr.size(); i++) {
//         Node *temp;
//         temp = new Node(arr[i]);
//         curr->next = temp;
//         curr = temp;
//     }
//     Node *curr1=head;
//     for(int i=0;i<k-1;i++){
//         curr1=curr1->next;
//     }
//     Node *curr2=curr1->next;
//     Node *temp=new Node(ans);
//     curr1->next=temp;
//     temp->next=curr2;
//     Node *new_temp=head;
//     while(new_temp){
//         cout<<new_temp->data<<" ";
//         new_temp=new_temp->next;
//     }
// }
//.....................................................................
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public :
//     int data;
//     Node *next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// void createlist(vector<int>&arr,Node *&curr,int i){
//     if(i==arr.size())return ;
//     Node *temp;
//     temp=new Node(arr[i]);
//     curr->next=temp;
//     curr=temp;
//     createlist(arr,curr,i+1);
// }
// int main(){
//     int count=0;// counts how many times elements deleted from starting
//     vector<int>arr={2,4,6,8,10};
//     Node *head;
//     head=new Node(arr[0]);
//     Node *curr=head;
//     createlist(arr,curr,1);
//     cout<<"original linkedlist= "<<endl;
//     Node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

//     cout<<endl;
//     cout<<"after deletion from start,updated linkedlist= "<<endl;
//     if(head!=NULL){Node *key=head;
//     head=head->next;
//     delete key;}  // 
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     }
//.......................................................
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public :
//     int data;
//     Node *next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// void createlist(vector<int>&arr,Node *&curr,int i){
//     if(i==arr.size())return ;
//     Node *temp;
//     temp=new Node(arr[i]);
//     curr->next=temp;
//     curr=temp;
//     createlist(arr,curr,i+1);
// }
// int main(){
//     vector<int>arr={2,4,6,8,10};
//     Node *head;
//     head=new Node(arr[0]);
//     Node *curr=head;
//     createlist(arr,curr,1);
//     cout<<"original linkedlist= "<<endl;
//     Node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
//     cout<<"after deletion from end, updated linkedlist= "<<endl;
//     if(arr.size()>1){Node *start=head;
//         for(int i=0;i<arr.size()-2;i++){
//             start=start->next;
//         }
//         Node *tail=start->next;
//         start->next=NULL;
//         delete tail;
        // Node *temp=head;
        // while(temp){
        //     cout<<temp->data<<" ";
        //     temp=temp->next;
        // }
//     }
// }
//..........................................................
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     vector<int>arr={2,4,6,8,10};
//     Node *head;
//     head=new Node(arr[0]);
//     Node *curr=head;
//     for(int i=1;i<arr.size();i++){
//         Node *temp;
//         temp=new Node(arr[i]);
//         curr->next=temp;
//         curr=temp;
//     }
//     cout<<"original linkedlist= "<<endl;
//     Node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
//     cout<<"after deletion from mid, updated linkedlist= "<<endl;
//     int k=4;
//     Node *curr1=head;
//     for(int i=0;i<k-1;i++){
//         curr1=curr1->next;
//     }
//     temp=curr1->next;
//     Node *curr2=temp->next;
//     curr1->next=curr2;
//     delete temp;
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
//............................................................
// #include<bits/stdc++.h>
// using namespace std; 
// class Node{
//     public :
//     int data;
//     Node *next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     vector<int>arr={2,4,6,8,10};
//     Node *head;
//     head =new Node(arr[0]);
//     Node *curr=head;
//     for(int i=1;i<arr.size();i++){
//         Node *temp;
//         temp=new Node(arr[i]);
//         curr->next=temp;
//         curr=temp;
//     }
//     cout<<"original linkedlist= "<<endl;
//     Node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
//     curr=head;
//     Node *future=NULL;
//     Node *previous=NULL;
//     cout<<"reversed linkedlist= "<<endl;
//     while(curr){
//         future=curr->next;
//         curr->next=previous;
//         previous=curr;
//         curr=future;
//     }
//     head = previous;
//     temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }