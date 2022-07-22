#include<bits/stdc++.h>
using namespace std;
void max_heapify(vector <int> &ans,int i,int n){
   int largest=i;
   int left=2*i+1;
   int right=2*i+2;
   if(left<n && ans[left]>ans[largest])
   {
    largest=left;
   }
    if(right<n && ans[right]>ans[largest])
    {
        largest=right;
    }
    if(largest!=i){
        swap(ans[i],ans[largest]);
        max_heapify(ans,largest,n);
}
    
}
void print(vector <int> &ans,int n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    vector <int> arr1={10,5,6,2};
    vector <int> arr2={12,7,9};
    vector <int> ans;
    for(auto i:arr1){
        ans.push_back(i);
    }
    for(auto i:arr2){
        ans.push_back(i);
    }
    int n=ans.size();
    for(int i=n/2-1;i>=0;i--){
        max_heapify(ans,i,n);
    }
    print(ans,n);
    return 0;
}