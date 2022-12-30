//Doubly Ended Queue
#include<iostream>
#include<queue>
using namespace std;
class Deque{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Deque(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }
    bool pushElement(int x){
        if(front==0 && rear==size-1 || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
             front=rear=0;
        }
        else if(front==0){
            front=n-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }
    bool pushRear(int x){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            return false;
        } 
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            front=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }
}
/*
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    if(d.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}
*/