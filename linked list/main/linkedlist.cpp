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
int main(){
   node a(10);
   node b(10);
   node c(10);
   node d(10);   
   cout<<a.next; 
}