// https://codeforces.com/problemset/problem/1900/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int test ; 
	cin >> test ; 
	while(test--){
		int len ; cin >> len ;
		string s ; 
		cin >> s ; 
		cout << ((s.find("...")!=-1) ? 2 : count(s.begin() , s.end() , '.'))<< "\n";
	}
}