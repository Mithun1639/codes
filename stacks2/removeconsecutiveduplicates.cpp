#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string removeduplicates(string s){
    string g="";
    stack<char> st;
    st.push(s[0]); 
    for(int i=1;i<s.size();i++){
        if(s[i]==st.top()) i++;
        else st.push(s[i]);
    }
    while(st.size()>0){
            g+=st.top();
            st.pop();
        }
    reverse(g.begin(),g.end());
    return g;
}
int main(){
    string s="aaabbcccddeaaab";
    cout<<s<<endl;
    s=removeduplicates(s);
    cout<<s;
}