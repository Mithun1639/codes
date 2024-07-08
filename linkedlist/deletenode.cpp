#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next= NULL;
    }
};
void display(node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void deletenode(node* head,node* tar){
    node* temp=head;
    while(temp->next!=tar){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return;
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    deletenode(a,c);
    cout<<endl;
    display(a);
}