#include<iostream>
using namespace std;

int leftOccurance(int arr[],int size, int key){
	int start = 0;
	int end = size-1;
	int ans=-1;
//	int mid = (start+end)/2;
//	optimised soln
	int mid = start + (end-start)/2;
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			end = mid -1;
		}else if(key > arr[mid]){
			start = mid + 1;
		}else {
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}

int rightOccurance(int arr[],int size, int key){
	int start = 0;
	int end = size-1;
	int ans=-1;
//	int mid = (start+end)/2;
//	optimised soln
	int mid = start + (end-start)/2;
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			start = mid + 1;
		}else if(key > arr[mid]){
			start = mid + 1;
		}else {
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}
int main(){
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[7] = {1,2,3,4,4,4,4};
	
	int ele = leftOccurance(arr2,7,4);
	int ele1 = rightOccurance(arr2,7,4);
	
	cout<<ele<<" "<<ele1;
}
