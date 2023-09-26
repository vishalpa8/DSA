#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
struct node* head = NULL;
 
void append(int data){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;

			
	if(head==NULL){
		head = temp; 
	}	
	else{
		struct node *curr,*p;
		curr = head;
		p = NULL;
		while(curr){
			p=curr;
			if(data > curr->data){
				curr = curr->right;
			}
			else
				curr = curr->left;
		}
		if(p->data > data){
			p->left = temp;
		}
		else{
			p->right = temp;
		}
	}	 	
}

int height(struct node* p){
   if(p==NULL)
	   return 0;

   return max(height(p->right),height(p->left))+1;
}


void preorder(struct node* p){
	if(p){
		cout << p->data << " " ;
		preorder(p->left);
		preorder(p->right);
	}

}

void inorder(struct node *p){
   if(p){
	   inorder(p->left);
	   cout << p->data << " " ;
	   inorder(p->right);
   }
}


void postorder(struct node *p){
  if(p){
	  preorder(p->left);
	  preorder(p->right);
	  cout << p->data << " ";
  }
}


bool search(struct node* temp,int num)
{
  if(temp==NULL)
  {
	  return 0;
  }
  else if(temp->data==num)
	 return 1;
  else if(num <= temp->data )
	  return search(temp->left,num);
  else 
	  return search(temp->right,num);
  
    
 }



struct node* InPre(struct node* p)
{
	while(p && p->left!=NULL)
	{
		p = p->left;
	}
	return p;
}


struct node* InSucc(struct node* p)
{
	while(p && p->right!=NULL)
	{
		p = p->right;
	}
	return p;
}


 struct node* pop(struct node* temp,int data)
{
   if(temp == NULL){
	   cout << "Tree is empty";
   }
   else if(temp->data > data){
		temp->left = pop(temp->left,data);
	}
   else if(temp->data < data ){
	   temp->right = pop(temp->right,data);
   }

   else
   {
	   if(temp->left==NULL && temp->right==NULL)
	   {
		   delete temp;
		   temp=NULL;
	   }
	 
	   else
	   {
		  if(height(temp->left) > height(temp->right))
		  {
			  struct node *q = InPre(temp->left);
              temp->data = q->data;
			  temp ->left = pop(temp->left,q->data);
		  }
		  else
		   {
			  struct node *q = InSucc(temp->right);
              temp->data = q->data;
			  temp ->right = pop(temp->right,q->data);
		  }

	   }
	   

   }
   
   return temp;
}

void LevelOrder(struct node* root){
    queue<node*> q;
	q.push(root);
	
	while(!q.empty()){
		struct node* current = q.front();
		printf("%d ",current->data);
		if(current->left!=NULL)
		{
			q.push(current->left);
		}
		if(current->right!=NULL)
		{
			q.push(current->right);
		}
           q.pop();
	}
}


int main()
{
	int input,m,n,len;

	cout << "Binary Search Tree\n\n";
	cout << "1.Insert the element in the Tree\n";
    cout << "2.search the element in the Tree\n";
	cout << "3.Delete the element in the Tree\n";
	cout << "4.Height  of the Tree\n";
	cout << "5.Traverse the element Using Inorder\n";
	cout << "6.Traverse the element Using preorder\n";
	cout << "7.Traverse the element Using postorder\n";
	cout << "8.Level Order Traversal\n";
	cout << "9.exit\n\n";
	



  	while(1)
  {
	  cout << "Enter your choice : ";
    	 cin >> n;

	 switch(n)
	 {
		 case 1:
			 cout << "How many numebers : ";
			 cin >> m;
			 for(int i=0;i<m;i++){
     			 cout << "Enter the Numbers : ";
	 			 cin >> input;
                 append(input);
			 }
			 
			 break;
		 case 2:
			 int num;
			 cout << "Enter the number : " ;
			 cin >> num;
		     	if(search(head,num)==true)
				cout << "found\n";
			  else
				cout << "Not found\n";
			 break;
	     case 3:
			  cout << "Enter Number to delete : ";
			  int k;
			  cin >> k;
			  pop(head,k);
			 
			 break;
		 case 4:
			  len = height(head);
			  printf("Max height of tree : %d ",len);
			  cout << endl;
			  break;
	     case 5:
			  inorder(head);
			  break;
	     case 6:
			  preorder(head);
			  break;
         case 7:
			  postorder(head);
			  break;
		 case 8:
			  LevelOrder(head);
			  break;
	     case 9: 
			 exit(0);
			 break;

	     default : 
			      cout << "Invalid data\n";
      
			
	 }

  }

}
