#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
// normal printing of linked list using recursion.
void recur(node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    recur(head->next);
}
// reverse printing of linked list
void recurrev(node* head){
    if(head==NULL) return;
    recurrev(head->next);
    cout<<head->val<<" ";
  
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    recurrev(a);
}