/* 
Problem Statement
Reverse a given Stack of integers using recursion.
Sample Input:
3
2 1 3 
Sample Output:
2 1 3 
*/
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    insertAtBottom(s,element);
    s.push(num);
}
void reverseStack(stack<int> &stack){
    if(stack.empty()){
        return;

    }
    int num=stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,num);
}

int main(){
    stack<int> stack;
    stack.push(12);
    stack.push(32);
    stack.push(10);
    stack.push(9);
    cout<<stack.top()<<endl;
    reverseStack(stack);
    cout<<stack.top();
    return 0;
}