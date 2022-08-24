/*
Problem Statement
You are given a stack of integers M and an integer X.Your task is to insert X to the bottom of the stack M and return the updated stack.
Sample Input 1 :
2
3 8
4 3 2
4 5
6 2 4 9
Sample Output 1 :
8 4 3 2
5 6 2 4 9
*/

#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    solve(s,x);
    s.push(num);
    }
stack<int> pushAtBottom(stack<int> &m, int x){
    solve(m,x);
    return m;
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
int main(){
    stack<int> m;
    m.push(10);
    m.push(20);
    m.push(34);
    m.push(22);
    cout<<m.top()<<endl;
    pushAtBottom(m,9);
    cout<<m.top()<<endl;
    PrintStack(m);
    return 0;
}