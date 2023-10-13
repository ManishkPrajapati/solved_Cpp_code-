#include<iostream>
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    for(int i=1; i<= n; i++){
//    		i<=n?k++:k--;
        for(int j=1; j<=n; j++){
        	if(i==n || i==1 ||j==1 ||j==n || j==i || j==n-i){
        		cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
        
}