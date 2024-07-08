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
void change(student &s){
    s.name="harsh";
}
int main(){
    student s("mithun",45,94.9);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name;
}