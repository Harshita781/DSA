#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    int n=4;
    int arr[4]={4,3,2,6};
    priority_queue <int, vector<int>, greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int cost=0;
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int sum=a+b;
        cost+=sum;
        pq.push(sum);
    }
    cout<<cost<<endl;
    return 0;
}