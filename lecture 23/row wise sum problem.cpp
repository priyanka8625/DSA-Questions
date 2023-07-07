#include<iostream>
using namespace std;


void rowWiseSum(int arr[][3], int rows, int cols){
	cout<<"---- Largest ROW's' sum ----"<<endl;
	int maxSum = 0, largestRow = -1;
	for(int i=0; i<rows; i++){
		int sum = 0;
		for(int j=0; j<cols; j++){
			sum += arr[i][j];
		}
		if(sum > maxSum){
			maxSum = sum;
			largestRow = i;
		}
	}
	
	cout<<"ROW - "<<largestRow+1<<endl<<"SUM : "<<maxSum<<endl;
	
}
int main(){
	int arr[3][3],key=0;
	
	cout<<"Enter elements in array 3*3 ... "<<endl;
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	
	
	rowWiseSum(arr,3,3);
	
	return 0;
}
