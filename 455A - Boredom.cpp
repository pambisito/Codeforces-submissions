#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, a, b = -1;

	cin>>n;
	
	vector<long long> v( 100005 , 0 );
	vector<long long> f( 100005 , 0 );
	
	while( n-- ) {
		cin>>a; v[a]++;
		b = max( a, b );
	}
	
	f[0] = 0 ; f[1] = v[1];
		
	for( int i = 2 ; i <= b ; i++ ) {	
		f[i] = max( f[i-1], f[i-2] + (v[i]*i) );
	}
	
	cout<<f[b]<<endl;
	
	return 0;
}
