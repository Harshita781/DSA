#include<iostream>
using namespace std;
int Duplicate(int *arr,int n){

}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<Duplicate(arr,n);
    return 0;

}