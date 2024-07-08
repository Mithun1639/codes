#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    stack<int> st;
    while(q.size()>0){
        st.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
}
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        cout<<st.top();
        
    }

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<endl;
    reverse(q);
    
}