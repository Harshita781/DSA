#include<iostream>
using namespace std;
int sum_of_array(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int rem=sum_of_array(arr+1,n-1);
    int sum=arr[0]+rem;
    return sum;
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
    int sum=sum_of_array(arr,n);
    cout<<"Sum of given array is: "<<sum;
    return 0;
}