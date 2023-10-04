#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

struct Node{
    int data;
    struct Node* left,*right;
};


//question is any sum is possible in the given to tree to the leaf node.

bool hasPathSum(Node *root, int s) {
        
        if(root == NULL){
            return false;
        }
        
        if(root->left == NULL && root->right == NULL && s-root->data == 0){
            return true;
        }
        
        return hasPathSum(root->left,s-root->data) || hasPathSum(root->right,s-root->data);

}

int main(){
    fast_io;




    return 0;
}