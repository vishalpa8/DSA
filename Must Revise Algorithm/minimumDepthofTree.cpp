#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

int minDepth(Node *root) {
       if(root == NULL){
           return 0;
       }
       int x = minDepth(root->left);
       int y = minDepth(root->right);
       
       if(root->left == NULL || root->right == NULL){
            /* 
             it simply means that element have only one root so the written code will give 0 depth of the tree
                so that's why we are putting this logic so it will return which will pass all the test cases.
            */
           return 1+max(x,y);
       }
       
       return 1+min(x,y);
}

int main(){
    fast_io;




    return 0;
}