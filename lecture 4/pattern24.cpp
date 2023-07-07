#include<iostream>

using namespace std;
int main(){
	int rows;
	cin>>rows;
	for (int i=1; i<=rows; i++){
		for(int k=1; k<=rows-(i-1); k++){
			cout<<k<<" ";
		}
		for(int l=1; l<=i-1; l++){
			cout<<"* ";
		}
		for(int m=1; m<=i-1; m++){
			cout<<"* ";
		}
		for(int n=rows-(i-1); n>=1; n--){
			cout<<n<<" ";
		}
		cout<<endl;
	}
}
