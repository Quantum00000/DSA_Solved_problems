/*
#include <bits\stdc++.h>
using namespace std;
//Finding all the leaf node of the binary tree

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};

void Leafnode(Node*root,int count){
    if(root==NULL){
        count--;
        return;
    }
    if(root->left==NULL&&root->right==NULL){
        cout<<root->data<<" ";
        return;
    }
    Leafnode(root->left,count++);
    Leafnode(root->right,count++);


}
int main(){
    int count=0;
    Node* root= new Node(5);
    root->left = new Node(3);
    root->right= new Node(10);

    root->left->left= new Node(2);
    root->left->right= new Node(11);
    root->right->left= new Node(9);
    root->right->right=new Node(15);
    root->right->right->left=new Node(14);
    root->right->right->right=new Node(16);
    Leafnode(root,count);
}

*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left ,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
//inoreder
int traverse(Node*root){
    if(root==NULL){
        return 0;
    }
    
    traverse(root->right);
    cout<<root->data<<" ";
    traverse(root->left);
    

}
//inorder
int traverse(Node*root){
    if(root==NULL){
        return 0;
    }
    
    cout<<root->data<<" ";
    traverse(root->right);
    traverse(root->left);
    

}
//Postorder
int traverse(Node*root){
    if(root==NULL){
        return 0;
    }
    
    traverse(root->right);
    traverse(root->left);
    cout<<root->data<<" ";
    

}


int main(){

    Node* root = new Node(5);
    root->left =new Node(3);
    root->right= new Node(10);
    root->left->left=new Node(2);
    root->right->left=new Node(9);
    root->right->right= new Node(15);
    root->right->right->right= new Node(16);
   traverse(root);
    
}