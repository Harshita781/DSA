#include<iostream>
#include<stdlib.h>
using namespace std;
int isPossible(int *stalls,int n,int k,int mid) {
    int cowCount=1;
    int lastPos=stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos=stalls[i];
        } 
    }
    return false;
}
int aggressiveCows(int *stalls,int n,int k){
    int s=0;
    int maxi=-1;
    for(int i=0; i<n;i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
       int n;
       cin>>n;
       int k;
       cin>>k;
       int *stalls=new int [n];
       for(int i=0; i<n;i++){
        cin>>stalls[i];
        cout<<aggressiveCows(stalls,n,k);
        return 0;
       }
}