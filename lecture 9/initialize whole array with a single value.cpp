// how to initialize all elements of array with a single value...

#include<iostream>
using namespace std;

int main(){
//	we can initialize an array with all 0s like this
	int arr1[100] = {0};
//	but for non zero values we could the following 
	int arr2[100];
	
	std::fill_n(arr2,100,1);
	for(int i=0; i<100;i++){
		cout<<arr2[i];
	}
}
