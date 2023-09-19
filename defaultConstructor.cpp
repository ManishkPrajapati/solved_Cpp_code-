#include<iostream>
using namespace std;
class defConstr{
	int a, b;
	public:
		defConstr()
		{
			cout<<"enter value of a & b : "<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"value of a = "<<a<<" & b = "<<b<<endl;	
		}
};

int main()
{
	defConstr d1;
	d1.display();
}
