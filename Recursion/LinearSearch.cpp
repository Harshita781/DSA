#include<iostream>
using namespace std;
int LinearSearchRecursion(int *arr,int n,int key){
    if(n==0){
        return false;
    }
    if(key==arr[0]){
        return true;
    }
    bool rem=LinearSearchRecursion(arr+1,n-1,key);
    return rem;
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
    bool ans=LinearSearchRecursion(arr,n,key);
    if(ans){
        cout<<"Element is Present ";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}