#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float marks;
};
int main(){
    student s;
    s.name="mithun";
    s.rno=17;
    s.marks=98.9;
    cout<<s.name;
}
