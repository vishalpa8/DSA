#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int stack[5];
int top = -1,len;
int isfull(void); // for checking the Stack is full or not.
int isempty(void); // for checking the stack is Empty or not.
void push(int data)
{
	// used for push the elements in stack
	if (isfull())
	{
		cout << " Stack is full.\n ";
	}
	else
	{
		top++;
		stack[top] = data;
		cout << " Elements pushed :" << data << "\n";
		
		
	}
}

void pop(void)
{
	// used for pop(delete) the elements in stack.
	if (isempty())
	{
		cout << " stack is empty\n ";
	}
	else
	{
		cout << " Poped Element : " << stack[top] << endl;
		stack[top--];
	}
}
int length(void)
{
	// used for count the length of the elements in stack.
	int count = 0;
		for (int i = 0; i <=top; i++) {
			count++;
			
		}
	
	return count;
}

void display(void)
{
	// used for Travrse(display) the elements in stack.
	if (isempty())
	{
		cout << "Stack is empty \n";
	}
	else
		for (int i = 0; i <=top; i++)
		{
			cout << stack[i] << " ";
		}
	cout << endl;
}
void pull(void)
{
	// used for Pull (top element) the elements in stack
	if (isempty())
	{
		cout << "Stack is Empty \n";
	}
	else
		cout << stack[top] << endl;
		
}

int main()
{
	int n;
	cout << "Stack Using Static Memory\n\n";
	cout << "1.Push the Elements. \n";
	cout << "2.Pop the Elements. \n";
	cout << "3.length of the Elements. \n";
	cout << "4.Display the Elements. \n";
	cout << "5.Pull the top Elements. \n";
	cout << "6.Exit. \n\n";

	while (1)
	{
		printf("Enter your choice :");
		cin >> n;

		switch (n)
		{
		case 1:
			int input;
			cout << "Enter the Number : ";
			cin >> input;
			push(input);
			break;
		case 2: 
			pop();
			break;
		case 3:
			len = length();
			cout << "Length : " << len << endl;
			break;
		case 4 : 
			display();
			break;
		case 5:
			pull();
			break;
		case 6:
			exit(0);
		default:
			cout << "Invalid data\n";

		}

	}
	
	return 0;

}
int isfull(void)
{
	if (top == 4)
	{
		return 1;
	}
	else
		return 0;
}
int isempty(void)
{
	if (top == -1)
	{
		return 1;
	}
	else
		return 0;
}
