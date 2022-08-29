/*
Problem Statement:
You're given a stack consisting of 'N
 integers.Your task is to sort this stack in descending order using recursion.
 Sample Input 1:
1
5
5 -2 9 -7 3
Sample Output 1:
9 5 3 -2 -7
*/
#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &stack,int num){
    if(stack.empty() || (!stack.empty() && stack.top()<num)){
        stack.push(num);
        return;
    }
    int n=stack.top();
    stack.pop();
    sortedInsert(stack,num);
    stack.push(n);

}
void sortStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack,num);
}
void PrintStack(stack<int> m)
{
    if (m.empty())
        return;
    int x = m.top();
    m.pop();
    PrintStack(m);
    cout << x << " ";
    m.push(x);
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(4);
    PrintStack(s);
    sortStack(s);
    cout << endl;
    PrintStack(s);
    return 0;
}