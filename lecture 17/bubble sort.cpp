#include <bits/stdc++.h> 
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;


void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1; i<=n-1; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
	bubbleSort(arr,6);
	return 0;
}
