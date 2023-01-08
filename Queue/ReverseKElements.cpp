/*
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.
Input:
5 3
1 2 3 4 5

Output:
3 2 1 4 5

*/
#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> &q, int k)
{
    // step1: pop first k from Q and put into stack
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    // step2: fetch from stack and push into queue
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 3;
    modifyQueue(q, k);
    cout << q.front() << " ";
    cout << q.back();
    return 0;
}