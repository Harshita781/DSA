/*
Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue.

Example 1:

Input:
6
4 3 1 10 2 6

Output: 
6 2 10 1 3 4

*/
#include<bits/stdc++.h>
using namespace std;
queue<int> Reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        s.push(ele);
    }
   
    while(!s.empty()){
        int ele=s.top();
        s.pop();
        q.push(ele);
    }
   
    return q;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    Reverse(q);
    cout<<q.front()<<" ";
    cout<<q.back();
    return 0;
}