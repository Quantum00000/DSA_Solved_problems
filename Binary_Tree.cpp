#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){

        data=val;
        left=NULL;
        right=NULL;
    }};
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}


    

        int main(){
            Node* root =new Node(5);
            root->left=new Node(3);
            root->right= new Node(10);
            root->left->left=new Node(1);
            root->left->right = new Node(4);
            preorder(root);

        }
    