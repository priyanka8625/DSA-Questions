#include<iostream>
using namespace std;

int main(){
	int rows;
	char ch='A';
	cin>>rows;
	for(int i=1; i<=rows;i++){
		ch = 'A'+(i-1);
		for (int j=1; j<=rows; j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
