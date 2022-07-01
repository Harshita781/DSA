#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int InsertionSort(int *arr,int i,int n){
    if(i==n){
        return 0;
    }
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
              arr[j+1]=arr[j];
            }
            else{
                break;
            }
         
        }
         arr[j+1]=temp;
            
   return InsertionSort(arr,i+1,n);
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
    InsertionSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}