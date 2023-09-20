#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			cout<<"in default of A"<<endl;
		}
		A(int a){
			cout<<"in para of A"<<endl;
			this->a=a;
		}
		void display(){
			cout<<"in display of A"<<endl;
			cout<<"value of a: "<<a<<endl;
		}
};

class B: public A
{
	int b;
	public:
		B(){
			cout<<"in default of B"<<endl;
		}
		B(int , int );
		void display(){
			A::display();
			cout<<"in display of B"<<endl;
			cout<<"value of B: "<<b<<endl;
		}
};

B::B(int a, int b):A(a){
			cout<<"in para of B"<<endl;
			this->b=b;
		}

int main(){
	B bobj(10,20);
	bobj.display();
}
