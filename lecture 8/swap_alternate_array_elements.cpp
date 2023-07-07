//swap alternate array elements 

#include<iostream>
using namespace std;

int main(){
	int arr[100],size=0,i=0,j=1;
	bool flag = true;
	cin>>size;
	for(int i=0; i<size; i++){
		cin>>arr[i]	;
	}
	for(int i=0; i<size; i++){
		flag = true;
		for (int j=i+1; j<size; j++){
			if(arr[i] == arr[j]){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<arr[i];
			break;
		}
	}
	
}
