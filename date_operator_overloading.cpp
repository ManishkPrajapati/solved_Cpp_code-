#include<iostream>
using namespace std;
class Date
{
  int day;
  int month;
  int year;
  public:
         Date(int d,int m,int y)
         {
            day=d;
            month=m;
            year=y;
         }
         
         friend void operator-(Date &,int);
         friend void operator+(Date &,int);
         void display()
         {
            cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
         }
};
void operator-(Date &a, int y)
{
    a.day= a.day-y;
    a.month=a.month-y;
	a.year=a.year-y;
 	cout<<"Date:"<<a.day<<"/"<<a.month<<"/"<<a.year<<endl;
}
void  operator+(Date &x,int y)
{
    x.day= x.day+y;
    x.month=x.month+y;
	x.year=x.year+6;
 	cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}
int main()
{
    Date d1(10,4,23);
    d1-1;
   	d1+2;
   
    return 0;
}
