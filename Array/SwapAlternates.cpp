#include<iostream>
using namespace std;
void Swap_Alt(int *arr,int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
     
    }
}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Swap_Alt(arr,n);
    print(arr,n);
    return 0;

}