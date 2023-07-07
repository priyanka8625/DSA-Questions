#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

void noOfOccurances(int arr[], int n, int key)
{
//	firat lets find the first and last occurance of an element 
//  and then use these occurances to find the no. of occurances by following formula
//	formula will be = (last - first)+1

    int lans= -1, rans = -1;
    int lstart = 0;
    int lend = n-1;
    int rstart = 0;
    int rend = n-1;
    int lmid = lstart + (lend-lstart)/2;
    int rmid = rstart + (rend-rstart)/2;

    while(lstart <= lend || rstart <= rend){
        if(arr[lmid] == key && lstart <= lend){
            lans = lmid;
            lend = lmid - 1; 
        }
        if(arr[rmid] == key && rstart <= rend){
            rans = rmid;
            rstart = rmid +1;
        }
        if(key > arr[lmid] && lstart <= lend){
            lstart = lmid+1;
        }else if(key < arr[lmid] && lstart <= lend){
            lend = lmid -1;
        }
        if(key > arr[rmid] && rstart <= rend){
          rstart = rmid+1;
        }else if(key < arr[rmid] && rstart <= rend){
            rend = rmid -1;
        }
        lmid = lstart + (lend-lstart)/2;
        rmid = rstart + (rend-rstart)/2;
    }
    int occurance = (rans - lans) +1;
    cout<<occurance;
}
int main(){
	int arr1[4] = {0, 0, 0, 0};
	int arr2[8] = {0, 0, 1, 1, 2, 2, 2, 2};
	
	noOfOccurances(arr2,8,2);
	return 0;
}
