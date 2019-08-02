//Samael Newgate
//CSC275
//Assignment: Data Structures
//Option 1 only

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Using vectors for a queue and a stack 
	vector <int> myqueue;
	vector <int> mystack;
	
	//Using an array as our stack and queue data
	int data[5] = { 1,2,3,4,5 };

	//A print to inform the following data is a stack
	cout << "My stack: \n" << endl;
	//A for loop
	for (int i = 0; i < 5; i++)
	{	//Push back means exactly that, push the data all the way to the back, creating a stack
		mystack.push_back(data[i]);
	}
	//A while loop
	//Returns whether the stack is empty
	while (!mystack.empty())
	{
		//Returns the number of elements in the vector.
		for (int i = 0; i < mystack.size(); i++)
		{
			//Output the stack in a single line instead of a cascade.
			cout << mystack[i] << " ";
		}
		//Removes the last element in the vector, effectively reducing the container size by one.
		mystack.pop_back();
		cout << endl;
	}

	cout << endl;
	
	//A print to inform the following data is a queue.
	cout << "My queue: \n" << endl;
	//A for loop
	for (int i = 0; i < 5; i++)
	{	//Push back means exactly that, push the data all the way to the back, creating a stack
		myqueue.push_back(data[i]);
	}
	
	//Returns whether the queue is empty
	while (!myqueue.empty())
	{
		//Returns the number of elements in the vector.
		for (int i = 0; i < myqueue.size(); i++)
		{	
			//Output the queue in a single line instead of a cascade.
			cout << myqueue[i] << " ";
		}
		//Erase pulls out the next data in queue and removes it.
		//Begin returns an iterator pointing to the first element in the vector.
		myqueue.erase(myqueue.begin());
		cout << endl;
	}
	system("pause");
	return 0;
	
}