#include<iostream>
using namespace std;

class printer{
	public:
		void show(){
			cout<<"Printer = Prints and make copy of pages"<<endl;
		}
        
};

class non_impact : public printer {
    friend void laserjet(non_impact &t);
	public:
		void show(){
			cout<<"non impact printer = prints by not being in contact with paper"<<endl;
		}
};

class inkjet : public non_impact{
	public:
		void show(){
			cout<<"Inkjet printer = sprays liquid ink to print copies"<<endl;
		}
};

void laserjet(printer &t){
    t.show();
    cout<<"laserjet printer = uses laser to print copies"<<endl;
}


class impact : public printer{
    friend void drum(impact &d);
	public:
		void show(){
			cout<<"impact printer = prints by being in direct contact with paper"<<endl;
		}
};

class dot_matrix : public impact{
	public:
		void show(){
			cout<<"dot matrix printer = prints one character at a time"<<endl;
		}
};

void drum(printer &d){
    d.show();
    cout<<"drum printer = prints a line of words at a time"<<endl;
}


int main(){
	impact i1;
    laserjet(i1);
    i1.show();
}