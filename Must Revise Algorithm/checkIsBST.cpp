#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)



struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

// int prev = INT_MIN;
// bool isBST(Node* root) 
//     {
//         if(root == NULL){
//             return true;
//         }
        
//         if(!isBST(root->left)) 
//             return false;
//         if(prev >= root->data)
//             return false;
//         prev = root->data;
        
//         return isBST(root->right);
// }

bool isBST(Node *root,int min,int max) {
    if(!root)
    return true;

    if(root->data>min and root->data < max) {
        bool left = isBST(root->left,min,root->data);
        bool right = isBST(root->right,root->data,max);
        return left and right;
    }
    else
    return false;
}
    
bool isBST(Node* root) 
{
    return isBST(root,INT_MIN,INT_MAX);
}

int main(){
    fast_io;




    return 0;
}