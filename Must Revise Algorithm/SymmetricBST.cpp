#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

};


bool inorder(Node* head1, Node* head2){
    // If both trees are empty, then they are mirror images
    if(head1 == NULL || head2 == NULL){
        return head1 == head2;
    }
    /* For two trees to be mirror images, the following
       three conditions must be true:
        1.) Their root node's key must be same
        2.) left subtree of left tree and right subtree of
        right tree have to be mirror images
        3.) right subtree of left tree and left subtree of
        right tree have to be mirror images
        if none of above conditions is true then root1
        and root2 are not mirror images
    */
    
    return head1->data == head2->data && inorder(head1->left,head2->right) 
            && inorder(head1->right,head2->left);
}
    
    // return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root){
    if(root == NULL){
        return 1;
    }
    
    return inorder(root->left,root->right);
}

int main(){
    fast_io;




    return 0;
}