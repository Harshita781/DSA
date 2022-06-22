#include <bits/stdc++.h>
using namespace std;
int FirstOcc(int *arr, int n, int key)
{
    int s = 0;     // start
    int e = n - 1; // end
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int LastOcc(int *arr, int n, int key)
{
    int s = 0;     // start
    int e = n - 1; // end
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n, key;
    cout << "Enter no. of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements in the array seperated by single space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key whose index you want to find the first and last occurrence: ";
    cin >> key;
    cout << "First occurrence of " << key << " is:" << FirstOcc(arr, n, key);
    cout << "\nLast occurrence of " << key << " is:" << LastOcc(arr, n, key);
    return 0;
}