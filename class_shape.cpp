#include<iostream>
using namespace std;

class shape{
	int edge;
	public:
		shape();
		shape(int);
		void display();
		virtual int area(){
			return 0;
		}
};

shape::shape(){
	cout<<"in default of shape"<<endl;
	edge =0;
}

shape::shape(int a){
	cout<<"in para of shape"<<endl;
	edge = a;
}

void shape::display(){
	cout<<"area is : "<<edge<<endl;
}

class square: public shape{
	int side;
	public:
		square();
		square(int,int);
		void display();
		int area();
};

square::square(){
	cout<<"in default of square"<<endl;
	side = 0;
}

square::square(int a,int s):shape(a){
	cout<<"in para of square"<<endl;
	side =s;
}

void square::display(){
	shape::display();
	cout<<"side of square is: "<<side<<endl;
}

int square::area(){
	return side*side;
}

class rectangle: public square{
	int len, bre;
	public:
		rectangle();
		rectangle(int ,int,int ,int);
		void display();
		int area();
};

rectangle::rectangle(){
	cout<<"in default of rectangle"<<endl;
	len=0;
	bre=0;
}

rectangle::rectangle(int a, int s, int l, int b):square(a,s){
	cout<<"in para of rectangle "<<endl;
	len=l;
	bre=b;
}

void rectangle::display(){
	square::display();
	cout<<"length of rectangle : "<<len<<endl;
	cout<<"breath of rectangle : "<<bre<<endl;
}

int rectangle::area(){
	return len*bre; 
}

int main(){
	shape *ptr;
	rectangle r1(5,6,4,5);
	ptr = &r1;
	cout<<ptr->area();
}
