#include<iostream>
using namespace std;
class student{
	int roll_no, fee ;
	char name[50];
	public:
		student()
		{
			cout<<"Enter Name : "<<endl;
			cin>>name;
			cout<<"Enter Roll No. : "<<endl;
			cin>> roll_no;
			cout<<"Enter fee : "<<endl;
			cin>>fee;
		}
		void display()
		{
			cout<<"Enter Name : "<<name<<endl;
			cout<<"Enter Roll No. : "<<roll_no<<endl;
			cout<<"Enter fee : "<<fee<<endl;
		}
};

int main()
{
	student s1;
	s1.display();
	student s2;
	s2.display();
}
