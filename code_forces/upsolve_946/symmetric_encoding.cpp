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

		vector<char> vec ; 
		for(int i = 0 ; i<a.size() ; i++){
			if(c.count(a[i])==0){
				c.insert(a[i]) ;
				vec.push_back(a[i]);
				// cout << a[i] ;
			}
		}
		sort(vec.begin() , vec.end()) ; 
		map<char,char> mp ;	

		for(int i = 0 ; i < vec.size() ; i++){
			// cout << vec[i] << vec[vec.size() - i - 1] ;
			mp[vec[i]] = vec[vec.size() - i - 1] ; 
		} 
		 for(int i = 0 ; i<len ; i++) cout << mp[a[i]];
		cout<<"\n" ; 


	}
}
