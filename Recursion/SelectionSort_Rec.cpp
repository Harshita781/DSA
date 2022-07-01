#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int SelectionSort(int *arr,int i,int n){
    if(i==n){
        return 0;
    }
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
                swap(&arr[i], &arr[minIndex]);
            
   return SelectionSort(arr,i+1,n);
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
    SelectionSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}