#include<iostream>
using namespace std;

int main(){
	int arr[3][3] = { {5,11,6}, {7,8,12}, {9,13,17}};
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				if(i%2==0){
					cout<<arr[i][j]<<" ";
				}else{
					cout<<arr[i][2-j]<<" ";
				}
			}
		}
}