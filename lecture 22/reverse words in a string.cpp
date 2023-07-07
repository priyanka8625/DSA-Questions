//reverse words in a string
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void reverseWords(vector<char>& s){
	string str = "";
	vector<char> resString;
	for(int i=0; i<=s.size(); i++){
		if(s[i] == ' ' || s[i]=='\0'){
			int j=str.size()-1;
			while(j>=0){
				resString.push_back(str.at(j));
				j--;
			}
			resString.push_back(' ');
			str = "";
		}else{
			str.push_back(s[i]);
		}
	}
	s = resString;
	for(int i=0; i<s.size(); i++){
		cout<<s[i];
	}
}

int main(){
	vector<char> s;
	s.push_back('M');
	s.push_back('y');
	s.push_back(' ');
	s.push_back('N');
	s.push_back('a');
	s.push_back('m');
	s.push_back('e');
	s.push_back(' ');
	s.push_back('i');
	s.push_back('s');
	s.push_back(' ');
	s.push_back('P');
	s.push_back('r');
	s.push_back('i');
	s.push_back('y');
	s.push_back('a');
	s.push_back('n');
	s.push_back('s');
	s.push_back('h');
	reverseWords( s);
	return 0;
}
