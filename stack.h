#include <iostream>

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
values = new double[size];
top = -1;
maxTop = size - 1;
}
void Stack::Push(const double x) {
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
void Stack::DisplayStack() {
cout << "top -->";
for (int i = top; i >= 0; i--)
cout << "\t|\t" << values[i] << "\t|" << endl;
cout << "\t|---------------|" << endl;
}
int main(void) {
Stack stack(5);
stack.Push(5.0);
stack.Push(6.5);
stack.Push(-3.0);
stack.Push(-8.0);
stack.DisplayStack();
cout << "Top: " << stack.Top() << endl;
stack.Pop();
cout << "Top: " << stack.Top() << endl;
while (!stack.IsEmpty()) stack.Pop();
stack.DisplayStack();
return 0;
}