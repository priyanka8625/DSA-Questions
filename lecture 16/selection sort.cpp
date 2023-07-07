#include <bits/stdc++.h> 
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;


void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
        
        for (int i=0; i<n; i++)
        	cout << arr[i] << " ";
        cout<<endl;
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
	selectionSort(arr,6);
	return 0;
}
