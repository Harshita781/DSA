#include<iostream>
using namespace std;
int say_digit(string arr[],int n){
    if(n==0){
        return -1;
    }
    int digit=n%10;
    n=n/10;
     say_digit(arr,n);
     cout<<arr[digit]<<" ";
}

int main(){
    string  arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter number:";
    cin>>n;
    say_digit(arr,n);
}