#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin>>n;
	int matriz[n][n];
	
	for( int i = 0 ; i < n ; i++ ) { matriz[i][0] = 1; }
	for( int j = 0 ; j < n ; j++ ) { matriz[0][j] = 1; }
	
	for( int i = 0 ; i < n - 1 ; i++ ) {
		for( int j = 0 ; j < n - 1 ; j++ ) {
			matriz[i+1][j+1] = matriz[i+1][j] + matriz[i][j+1];
		}
	}
	
	cout<<matriz[n-1][n-1];
	
	return 0;
}
