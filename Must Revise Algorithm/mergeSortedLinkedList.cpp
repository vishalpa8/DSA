#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

struct Node{
    int data;
    struct Node* next;  
};

Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    /*
     first two conditions basically, returning the left element like after moving head1 if it reaches to
     NULL then we have to return otherone like returning same is null so that not mean anything.
    */
    
    if(head1->data > head2->data){
        head2->next = sortedMerge(head1,head2->next);
        return head2;
    } 
    else{
        head1->next = sortedMerge(head1->next,head2);
        return head1;
    }
    /*
        In last two if condition's basically smaller one is moving forward and smaller one is returning and 
        smaller one is accepting to the their next link. so then it will make whole linked list.
    */
} 

int main(){
    fast_io;




    return 0;
}