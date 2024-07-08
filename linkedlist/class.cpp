#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float marks;
    student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
int main(){
    student s("mithun",45,94.9);
    cout<<s.name;
    cout<<s.rno;
    cout<<s.marks;
}