#include <iostream>
#include <cstring>
using namespace std;

class Stack {
  public:
      Stack(int size = 10); // constructor
      ~Stack() { delete [] values; } // destructor
      bool IsEmpty() { return top == -1; }
      bool IsFull() { return top == maxTop; }
      double Top(); // examine, without popping
      void Push(const double x);
      double Pop();
  void DisplayStack();
  
   private:
    int maxTop; // max stack size = size - 1
    int top; // current top of stack
    double* values; // element array
    };

    Stack::Stack(int size /*= 10*/) {
    values = new char[size];
    top = -1;
    maxTop = size - 1;
    }
 void Stack::Push(const char x)
{
    if (IsFull()) // if stack is full, print error
        cout << "Error: the stack is full." << endl;
    else
        values[++top] = x;
}
  double Stack::Pop() {
    if (IsEmpty()) { //if stack is empty, print error
    cout << "Error: the stack is empty." << endl;
    return -1;
    }
  else {
  return values[top--];
  }
}
  double Stack::Top() {
  if (IsEmpty()) {
  cout << "Error: the stack is empty." << endl;
  return -1;
}
else
return values[top];

}
