#include<iostream>
using namespace std ; 
int main(){
	int test ; 
	cin >> test ;
	while(test--){
	int x  , y ; 
	cin >> x >> y ;
	int ans = 0 ;
	while(x >0 || y > 0){
		if(y>=2){
			y-=2 ;
			x-=7 ;
		}else if(y==1){
			y-=1 ; 
			x-=11 ;
		}else{
			x-=15;
		}
		ans++;
	}
	cout << ans << "\n";
}
}