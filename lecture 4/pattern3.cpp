#include<iostream>
using namespace std;

int main(){
	int rows;
	cin>>rows;
	for(int i=1; i<=rows;i++){
		for (int j=rows; j<=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
