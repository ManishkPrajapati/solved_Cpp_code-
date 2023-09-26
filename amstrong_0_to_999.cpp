#include<iostream>
using namespace std;
int main()
{
	int n,a,rem,orgNo,x=0;
	
	cout<<"Enter the number : "<<endl;
	cin>>n;
	
	for(int i=1;i<=999;i++)
	{
	orgNo=i;
	a=i;
	while(a!=0)
	{
		rem=a%10;
		a=a/10;
		x= x+(rem*rem*rem);
	}
	if (x==orgNo)
	{
		cout<<x;
		
	}
	
}
	
}
