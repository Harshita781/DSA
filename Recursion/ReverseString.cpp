#include<iostream>
using namespace std;
int reverse(int i, int j, string &s){
    if(i>j){
        return -1;
    }
   swap(s[i],s[j]);
   i++;
   j--;
   return reverse(i,j,s);
}
int main(){
    string s;
    cin>>s;
    reverse(0,s.length()-1,s);
    cout<<s<<endl;
    return 0;
}