/*
Problem Statement:
Given valid mathematicalexpression in the form of a string.You are supposed to return true if the givrn expression cntains a pair of redundant bracket, else return false. The given string only contains '(',')','+','-','*','/' and lowercase English letters.
Sample Input 1 :
2
(a+b)
(a+c*b)+(c))
Sample Output 1 :
No
Yes
*/
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
bool findRedundantBracket(string &s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' || top=='-'||top=='*'||top=='/'){
                        isRedundant=false;
                    }
                    st.pop();
                }
                if(isRedundant==true)
                return false;
                st.top();
            }
        }
    }
    return false;
}
int main(){
    string str = "(a+c*b)+(c))";
    if(findRedundantBracket(str)==0){
      cout<<"String is redundant"<<endl;
    }
    else{
        cout<<"Not redundant"<<endl;
    }
    return 0;
}