#include<iostream>
using namespace std;

class marks{
	int subject[3];
	public:
		marks(int sub1, int sub2, int sub3){
			subject[0] = sub1;
			subject[1] = sub2;
			subject[2] = sub3;
		}
		
		int operator[](int position){
			return subject[position];
		}
};

int main(){
	marks m1(45,95,76);
	cout<<m1[0]<<endl;
	cout<<m1[1]<<endl;
	cout<<m1[2]<<endl;
}
