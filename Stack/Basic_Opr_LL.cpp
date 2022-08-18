#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class Stack
{
public:
  node *top;
  Stack(){
    top=NULL;
  }  
  void push(int d){
    node *temp=new node();
    if(top==NULL){
        top=temp;
    }
    else{
        top->next=temp;
        temp=top;
    }  
  }
  node* pop(){
    node *temp;
    if(top==NULL){
         cout<<"Stack is empty"<<endl;
    }
    else{
        temp=top;
        top=top-1;
        delete(temp);
    }
  }
  node* peek(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    if(top->next==NULL){
        cout<<top<<endl;
    }
  }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.peek();
    s.pop();
    s.pop();
    return 0;
}