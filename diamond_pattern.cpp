#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
     for(int row =1; row<=n; row++){

        for (int col = 1; col<=n-row ; col++)
        {
            cout<<" ";
        }
        for(int spa=1; spa<=2*row-1;spa++){
            cout<<"*";
        }
        cout<<endl;
     }

     for(int row =n-1; row>=1; row--){

        for (int col = 1; col<=n-row; col++)
        {
            cout<<" ";
        }
        for(int spa=1; spa<=2*row-1;spa++){
            cout<<"*";
        }
        cout<<endl;
     }
}
