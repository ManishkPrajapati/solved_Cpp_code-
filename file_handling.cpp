#include <iostream>
#include <fstream>
using namespace std;

class student {
public:
   string Name;
   int stu_roll;
   int marks;
};


int main(){
   student Stu_1;
   Stu_1.Name="raj";
   Stu_1.stu_roll=22;
   Stu_1.marks=101;
   
   ofstream file1;
   file1.open("student.txt", ios::app);
   file1.write((char*)&Stu_1,sizeof(Stu_1));
   file1.close();
   
   ifstream file2;
   file2.open("student.txt",ios::in);
   file2.read((char*)&Stu_1,sizeof(Stu_1));
   cout<<Stu_1.Name<<endl;
   cout<<Stu_1.stu_roll<<endl;
   cout<<Stu_1.marks<<endl;
   file2.close();
   return 0;
}
