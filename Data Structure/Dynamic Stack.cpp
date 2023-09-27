#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	int n,len;
	stack<int> stc;
	cout << "Stack Using Dynamically :\n\n";
	cout << "1.Push the Elements :\n ";
	cout << "2.Pop the Elements : \n";
	cout << "3.Length of the stack :\n";
	cout << "4.Top Element of the stack: \n";
	cout << "5.Display the Elements:\n";
	cout << "6.Exit : \n\n";
	while (1)
	{
		cout << "Enter your choice : ";
		cin >> n;
		switch (n)
		{
		case 1:
			// Pushing the Elements;
			int k;
			cout << "How many numbers : ";
			cin >> k;
			for (int i = 0; i < k; i++)
			{
				
				int input;
				cout << "Enter the Number : ";
				cin >> input;
				stc.push(input);
			}
			break;
		case 2:
			// Delete the Elements one by one.
			if (stc.empty())
				cout << "Stack is Empty\n";
			else {
				cout << "Popped Elemnts : " << stc.top() << "\n";
				stc.pop();
			}
			break;
		
		case 3:
			// Length of the stack which is actually already defined in function.
			 len = stc.size();
				cout << "Length : " << len << endl;
				break;
		case 4:
			// Print the top of the elements.
			if (stc.empty())
			{
				cout << "Stack is Empty :\n";
			}
			else {
				cout << stc.top() << endl;
			}
			break;
		case 5:
			// Print all the elements present in the stack.
			if (stc.empty())
			{
				cout << "Stack is empty :\n";
			}
			else
			{
				while (!stc.empty())
				{
					cout << stc.top() << " ";
					stc.pop();

				}
				cout << endl;
			}
			break;
		case 6:
			exit(0);

		default: 
			cout << "Invalid data : \n";
		}
	}
	return 0;
}