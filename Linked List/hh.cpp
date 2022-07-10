#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        int p=INT_MAX;
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                temp++;
            }
        }
        if(temp%2==0 || arr[0]==1){
            cout<<"CHEF"<<endl;
        }
        else{
            cout<<"CHEFINA"<<endl;
        }
    }
	// your code goes here
	return 0;
}
