//decimal to binary conversion

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n,ans=0,bin[32],bit=0;
	cin>>n;
	n = abs(n);
	int i=31;
//	initialize with zero because negative numbers are stored as 2's complement 
//	so all the 32 bits will be reversed including the left most bits which are usually 0s in small integer numbers
	for(int i=0; i<32; i++){
		bin[i] = 1;
	}
//	if(n<0){
//		take 1's compliment of each digit of n and store from end
		while(n!=0){
			bit = n&1;
			if(bit){
				bin[i] = 0;
			}else{
				bin[i] = 1;
			}
			n = n>>1;
			i--;
		}
//		1's complement +1
		bin[31] = bin[31] | 1;
		for(int i=0; i<32; i++){
			cout<<bin[i];
		}
//	}
	
}

