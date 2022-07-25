/*
You have been given an array/list of ‘N’ integers. Now you are supposed to find the K-th largest sum of the subarray.
Please note that a subarray is the sequence of consecutive elements of the array.
Sample Input 1 :
2
3 3
3 -2 5
2 2
4 1
Sample output 1 :
3
4
*/
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int KthLargest(vector<int> &arr,int k){
    priority_queue<int,vector<int>, greater<int> > mini;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(mini.size()<k){
                mini.push(sum);
            }
            else{
                if(sum>mini.top()){
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
}
int main(){
    int n=3;
    vector<int> arr={3, -2, 5};
    int k=3;
    cout<<KthLargest(arr,k);
    return 0;
}