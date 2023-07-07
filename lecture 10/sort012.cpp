#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void sort012(int *arr, int n)
{
   int i=0, j= n-1;
   while(i<j){
      if(arr[i]==0){
         i++;
      }
      if(arr[j]==2){
         j--;
      }
      if(arr[i]==2 && arr[j]!=2 && i<j){
         std::swap(arr[i],arr[j]);
         j--;
      }
      if(arr[j]==0 && arr[i]!=0 && i<j){
         std::swap(arr[i],arr[j]);
         i++;
      }
      if(arr[i] == arr[j] && arr[i+1] > arr[i]){
         i++;
      }
      if(arr[i] == arr[j] && arr[j-1]<arr[j]){
         j--;
      }
   }
}

int main(){
	int arr[7] = {0, 1, 2, 1, 2, 1, 2};
	sort012(arr,7);
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
}
