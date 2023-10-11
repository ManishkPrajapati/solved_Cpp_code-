#include<iostream>
using namespace std;
#include<string>

int main(){
    int n, k=0;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
    		i<=n?k++:k--;
        for(int j=1; j<=2*n-1; j++){
        	if(j<= n+1-k || j>=4+k){
        		cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}