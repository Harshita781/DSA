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
    cout<<ipstack.size()<<endl;
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