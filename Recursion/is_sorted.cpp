#include<iostream>
using namespace std;
int is_sorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=is_sorted(arr+1,n-1);
        return ans;
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter array to check whether array is sorted or not? ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=is_sorted(arr,n);
    if(result){
        cout<<"array is sorted";
    }
    return 0;
}