#include <iostream>
using namespace std;
class book {
    char name;
    int prize;
    int onofpages;
    int countbooks(int prize){
        if(prize<1000) return 1;
        else return 0;
    }
    bool isbookpresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    book harryporter;
    harryporter.name="h";
    harryporter.prize=34;
    harryporter.countbooks(485);
}