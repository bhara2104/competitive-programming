#include<iostream>
using namespace std ; 
int main(){
	int test ; 
	cin >> test ; 
	while(test--){
		int number  ;
		cin >> number; 
		cout << ((number %3!=0) ? "First" : "Second") << "\n";
	}
}