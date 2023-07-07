#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
	int start = 0;
	int end = size-1;
//	int mid = (start+end)/2;
//	optimised soln
	int mid = start + (end-start)/2;
	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}else if(key > arr[mid]){
			start = mid + 1;
		}else {
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	return -1;
}
int main(){
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[7] = {1,2,3,4,5,6,7};
	
	int ele = binarySearch(arr2,7,-1);
	
	if(ele != -1){
		cout<<"Element FOUND at "<<ele;
	}else{
		cout<<"Element NOT FOUND";
	}
}
