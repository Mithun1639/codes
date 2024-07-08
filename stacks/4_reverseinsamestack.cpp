#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> gt;
    stack<int> dl;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        dl.push(gt.top());
        gt.pop();
    }
    while(dl.size()>0){
        st.push(dl.top());
        cout<<st.top()<<" ";
        dl.pop();
    }
    cout<<endl;
    cout<<st.size();

}