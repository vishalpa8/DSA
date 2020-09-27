#include<iostream>
#include<stdio.h>
using namespace std;
int rear = 0, front = 0, queue[5],full;

void push(int data) // pushing the elements.
{
	if (rear== 4)
	{
		cout << "Queue is full.\n";
	}
	else {
		queue[rear] = data;
		rear++;
	}

}
void traverse(void)  // traversing the Elements or printing.
{
	if (front == rear)
	{
		cout << "Queue is Empty.\n";
	}
	else {
		for (int i=front;i<rear;i++)
		{
			cout << queue[i] << " ";
		}
	}
	cout << endl;
}
void pop()  // Delete (Pop) the elements from the queue.
{
	if (front == rear)
	{
		cout << "Queue is Empty.\n";
	}
	else
	{
		cout << "Deleted : " << queue[front] << endl;
		
		for (int i=0;i<rear;i++)
		{
			queue[i] = queue[i + 1];
		}
	}
}

int main()

{
	int n,input;
	printf("Queue in Data structure.\n\n");
	cout << "1.push the Elements in Queue\n";
	cout << "2.Pop the Elements in Queue\n";
	cout << "3.traverse the Elements in Queue\n";
	cout << "4.Exit\n\n";

	while (1)
	{
		cout << "Enter your choice : ";
		cin >> n;
		switch (n)
		{
		case 1:
			
			printf("how many number : ");
			cin >> input;
			for (int i = 0; i < input; i++)
			{
				int give;
				cout << "Enter the Number : ";
				cin >> give;
				push(give);
			}
			break;
		case 2:
			
			traverse();
			break;
		case 3:
			pop();
			break;
		
		case 4:
			exit(0);
			break;
		default:
			cout << "Invalid data.\n";
		}

	}

}
