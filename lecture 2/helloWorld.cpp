#include <iostream>

using namespace std;

int main(){
	cout<<"Enter any character : ";
	char ch;
	cin >> ch;
	
	if(ch >= 'A' && ch<='Z')
		cout<<"Capital";
	else if(ch>='a' && ch<='z')
		cout<<"Small";
	else if(ch>='0' && ch<='9')
		cout<<"Number";
	else
		cout<<"Special Symbol";
}
