#include<iostream>

using namespace std;
int main(){
	int rows;
	cin>>rows;
	for (int i=1; i<=rows; i++){
		for(int k=1; k<=i-1; k++){
			cout<<"  ";
		}
		for(int j=i; j<=rows; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
