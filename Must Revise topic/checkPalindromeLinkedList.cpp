#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

/* here linked list is given and we have to check the list is palindrome or not. 
    here are two approachs but remember that we don't have to use extra space;
*/

struct Node{
    int data;
    struct Node* next;
};


 // #1: Approach.
 bool isPalindrome(Node *head){
        struct Node* temp = head;
        int lsum = 0, rsum = 0, i = 1;
        
        while(temp!=NULL){
            lsum = (temp->data) + lsum * 10;
            rsum = rsum + (temp->data) * i;
            i *= 10;
            temp = temp->next;
        }
        // cout << lsum << " " << rsum << endl;
        
        return lsum == rsum;
}


Node* reverse_list(Node* head){
    Node* prev = NULL;     
    Node* curr = head;   
    Node* next; 
    
    while(curr)
    {
        next = curr->next; 
        curr->next = prev;    
        prev = curr;         
        curr = next; 
    }
    return prev;
    
}

    //Function to check whether two lists are identical.
bool is_identical(Node* n1, Node* n2){
    //iterating over both lists and returning 0 if data at any node
    //is not equal in both lists.
    for(  ; n1 && n2 ; n1=n1->next, n2=n2->next )
        if( n1->data != n2->data )
            return 0;
            
    //returning 1 if data at all nodes are equal.
    return 1;
}

// #2: Approach.

bool isPalindromeUsingPointers(Node * head){
        int size=0;
        Node* ptr;
        //finding number of nodes in the list.
        for( ptr=head ; ptr ; ptr=ptr->next )
            size++;
            
        
        if(size<2) return 1;
        
        //now, we split list into 2 halves. In case of odd number of elements, 
        //first half will have the middle element.
        
        ptr = head;
        int mid_pt = (size-1)/2;
        
        //using a pointer to get to middle element to get the second half of list.
        while(mid_pt--)
            ptr = ptr->next;
            
        //ptr now holds address of last element of first half.
        
        //storing the elements of second half separately in head2.
        Node* head2 = ptr->next;
        ptr->next = NULL;     
        
        //we reverse the second half of list.
        head2 = reverse_list(head2);
        
        //we check whether both halves are identical (for odd number of elements
        //first half will have one extra element).
        bool ret = is_identical(head, head2);
        
        //we reverse back the second half of list and connect it to the first half.
        head2 = reverse_list(head2);
        ptr->next = head2;
        
        //returning 1 if list is palindrome else 0.
        return ret;

    
}


int main(){
    fast_io;




    return 0;
}