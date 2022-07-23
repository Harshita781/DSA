/*
Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

Example 1:

Input:
      5
    /  \
   2    3
Output: 1
*/
#include<bits/stdc++.h>
using namespace std;
    int kthsmallest(int arr[],int l,int r,int k){
       priority_queue<int> pq;
       for(int i=0;i<k;i++){
        pq.push(arr[i]);
       }
       for(int i=k;i<=r;i++){
        if(arr[i]<pq.top()){
        pq.pop();
        pq.push(arr[i]);
        }
       }
    int ans=pq.top();
    return ans;
    }
int main(){
    int n=5;
    int arr[5]={7,10,4,20,15};
    cout<<kthsmallest(arr,0,4,3);
    return 0;
}