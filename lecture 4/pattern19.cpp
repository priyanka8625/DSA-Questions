#include<iostream>

using namespace std;
int main(){
	int rows;
	cin>>rows;
	for (int i=rows; i>=1; i--){
		for(int k=1; k<=rows-i; k++){
			cout<<"  ";
		}
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
