#include<iostream>
using namespace std;

int main(){
	int rows;
	char ch='A';
	cin>>rows;
	for(int i=1; i<=rows;i++){
		for (int j=1; j<=rows; j++){
			cout<<ch<<" ";
		}
		ch++;
		cout<<endl;
	}
}
