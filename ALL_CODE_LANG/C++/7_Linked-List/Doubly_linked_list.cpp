// ..............creating doubly linked list using loop........

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// int main(){
//     vector<int>arr={2,3,4,5,6};
//     Node *head;
//     head=new Node(arr[0]);
//     Node *curr=head;
//     head->prev=NULL;
//     for(int i=1;i<arr.size();i++){
//         Node *temp;
//         temp=new Node(arr[i]);
//         curr->next=temp;
//         temp->prev=curr;
//         curr=temp;
//     }
//     cout<<"original linkedlist= "<<endl;
//     Node *original=head;
//     while(original){
//         cout<<original->data<<" ";
//         original=original->next;
//     }
//     cout<<endl;
//     cout<<"insertion at starting= "<<endl;
//     Node *temp=new Node(1);  //.....insertion at starting
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
//     Node *start=head;
//     while(start){
//         cout<<start->data<<" ";
//         start=start->next;
//     }
//     cout<<endl;
//     cout<<"insertion at end= "<<endl;
//     Node *tail=head;
//     while(tail->next){
//         tail=tail->next;
//     }
//     temp=new Node(7);  //.....insertion at end
//     tail->next=temp;
//     temp->prev=tail;
//     Node *end=head;
//     while(end){
//         cout<<end->data<<" ";
//         end=end->next;
//     }
//     cout<<endl;
//     // ...........insertion at middle
//     cout<<"insertion at middle= "<<endl;
//     int k=2;
//     int count=k-1;
//     Node *ptr=head;
//     while(count--){
//         ptr=ptr->next;
//     }
//     Node *front=ptr->next;
//     temp=new Node(44);
//     ptr->next=temp;
//     temp->prev=ptr;
//     temp->next=front;
//     front->prev=temp;
//     Node *mid=head;
//     while(mid){
//         cout<<mid->data<<" ";
//         mid=mid->next;
//     }
//     cout<<endl;
// }
//....................................................................

//..............creating doubly linked list using recurssion...........
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node *create_DLL(vector<int>arr,int itr,int n,Node *back){
    if(itr==n){return NULL;}
    Node *temp=new Node(arr[itr]);
    temp->prev=back;
    temp->next=create_DLL(arr,itr+1,n,temp);
    return temp;
}
int main(){
    Node *head=NULL;
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int n=arr.size();
    head=create_DLL(arr,0,n,NULL);
    cout<<"original linkedlist= "<<endl;
    Node *original=head;
    while(original){
        cout<<original->data<<" ";
        original=original->next;
    }
    cout<<endl;
    Node *key=head;  //...........removal from starting.........
    head=head->next;
    head->prev=NULL;
    delete key;
    cout<<"after removal from starting"<<endl;
    Node *start=head;
    while(start){
        cout<<start->data<<" ";
        start=start->next;
    }
    cout<<endl;
    Node *tail=head;   //...........removal from ending...........
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail=tail->prev;
    tail->next=NULL;
    cout<<"after removal from ending"<<endl;
    Node *end=head;
    while(end){
        cout<<end->data<<" ";
        end=end->next;
    }
    cout<<endl;
    int k=3;
    int count=k-2;
    Node *curr=head;
    while(count--){
        curr=curr->next;
    }
    Node *front=curr->next->next;
    key=curr->next;
    curr->next=front;
    front->prev=curr;
    delete key;
    cout<<"after removing element at posn 3"<<endl;
    Node *mid=head;
    while(mid){
        cout<<mid->data<<" ";
        mid=mid->next;
    }
    cout<<endl;
}