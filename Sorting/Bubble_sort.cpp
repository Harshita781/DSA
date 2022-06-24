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
    for (int i = 1; i < n; i++)
    {
       for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
       }
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
    cout << "array after applying bubble sort:";
    Bubble_sort(arr, n);
    print(arr, n);

    return 0;
}