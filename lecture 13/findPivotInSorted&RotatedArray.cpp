// find pivot in an sorted rotated array
// pivot = minimum value in an array
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
	int s = 0; 
	int e = n-1;
	int mid = s +(e-s)/2;
	while(s<e){
		if(arr[mid] > = arr[0]){
			s = mid + 1;
		}else{
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}
int main(){
	int arr[5] = {19,20,1,3,15};
	int pivot = getPivote(arr,5);
	cout<<pivot;
	return 0;
}
