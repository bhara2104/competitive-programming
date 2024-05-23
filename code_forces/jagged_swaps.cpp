#include<iostream>
#include <vector>
using namespace std; 

int main(){
	int test ; 
	cin >> test ; 
	while(test--){
		int size ;
		cin >> size ; 
		vector<int> vec; 
		for(int i = 0 ; i<size ; i++){
			int temp ; 
			cin >> temp ; 
			vec.push_back(temp);
		}
		if(vec[0]==1) cout<< "Yes";
		else cout << "No";
		cout << "\n";
	}
}