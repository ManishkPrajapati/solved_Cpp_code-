#include <iostream>
using namespace std;

class sum;
class temp 
{
	int x;
	friend void manupulate(temp& t, sum& a);
	public :
		void get(){
	cout<<"accept x";
	cin>>x;
}
		void show();
		
};
void temp::show()
{
	cout<<"value of x is"<<x;
}


class sum {
	int y;
	friend void manupulate(temp& t, sum& a);
	public:
	void get(){
		cout<<"enter value  : "<<endl;
		cin>>y;
	}

	
};

void manupulate(temp& t , sum& a)
{
	cout<<"in friend function";
	t.x = (t.x+a.y);
}

int main ()
{
	temp t;
	sum a;
	t.get();
	a.get();
	manupulate(t,a);
	t.show();
}
