/* BASIC OPERATIONS ON STACK USING ARRAY */
#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.peek();
    s.pop();
    s.pop();
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    s.push(30);
    s.peek();
    s.pop();
    return 0;
}