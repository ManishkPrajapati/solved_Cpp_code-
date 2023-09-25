#include<iostream>
using namespace std;

class marks{
    int ine, ext;
    public:
    marks(){
        ine=0;
        ext=0;
    }
    marks(int i, int e){
        ine = i;
        ext = e;
    }
    void display(){
        cout<<ine<<endl<<ext<<endl;
    }

    marks operator-(marks &q){
        marks t;
        t.ine = ine-q.ine;
        t.ext = ext-q.ext;
        return t;
    }

};

int main(){
    marks m1(10,20);
    marks m2(15,20);
    marks m3 = m1-m2;
    m3.display();
}