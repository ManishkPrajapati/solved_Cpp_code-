#include<iostream>
using namespace std;

class Complex
{
	int real, img;
	public:
	void getData()
	{
		cout<<"Accept real and Imaginary number"<<endl;
		cin>>real>>img;
	}	
	void display()
	{
		cout<<real<< " + "<<img<<"i"<<endl;
	}
	void acceptparam(int, int);
	void setReal(int r)
	{
		real = r;
	}
	int getReal()
	{
		return real;
	}
	void setImg(int i)
	{
		img = i;
	}
	int getImg()
	{
		return img;
	}
};

void Complex::acceptparam(int r, int i)
{
	real = r;
	img = i;
}

int main()
{
	Complex c1;
	c1.getData();
	c1.display();
	Complex c2;
	c2.acceptparam(6,8);
	c2.display();
	c2.setReal(1);
	c2.setImg(2);
	c2.display();
	cout<<"modified Real number :- " << c2.getReal();
	return 0;
}
