#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int test ; 
	cin >> test ; 
	while(test--){
		long long len ; 
		cin >> len ; 
		string a ; 
		cin >> a ; 
		set<char> c ; 
		for(auto& it : c){
			c.insert(it) ;
		}

		vector<char> vec(c.begin() , c.end()) ; 
		map<char,char> mp ;
		for(int i = 0 ; i < len ; i++){
			mp[vec[i]] = mp[vec[size - 1 - i]] ; 
		}

		for(auto it : a){
			cout<< mp[it];
		}
		cout<< endl ; 


	}
}
