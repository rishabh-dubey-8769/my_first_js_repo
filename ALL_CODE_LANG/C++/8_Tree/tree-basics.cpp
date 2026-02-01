#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left=right=NULL;
    }
};
void preorder(Node* &root){          //O(N)
    if(!root){return ;}
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* &root){          //O(N)
    if(!root){return ;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* &root){          //O(N)
    if(!root){return ;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void Level_order_traversal(Node* &root){        //O(N)
    if(!root)return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)q.push(temp->left);
        // cout<<temp->data<<" ";
        if(temp->right)q.push(temp->right);
    }
}
int count(Node* &root){          //O(N)
    if(!root)return 0;
    return 1+count(root->left)+count(root->right);
}
int height(Node* &root){          //O(N)
    if(!root)return 0;
    return max(height(root->left),height(root->right))+1;
}
int diameter(Node* &root){         //O(N^2)
    if(!root)return 0;
    int diam1=diameter(root->left);
    int diam2=diameter(root->right);
    int diam3=height(root->left)+height(root->right)+1;
    return max(max(diam1,diam2),diam3);
}
int main(){
    queue<Node*>q;
    int num;cout<<"enter root= ",cin>>num;
    Node* root=new Node(num);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        int Left,Right;
        cin>>Left;
        if(Left!=-1){
            temp->left=new Node(Left);
            q.push(temp->left);
        }
        cin>>Right;
        if(Right!=-1){
            temp->right=new Node(Right);
            q.push(temp->right);
        }
    }
    cout<<"Preorder traversal"<<endl;        //DFS
    preorder(root);cout<<endl;
    cout<<"Inorder traversal"<<endl;        //DFS
    inorder(root);cout<<endl;
    cout<<"Postorder traversal"<<endl;        //DFS
    postorder(root);cout<<endl;
    cout<<"Level-Wise traversal"<<endl;        //BFS
    Level_order_traversal(root);cout<<endl;
    cout<<"count Number of nodes: "<<count(root)<<endl<<endl;        //DFS
    cout<<"Max-Height of tree: "<<height(root)<<endl<<endl;          //DFS
    cout<<"Diameter of tree,for all paths( passing through root/and not): "<<diameter(root)<<endl<<endl;
    // cout<<"Diameter of tree, path not passing through root: "<<diameter_not(root)<<endl;

}