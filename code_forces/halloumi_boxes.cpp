// https://codeforces.com/contest/1903/problem/A

#include<iostream>
#include<vector>
using namespace std ; 
int main(){
	int test ; 
	cin >> test ; 
	while(test--){
		int a , b ;
		cin >> a >> b ; 
		vector<int> vec ; 
		for(int i = 0 ; i < a ; i++){
			int temp ; 
			cin >> temp ; 
			vec.push_back(temp) ;
		}
		bool sorted = true ; 
		for(int i = 1; i<vec.size() ; i++){
			if(vec[i-1]>vec[i]) sorted = false ; 
		}
	    if(sorted) cout << "YES"<<"\n" ;
		else if(b>=2) cout << "YES" << "\n" ; 
		else cout << "NO" << "\n" ; 
	}
}