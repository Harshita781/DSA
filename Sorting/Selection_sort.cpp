#include <iostream>
#include <stdlib.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            if (minIndex != i)
            {
                swap(&arr[i], &arr[minIndex]);
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
    cout<<"Enter array size: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array after applying selection sort: ";
    selection_sort(arr, n);
    print(arr, n);

    return 0;
}