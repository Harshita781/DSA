#include<iostream>
using namespace std;
int fib(int num){
    if(num==0){
        return 0 ;
    }
    if(num==1){
        return 1;
    }
        return num*fib(num-1);
}
int main(){
     int n;
     cout<<"Enter number: ";
     cin>>n;
     cout<<fib(n);
     return 0;
}