#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float marks;
    student(string n,int r,float m){
        name =n;
        rno=r;
        marks=m;
    }
};
int main(){
    student s("mithun",17,98.8);
    cout<<s.name;
}
