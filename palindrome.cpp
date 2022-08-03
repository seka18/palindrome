#include <iostream>
#include <cstring>
using namespace std;
// One extra comment by T. Peter

int main(void)
{
    string str;
	cout << "Please enter the word:" << endl;
	cin >> str;

	//Create the stack and queue object
    Stack stack = Stack();
    Queue que = Queue();

    //Push and enqueue all character
    int leng = str.size();
    for (int i = 0; i < leng ; i++) 
    {
        stack.Push(str[i]);
        que.Enqueue(str[i]);

    }

    for (int i = 0; i < leng ; i++) 
    {
        char ch1 = stack.Pop();
        char qch = que.Dequeue();
        cout << ch1 << "  " << qch << endl;
        
            if (ch1 != qch)
        {
            cout << str << " is not a palindrome";
            return (0);
        }
    }
        cout << str << " is a palindrome";
}