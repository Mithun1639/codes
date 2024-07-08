#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(string s){
    stack<char> st;
    if(s.length()%2!=0) return false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{// s[i]==")"
            if(st.size()==0) return false;
            st.pop();
            return false;
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="()())()";
    cout<<isbalanced(s);
}