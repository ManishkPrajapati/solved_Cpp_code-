#include<iostream>
using namespace std;
class calender{
	int dd,mm,yy;
	public:
		calender()
		{
			cout<<"Enter Date : "<<endl;
			cin>>dd;
			cout<<"Enter Month : "<<endl;
			cin>> mm;
			cout<<"Enter Year : "<<endl;
			cin>>yy;
		}
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

int main()
{
	calender s1;
	s1.display();
	calender s2;
	s2.display();
}
