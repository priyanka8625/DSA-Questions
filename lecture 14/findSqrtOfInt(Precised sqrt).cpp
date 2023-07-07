#include<iostream>
using namespace std;


int floorSqrt(int n)
{
    long long int s = 0,ans=-1;
    int e = n/2;
    long long int mid = s + (e-s)/2;
    while(s <= e){
        long long int sq = mid*mid;
        if(sq == n){
            return mid;
        }else if(sq > n){
            e = mid -1;
        }else{
            ans = mid;
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int prec, int tempSoln){
	double ans = tempSoln;
	double factor = 1;
	for(int i=0; i<prec; i++){
		factor = factor/10;
		for(double j=ans; j*j < n; j+=factor){
			ans = j;
		}
	}
	return ans;
}

int main(){
	int n = 37;
	int tempSln = floorSqrt(n);
	cout<<"Answer : "<<morePrecision(n, 3, tempSln);
	return 0;
}

