#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float marks;
    student(string name,int rno,float marks){
        this->name =name;
        this->rno=rno;
        this->marks=marks;
    }
};
int main(){
    student s("mithun",17,98.8);
    cout<<s.name;
}