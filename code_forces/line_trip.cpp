// https://codeforces.com/problemset/problem/1901/A

#include<iostream>
#include <vector> 
#include <algorithm>
using namespace std ; 
int main()
{
	int test ; 
	cin >> test ; 
	while(test--){
		int size , end_pos;
		cin >> size >> end_pos ; 
		int ans = 0 , prev = 0 ;
		for(int i = 0 ; i < size ; i++){
			int temp ; 
			cin >> temp ; 
			ans = max(ans , temp - prev) ; 
			prev = temp ;
		} 
		cout << max(ans, (2 * (end_pos - prev))) << "\n" ; 
		

	}
}