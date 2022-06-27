/*
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.
*/
#include<iostream>
using namespace std;
int climb_stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int result=climb_stairs(n-1)+climb_stairs(n-2);
    return result;
}
int main(){
    int num;
    cout<<"Enter no. of stairs: ";
    cin>>num;
    cout<<climb_stairs(num);
    return 0;
}