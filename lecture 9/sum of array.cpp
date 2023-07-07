#include<iostream>

using namespace std;
int sum(int arr[],int n){
	int sum=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	return sum;
}
int main(){
	int arr[100] = {0},size=0;
	cout<<"Enter size of array : "<<endl;
	cin>>size;
	
	cout<<"Enter array elements : "<<endl;
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"sum of elements : "<<sum(arr, size);
	
	return 0;
	
}
