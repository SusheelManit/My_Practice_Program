#include <iostream>
#include <cstdlib>
using namespace std;

class queue
{
	int front;
	int rear;
	int arr[];
	int capacity;
	public:
	queue(int size)
	{
		capacity=size;
		front=-1;
		rear=-1;
		arr=new int[capacity];
	}
	int getSize()
	{
		return capacity;
	}
	bool isFull()
	{
		if(rear==capacity-1)
		return true;
		else
		return false;
	}
	bool isEmpty()
	{
		if(front==-1)
		return true;
		else
		return false;
	}
	void enqueue(int data)
	{
		if(isFull())
		return;
		else
		{
			rear=rear+1;
			arr[rear]=data;
			if(front==-1)
			front=rear;
		}
	}
	void dequeue()
	{
		if(isEmpty())
		return;
		front=front+1;
	}
	int getFront()
	{
		return arr[front];
	}
	~queue()
	{
		delete []arr;
	}
	
};
int main()
{
	queue *q=new queue(10);
	q->enqueue(12);
	q->enqueue(15);
	cout<<q->getFront()<<endl;
	q->dequeue();
	cout<<q->getFront()<<endl;
	
	return 0;
}

