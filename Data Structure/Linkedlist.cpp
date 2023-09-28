#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node{
	// definition of Single linked list structure.
	int data;
	struct node* next;
};
struct Doublelinkedlist{
	//Definition of Double linked list structure.
	int info;
	struct Doublelinkedlist* left;
	struct Doublelinkedlist* right;
};
struct node* head = NULL;
struct Doublelinkedlist* head2 = NULL;
int len,len2;
// this function are used to be Adding Elements in the node;
void push(int data)
{
	struct node* temp;
	temp = ((struct node*)malloc(sizeof(struct node)));
	temp->data = data;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
	}
	else {
		struct node* p;
		p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	
}

void display(void) // Displaying the Elements.
{
	struct node* temp;
	temp = head;
	if (head == NULL) {
		cout << "List is Empty.\n";
	}
	else {
		while (temp != NULL)
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		cout << "\n";
 }
}
// Reverse the elements.
void reverse(){
	struct node* temp, *next, *rev;
	temp = head;
	rev = NULL;
	while (temp != NULL)
	{
		next = temp->next;
		temp->next = rev;
		rev = temp;
		temp = next;
	}
	head = rev;
}
// Simply this function are used to be delete.
void pop(int loc)
{
	if (head == NULL) {
		printf("Empty Node\n");
	}
	else if(loc==1)
	{
		struct node* temp;
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		struct node* temp=head,*p;
		for (int i = 1; i < loc-1; i++)
		{
			temp = temp->next;
		}
		p = temp->next;
		temp->next = p->next;
		p->next = NULL;
		free(p);
		
	}
}
// Add a Number to any place where you want like starting,middle or end.
void add(int data,int loc)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (head == NULL)
	{
		cout << "List is Empty.\n";
	}
	else
	{
		if (loc == 1)
		{
			temp->next = head;
			head = temp;
		}
		else {
			struct node* p;
			p = head;
			for (int i = 1; i < loc-1; i++)
			{
				p=p->next;
			}
			temp->next = p->next;
			p->next = temp;

		}

	}
}
//Swap function works only for adjacents.
void swap(int loc)
{
	struct node* temp = head,*p,*q;
	for (int i = 1; i < loc-1; i++)
	{
		temp = temp->next;
	}
	p = temp->next;
	q = p->next;
	temp->next = q;
	p->next = q->next;
	q->next = p;
	
	
}
//length of Single linked list.
int length(void)
{
	int count = 0;
	struct node* temp=head;
	if (head == NULL)
	{
		count = 0;
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return count;
}
// Starting of Double linked list Function all are same by calling function by 2.
void push1(int data)
{
	struct Doublelinkedlist* temp;
	temp = ((struct Doublelinkedlist*)malloc(sizeof(struct Doublelinkedlist)));
	temp->info = data;
	temp->left= NULL;
	temp->right = NULL;
	if (head2==NULL)
	{
		head2 = temp;
	}
	else
	{
		struct Doublelinkedlist* p;
		p = head2;
		while (p->right != NULL)
		{
			p = p->right;
		}
		p->right = temp;
		temp->left = p;
	}
	

}
// Displaying the Node.
void display2(void)
{
	struct Doublelinkedlist* temp;
	temp = head2;
	if (head2 == NULL)
	{
		cout << "List is Empty\n";
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d ", temp->info);
			temp = temp->right;
		}
		cout << endl;
	}
}
// Delete the Double Node at the specific position.
void pop1(int loc)
{
	struct Doublelinkedlist* temp;
	temp = head2;
	if (head2 == NULL)
	{
		cout << "List is Empty\n";
	}
	else if (loc == 1)
	{
		head2 = head2->right;
		temp->right = NULL;
		free(temp);
	}

	else
	{
		struct Doublelinkedlist* p;
		for (int i = 1; i < loc - 1; i++)
		{
			temp=temp->right;
		}
		p = temp->right;
		temp->right = p->right;
		p->left = NULL;
		p->right = NULL;
		free(p);
	}
}
   // length of the double linked list.
int length2(void)
{ 
	int count = 0;
	struct Doublelinkedlist* temp=head2;
	if (head2 == NULL)
	{
		count = 0;
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->right;
		}
	}
	return count;

 }
 // Add an element at a particular position;
void add1(int data,int location) {
	struct Doublelinkedlist* temp;
	temp = ((struct Doublelinkedlist*)malloc(sizeof(struct Doublelinkedlist)));
	temp->info = data;
	temp->left = NULL;
	temp->right = NULL;

	if (head2 == NULL)
	{
		cout << "List is Empty\n";
	}
	else if (location == 1)
	{
		head2->left = temp;
		temp->right = head2;
		head2 = temp;

	}
	else
	{
		struct Doublelinkedlist* p = head2;
    
		for (int i = 1; i < location - 1; i++)
		{
			p=p->right;
		 }
		temp->right = p->right;
		p->right->left = temp;
		temp->left = p;
		p->right = temp;
	}
}
int main()
{
	//Main function.
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, input,loc,loc1;

	cout << "Full Linked list Either Single or Double.\n\n";
	cout << "1.Add Elements in single link list.\n";
	cout << "2.Display Elements in single link list.\n";
	cout << "3.Pop Elements in single link list.\n";
	cout << "4.Push Elements in single link list at any place.\n";
	cout << "5.Swap Elements in single link list.\n";
	cout << "12.Reverse the Elements in single link list.\n";
	cout << "6.Length of Elements in single link list.\n\n";
	cout << "7.Add Elements in Double link list.\n";
	cout << "8.Display Elements in Double link list.\n";
	cout << "9.Delete Elements in Double link list.\n";
	cout << "10.Length of Elements in Double link list.\n";
	cout << "11.Push Elements in Double link list at any place.\n\n";
	while (1) {
		cout << "\n";
		printf("Enter your choice :");
		cin >> n;
		
		switch (n)
		{
		case 1:
			// Adding the element in the single linked list.
			printf("Enter the Numbers : ");
			cin >> input;
			for (int i = 0; i < input; i++)
			{
				int give;
				printf("Enter the node data : ");
				cin >> give;
				push(give);
			}
			break;
			
			
		case 2:
			//displaying the element.
			display();
			break;
			
		case 3:
			//Pop the element at the specific position.
			int loc;
			cout << "Enter the location : ";
			cin >> loc;
			pop(loc);
			break;
		case 4:
			//Push the element in the specific position;
			int ele;
			cout << "Enter the Location : ";
			cin >> loc;
			cout << "How many Numbers : ";
			cin >> ele;
			for (int i = 0; i < ele; i++)
			{
				int input;
				cout << "Enter the data : ";
				cin >> input;
				add(input,loc);
			}
			break;
		case 5: 
			// Swap function.
			int map;
			cout << "Enter the location : ";
			cin >> map;
			swap(map);
			break;
		case 6:
			// Length of Linked list.
			len = length();
			cout << "Length : "<< len;
			cout << "\n";
			break;

		case 7: 
			   // define double linked list;
			int elem;
			cout << "How many Numbers : ";
			cin >> elem;
			for (int i = 0; i < elem; i++)
			{
				int input;
				cout << "Enter the Elements : ";
				cin >> input;
				push1(input);
			}
			break;
		case 8: 
			// Display the double linked list.
			display2();
			cout << endl;
			break;
		case 9:
			// Delete the Elements.
			
			cout << "Enter the location : ";
			cin >> loc1;
			pop1(loc1);
			break;
		case 10 :
			// Length of Double linked list.
			len2 = length2();
			cout << "Length of Doublelinklist is : " << len2;
			cout <<"\n";
			break;
		case 11: 
			// add a number at any place in node
			int num,location;
			cout << "Enter the location : ";
			cin >> location;
			cout << "How many number : ";
			cin >> num;
			for (int i = 0; i < num; i++)
			{
				int give;
				cout << "Enter the Elements : ";
				cin >> give;
				add1(give,location);
			}
			break;
		case 12:
			reverse();
				break;


		default: printf("Invalid data : \n");


		}

	}
	return 0;

}
