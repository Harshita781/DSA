#include<bits/stdc++.h>
using namespace std;
int highestPowerof(int n){
    int ans=0;
    for(int i=n;i>=1;i--){
        if((i&(i-1))==0){
            ans=i;
            break;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long *arr= new long[n+1];
        for(int i=0;i<=n;i++){
            cin>>arr[i];
        }
    long long res[3]={0,0,0};
    for(int i=highestPowerof(n);i>0;i/=2){
        long diff=arr[i]-arr[0];
        if(diff<0){
            diff*=-1;
            int ct=diff/i;
            if(ct==1){
                ct=2;
                if((res[0]^i)<=n){
                    res[0]^=i;
                    ct--;
                }
                if(ct && (res[1]^i)<=n){
                    res[1]^=i;
                    ct--;
                }
                if(ct>0 && (res[2]^i)<=n){
                    res[2]^=i;
                }
            }
            else if(ct==3){
                res[0]^=i;
                res[1]^=i;
                res[2]^=i;
            }
        }
        else{
            int ct=diff/i;
            if(ct==1){
                if((res[0]^i)<=n){
                    res[0]^=i;
                }
                else if((res[1]^i)<=n){
                    res[1]^=i;
                }
                else{
                    res[2]^=i;
                }
            }
        }
        sort(res,res+3);
    }
    cout<<res[0]<<res[1]<<res[2]<<endl;
    }
	// your code goes here
	return 0;
}
