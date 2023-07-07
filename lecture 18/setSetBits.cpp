#include<iostream>
#include<math.h>

using namespace std;

int setSetBit(int x, int y, int l, int r){
    // point to the specific L'th bit to be copied
    y = y>>(l-1);
    
	//    loop from L'th bit upto R'th bit
    for(int i=l; i<=r; i++){
		//    	extract the last bit 
    	int bit = y&1;
    	
		//    	add 0's at the end in order to match the L'th position in X
    	bit = bit << (i-1);
    	
		//    	OR it with X (copy OP)
    	x = x | bit;
    	
		//    	move to next bit
    	y = y >> 1;
	}
	
    return x;
}
    
int main(){
	setSetBit(44, 3, 1, 5);
	return 0;
}
