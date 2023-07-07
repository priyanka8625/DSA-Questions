#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

void firstAndLastPosition(int arr[], int n, int key)
{
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
    cout<< lans<<" "<<rans;
}
int main(){
	int arr1[4] = {0, 0, 0, 0};
	int arr2[8] = {0, 0, 1, 1, 2, 2, 2, 2};
	
	firstAndLastPosition(arr1,4,0);
	return 0;
}
