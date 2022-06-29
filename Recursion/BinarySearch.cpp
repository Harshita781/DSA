#include<iostream>
using namespace std;
int BinarySearchRecursion(int *arr,int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(key==mid){
        return true;
    }
    if(arr[mid]<key){
        return BinarySearchRecursion(arr,mid+1,e,key);
    }
    else if(arr[mid]>key){
        return BinarySearchRecursion(arr,s,mid-1,key);
    }
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
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    bool ans=BinarySearchRecursion(arr,0,n-1,key);
    if(ans){
        cout<<"Element is Present ";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}