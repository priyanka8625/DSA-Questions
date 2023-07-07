#include <bits/stdc++.h> 
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;


#include <bits/stdc++.h> 
void insertionSort( vector<int> &arr, int n){
    int j=0;
    for(int i=1; i<n; i++){
        // for rounds n-1
        int temp = arr[i];
        for(j=i-1; j>=0; j--){
            // to compare all the left side elements with ith element 
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        // store ith element in it's position
        arr[j+1] = temp;
    }

    cout<<endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}


int main(){
	vector<int> arr;
	arr.push_back(10);
	arr.push_back(9);
	arr.push_back(3);
	arr.push_back(11);
	arr.push_back(110);
	arr.push_back(1);
	insertionSort(arr,6);
	return 0;
}
