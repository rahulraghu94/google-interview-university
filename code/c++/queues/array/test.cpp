#include <iostream>
#include "queue.hpp"

using namespace std;

int main()
{
        Queue queue;
        int i;

        cout << "Poppulating queue with arbitrary values.." << endl;
        for (i = 1; i <= 9; i++)
                queue.enqueue(i);
        cout << "Queue looks like: " << endl;
        queue.display();

        cout << endl << "Size of Queue: " << queue.size() << endl;

        cout << endl << "Trying to insert element after queue if full.." << endl;

        cout << "Result of illegal enqueue: " ;
        queue.enqueue(10);
        cout << endl << endl;

        cout << "Dequeueing 5 elements:" << endl;
        for(i = 0; i < 5; i ++)
                cout << "Dequeued is:" << queue.dequeue() << endl;

        cout << endl << "Queue looks like:" << endl;
        queue.display();

        cout << endl << endl;

        cout << "Attempting to dequeue 5 elements when only 4 are left" << endl;
        for(i = 0; i < 5; i++)
                cout << "Dequeueing: " << queue.dequeue() << endl;

        cout << endl << "Trying to display empty queue:" << endl;
        queue.display();

        return 0;
}