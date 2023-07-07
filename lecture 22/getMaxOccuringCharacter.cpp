//maximum char count
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        
        for(int i=0; i<str.length();i++){
            int diff = str[i]-'a';
            arr[diff]++;
        }
        int maxi = -1, ans = 0;
        
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        
        char ch = 'a' + ans;
        
        return ch;
    }
    
    int main(){
    	cout<<getMaxOccuringChar("test");
    	
	}
