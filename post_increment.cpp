#include<iostream>
using namespace std;

class marks{
    int mark;
    public:
    marks(){
        this->mark =0;
    }
    marks(int a){
        this->mark =a;
    }
    void display(){
        cout<<"marks is : "<<mark<<endl;
    }

    marks operator++(int){
        marks dupli(this->mark);
        mark += 1;
        return dupli;
    }
};

int main(){
    marks m1(2);
    (m1++).display();
    m1.display();
}