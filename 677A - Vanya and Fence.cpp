#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int h; cin>>h;
	int longitud = 0;
	int a;
	
	for( int i = 1 ; i <= n ; i++ ) {
		cin>>a;
		
		if( a <= h ) { longitud++; }
		else{ longitud += 2; }	
	}
	
	cout<<longitud;
	
	return 0;
}
