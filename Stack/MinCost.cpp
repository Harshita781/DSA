/*
Problem Statement
You are given a string 'STR' containing either '{' or '}'. 'STR' is called valid if all the brackets are balanced. Formally for each opening bracket.ther must be a closing bracket right to it.
You want to make 'STR' valid by performing some operations on it.In one operation,he can convert '{' into'}' or vice versa, and the cost of one such operation is 1.
Your task is to determine the minimum cost to make 'STR' valid.
Sample Input 1:
2
{{{}
{{}{}}
Sample Output 1:
1
0
*/
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int findMinimumCost(string str){
    if(str.length()%2==1){
        return -1;

    }
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='{')
        s.push(ch);
        else{
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
        
    }
    int a=0,b=0;
        while(!s.empty()){
            if(s.top()=='{'){
                b++;
            }
            else{
                a++;
            }
            s.pop();
        }
        int ans=(a+1)/2+(b+1)/2;
        return ans;
}

int main(){
    string s="{{{{}}{}}}";
    if(findMinimumCost(s)==0){
        cout<<"String can be made valid"<<endl;
    }
    else{
        cout<<"String can't be made valid"<<endl;
    }
    return 0;
}