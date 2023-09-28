#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
        person(){
            name = "noname";
            age = 0;
        }
        friend ostream &operator << (ostream &output, person &p);
        friend istream &operator >> (istream &input, person &p);
};

ostream &operator << (ostream &output, person &p){
    output << "hello hi!!"<<endl;
    output << "myself is "<<p.name<<"my age is "<<p.age <<endl;
    return output;
}

istream &operator >> (istream &input, person &p){
    input>> p.name >>p.age;
    return input;
}

int main(){
    cout<< " enter name and age"<<endl;
    person p1;
    cin>>p1;
    cout<<p1;
}