#include<iostream>
using namespace std;
int main()
{
	int a[5], sum = 0;
	float avg = 0;
	cout<<"ENTER SUBJECT MATKS"<<endl;
	for(int i=0; i<5; i++){
		cin>> a[i];
		sum += a[i];
	}
	avg = (float)sum/5;
	cout<<"The average :- "<< avg;
	return 0;
}

