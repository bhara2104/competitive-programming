#include<iostream>
#include<vector>
using namespace std ; 
int main(){
	int size ; 
	cin >> size ;
	vector<int> vec ; 
	for(int i = 0 ; i<size ;i++){
		int temp ; 
		cin >> temp ; 
		vec.push_back(temp); 
	}
	int first = vec[0] ; 
	int ans = -1 ;
	for(int i = 1 ; i< size ; i++){
		if(vec[i] > first){
			ans = i + 1 ;
			break ;
		}
	}
	cout << ans ; 
}