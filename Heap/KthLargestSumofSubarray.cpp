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