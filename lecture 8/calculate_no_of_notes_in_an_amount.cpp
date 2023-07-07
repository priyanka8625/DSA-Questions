#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int amount=0;
	cin>>amount;
	
	int remained = amount, note100=0,note50=0,note20=0,note1=0;
	note100 = remained/100;
	remained %= 100;
	note50 = remained/50;
	remained %= 50;
	note20 = remained/20;
	remained %= 20;
	note1 = remained/1;
	remained %= 1;
	cout<<"100 rs : "<<note100<<endl;
	cout<<"50 rs : "<<note50<<endl;
	cout<<"20 rs : "<<note20<<endl;
	cout<<"1 rs : "<<note1<<endl;
		
}
