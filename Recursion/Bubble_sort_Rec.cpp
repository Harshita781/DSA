#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int BubbleSort(int *arr,int n){
    if(n==0 || n==1){
        return 0;
    }
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }
   return BubbleSort(arr,n-1);
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}