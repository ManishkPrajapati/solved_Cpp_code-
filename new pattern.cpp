#include<iostream>
using namespace std;

int main(){
    int a=5;

    for (int i = 1; i <= a; i++)
    {
        for (int j = a-1; j>= i; j--)
        {
            cout<<" ";
        }
        for(int x=1; x<=i; x++)
        {
            cout<<"*";
        }
        cout<< i;
        for(int z=1; z<=i; z++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}