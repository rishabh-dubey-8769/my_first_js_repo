#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insert(Node* &root,int target){
    if(!root){
        Node* temp=new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left=insert(root->left,target);
    }
    else{root->right=insert(root->right,target);}
    return root;
}
void inorder(Node* root){
    if(!root){return ;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(Node* root,int n,Node* &ptr){
    if(!root){return 0;}
    if(root->data==n){ptr=root;return 1;}
    if(n<root->data){return search(root->left,n,ptr);}
    else{return search(root->right,n,ptr);}
    return -1;
}
Node* erase(Node* root,Node*ptr){
    if(!ptr->left&&!ptr->right){delete ptr;return NULL;}
    if(ptr->left&&!ptr->right){
        Node* temp=ptr->left;
        delete ptr;
        return temp;
    }
    if(!ptr->left&&ptr->right){
        Node* temp=ptr->right;
        delete ptr;
        return temp;
    }
    
}
int main(){
    int arr[]={2,5,6,9,4,3};
    int n=sizeof(arr)/sizeof(int);
    Node* root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    cout<<"The inorder traversal or the sorted order output of the array is : ";
    inorder(root);
    cout<<endl;
    int p;
    cout<<"enter the number= ";
    cin>>p;
    Node* ptr=NULL;
    int found=search(root,p,ptr);
    cout<<"found/unfound= "<<found<<endl;
    if(found){
        cout<<"root data= "<<root->data<<endl;
        cout<<"ptr data= "<<ptr->data<<endl;
        root=erase(root,ptr);
    }
    
}