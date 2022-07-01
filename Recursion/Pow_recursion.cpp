#include<iostream>
using namespace std;
int power(int n,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return n;
    }
    int ans=power(n,b/2);
    if(b%2==0){
     return ans*ans;
    }
    else{
        return n*ans*ans;
    }
}
int main(){
    int n,b;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>b;
    int ans=power(n,b);
    cout<<ans;
    return 0;
}