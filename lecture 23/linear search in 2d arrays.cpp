#include<iostream>
using namespace std;


int search(int arr[][4], int rows, int cols, int key){
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			if(arr[i][j] == key){
				cout<<"element is found at "<<i+1<<"th row and "<<j+1<<"th column!!!";
				return 1;
			}
			
		}
	}
	cout<<"element not found!!!";
	return 0;
}
int main(){
	int arr[3][4],key=0;
	
	cout<<"Enter elements in array 3*4 ... "<<endl;
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Enter key to be searched ... "<<endl;;
	cin>>key;
	
	search(arr,3,4,key);
	
	return 0;
}
