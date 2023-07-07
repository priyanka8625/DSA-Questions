#include<iostream>
using namespace std;

int main(){
	int n=0;
	bool flag = true;
	cout<<"Enter any integer number :";
	cin>>n;
	if(n == 1){
		cout<<"1 is neither prime nor composite";
	}else{
		for (int i=2; i<n; i++){
			if(n%i==0){
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"Prime";
		else
			cout<<"Non-Prime";
	}	
}
