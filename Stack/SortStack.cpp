#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &stack,int num){
    if(stack.empty() || (!stack.empty() && stack.top())){
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
    s.push(12);
    s.push(32);
    s.push(10);
    s.push(9);
    PrintStack(s);
    sortStack(s);
    cout << endl;
    PrintStack(s);
    return 0;
}