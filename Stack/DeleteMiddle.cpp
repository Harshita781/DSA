/*
Problem Statement
You are having a stack "ARR" of size 'N+1',your task is to delete the middlemost element so that the size of resulting stack is 'N'.
Sample Input 1:
2
4
1 2 3 4 5
7
83 74 67 49 94 8 11 1
Sample Output 1:
1 2 4 5
83 74 67 94 8 11 1
*/

#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&ipstack,int count,int size){
    if(count==size/2){
        ipstack.pop();
        return;
    }
    int num=ipstack.top();
    ipstack.pop();
    solve(ipstack,count+1,size);
    ipstack.push(num);
}

void Delete(stack<int>&ipstack,int n){
    int count=0;
    solve(ipstack,count,n);
}

int main(){
    stack<int>ipstack;
    ipstack.push(10);
    ipstack.push(32);
    ipstack.push(12);
    ipstack.push(43);
    ipstack.push(11);
    int n=ipstack.size();
    Delete(ipstack,n);
    return 0;
}