#include<bits/stdc++.h>

#define capacity 5
using namespace std;
int rear = 0, front = 0, Queue[capacity],full;

void push(int data) // pushing the elements.
{
	if (rear == capacity){
		cout << "Queue is full.\n";
	}
	else {
		Queue[rear] = data;
		rear++;
	}

}
void traverse(void)  // traversing the Elements or printing.
{
	if (front == rear){
		cout << "Queue is Empty.\n";
	}
	else {
		for (int i=front;i<rear;i++){
			cout << Queue[i] << " ";
		}
	}
	cout << endl;
}
void pop()  // Delete (Pop) the elements from the queue.
{
	if (front == rear){
		cout << "Queue is Empty.\n";
	}
	else{
		cout << "Deleted : " << Queue[front] << endl;
		
		for (int i=0;i<rear;i++){
			Queue[i] = Queue[i + 1];
		}
		rear--;
	}
}

int main()

{
	int n,input;
	printf("Queue Data structure.\n\n");
	cout << "1.push the Elements in Queue\n";
	cout << "2.traverse the Elements in Queue\n";
	cout << "3.pop the Elements in Queue\n";
	cout << "4.Exit\n\n";

	while (1)
	{
		cout << "Enter your choice : ";
		cin >> n;
		switch (n)
		{
		case 1:
				int give;
				cout << "Enter the Number : ";
				cin >> give;
				push(give);
			
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
