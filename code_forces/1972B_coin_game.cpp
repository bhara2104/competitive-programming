#include<iostream>
using namespace std ; 
int main(){
int t  ; 
  cin>> t ; 
  while(t--){
  int n ; 
  cin >> n ; 
  string s ; 
  int count = 0 ;
  cin>>s ; 
  for(auto &c : s) if(c=='U') count++;
  cout << (count%2==0 ? "No\n" : "Yes\n") ;
  }
}
