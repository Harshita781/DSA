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
void PushAtBottom(stack<int> s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    PushAtBottom(s,x);
    s.push(num);
    }
void PrintStack(stack<int> s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    PrintStack(s);
    cout << x << " ";
    s.push(x);
}
int main(){
    stack<int> m;
    m.push(10);
    m.push(20);
    m.push(34);
    m.push(22);
    PushAtBottom(m,9);
    PrintStack(m);
    return 0;
}