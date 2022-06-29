#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int size=t;
    vector<int> ans;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr;
        int inp;
        for(int i=0; i<n;i++){
            cin>>inp;
            arr.push_back(inp);
        }
        int sum=accumulate(arr.begin(), arr.end(),0);
        int dis_candy=sum/m;
        int rem_candy=sum-(m*dis_candy);
        int j=0;
        ans.push_back(rem_candy);
        j++;
    }
    for(int k=0;k<size;k++){
        cout<<ans.at(k)<<endl;
    }
    return 0;
}