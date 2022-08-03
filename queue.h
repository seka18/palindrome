#include <iostream>
using namespace std;
class Queue 
   {
    public:
        Queue(int size = 40); // constructor
        ~Queue() { delete [] values; } // destructor
        bool IsEmpty(void);
        bool IsFull(void);
        bool Enqueue(char x);
        char Dequeue();
        void DisplayQueue(void);
    private:
        int front; // front index
        int rear; // rear index
        int counter; // number of elements
        int maxSize; // size of array queue
        char *values; // element array
   };
    Queue::Queue(int size /* = 10 */) 
    {
        values = new char[size];
        maxSize = size;
        front = 0;
        rear = -1;
        counter = 0;
    }
    bool Queue::IsEmpty() 
    {
        if (counter) return false;
        else return true;
    }
    bool Queue::IsFull() 
    {
    if (counter < maxSize) return false;
    else return true;
    }
bool Queue::Enqueue(char x) {
if (IsFull()) {
cout << "Error: the queue is full." << endl;
return false;
}
else {
    // calculate the new rear position (circular)
    rear = (rear + 1) % maxSize;
    // insert new item
    values[rear] = x;
    // update counter
    counter++;
    return true;
    }
}
char Queue::Dequeue() {
    if (IsEmpty()) {
    cout << "Error: the queue is empty." << endl;
    return false;
    }
else {
    // retrieve the front item
    char x = values[front];
    // move front
    front = (front + 1) % maxSize;
    // update counter
    counter--;
		return x;
	}
}

   
