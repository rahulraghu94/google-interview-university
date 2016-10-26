#ifndef _QUEUE_IMP_
#define _QUEUE_IMP_

#define MAX_SIZE 10

using namespace std;

class Queue{
    private:
        int item[MAX_SIZE];
        int head;
        int tail;
        int count;
    public:
        Queue()
        {
        	count = 0;
        	head = 0;
        	tail = 0;
        }
        void enqueue(int);
        int dequeue();
        int size();
        void display();
        bool isEmpty();
        bool isFull();
};

#endif