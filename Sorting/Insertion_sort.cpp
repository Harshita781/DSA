#include <iostream>
#include <stdlib.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
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
      
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout<<"Enter array size:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array after applying insertion sort:";
    Bubble_sort(arr, n);
    print(arr, n);

    return 0;
}