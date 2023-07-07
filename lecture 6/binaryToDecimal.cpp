#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n=0, ans=0, bit=0,i=0;
	cin>>n;
	
	while(n!=0){
		bit = n%10;
		if(bit){
			ans += pow(2,i);
		}
		i++;
		n = n/10;
	}
	cout<<ans;
}
