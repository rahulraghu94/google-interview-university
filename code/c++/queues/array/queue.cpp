#include <iostream>
#include "queue.hpp"

using namespace std;

void Queue::enqueue(int data)
{
	if(!isFull()){
		item[tail] = data;
		tail = (tail+1)%MAX_SIZE;
		count++;
	} else {
		cout << "Queue is Full." << endl;
		return;
	}
}


int Queue::dequeue()
{
	int temp;
	if(!isEmpty()){
		temp = item[head];
		head = (head+1)%MAX_SIZE;
		count--;
		return temp;
	} else {
		cout << "Queue is empty." << endl;
		return 0;
	}
}


int Queue::size()
{
	return count;
}

void Queue::display()
{
	int i;
	if(!this->isEmpty()){
		for(i=head; i!=tail; i=(i+1)%MAX_SIZE){
			cout<<item[i]<<endl;
		}
	}else{
		cout<<"Queue Underflow"<<endl;
	}
}


bool Queue::isEmpty()
{
	if(abs(head == tail)){
		return true;
	}else{
		return false;
	}
}

bool Queue::isFull()
{
	if(head==(tail+1)%MAX_SIZE){
		return true;
	}else{
		return false;
	}
}