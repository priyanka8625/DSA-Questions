// check palindrome but without considering the whitespace special symbols and case sensitiveness
#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

bool checkPalindrome(string s)
{

    // convert string to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int start = 0, end = s.size()-1;

    // loop through the string
    while(start<=end){
        int char1 = (int)s.at(start);
        int char2 = (int)s.at(end);
        // if both the starting and ending chars lie between lowercase range or number range
        if((char1>=97 && char1<=122) || (char1>=48 && char1<=57)){
            if((char2>=97 && char2<=122)  || (char2>=48 && char2<=57)){
                // if condition is true
                if(s.at(start) != s.at(end)){
                    return 0;
                }else{
                    start++;
                    end--;
                }
            }else{
                end--;
            }
        }else{
            start++;
        }
            
    }
    return 1;
}


int main(){
	string s("N2 i&nJA?a& jnI2n");
	cout<<checkPalindrome(s);
	return 0;
}
