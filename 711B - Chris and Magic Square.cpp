#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; cin>>N;
	
	if( N == 1 ) {
		int x; cin>>x;
		cout<<"1"<<endl; return 0;
	}
	
	int square[N][N];
	
	float c1 = ( N - 1 ) / 2;
	float c2 = ( N - 1 ) / 2;
	
	
	set<long long> sumh;
	set<long long>::iterator it;
	set<long long> sumv;
	long long dp = 0; long long ds = 0;
	
	long long hprima[N];
	long long vprima[N];
	
	int i_prima = 0;
	int j_prima = 0;
	
	for( int i = 0 ; i < N ; i++ ) {
		long long h = 0;
		for( int j = 0 ; j < N ; j++ ) {
			cin>>square[i][j];
			h += square[i][j];

			if( square[i][j] == 0 ) { i_prima = i; j_prima = j; }
			
		}
		sumh.insert(h);
		hprima[i] = h;
	}
	
	sort( hprima, hprima + N );
	
	for( int j = 0 ; j < N ; j++ ) {
		long long v = 0;
		for( int i = 0 ; i < N ; i++ ) { v += square[i][j]; }
		sumv.insert(v);
		vprima[j] = v;
	}
	
	sort( vprima, vprima + N );
	
	int L = 0;
	for( int i = 0 ; i < N ; i++ ) {
		dp += square[i][i]; 
		ds += square[N-i-1][i]; 
		
		if( square[i][i] == 0 ) { L = 1; }
		else if( square[N-i-1][i] == 0 ){ L = 1; }
	}

	
	if( sumh.size() == 2 && sumv.size() == 2 && sumh == sumv && hprima[0] != hprima[1] && vprima[0] != vprima[1] ) {
		long long ans[2];
		int k = 0;
		for( it = sumh.begin() ; it != sumh.end() ; ++it ) { ans[k]=*it; k++; }
		
		if( dp == ds && ds == ans[0] && i_prima == c1 && j_prima == c2 ) {
			cout<< abs( ans[1] - ans[0] ) <<endl;
			return 0;
		}
		else if( dp == ds && ds == ans[1] ) {
			cout<< abs( ans[1] - ans[0] ) <<endl;
			return 0;
		}
		
		else if( N % 2 != 0 ) {
			if(  dp == ans[0] && ds == ans[1] && L == 1 && i_prima != c1 && j_prima != c2 ) {
				cout<< abs( ans[1] - ans[0] ) <<endl;
				return 0;
			}	
			else if( dp == ans[1] && ds == ans[0] && L == 1 && i_prima != c1 && j_prima != c2 ) {
				cout<< abs( ans[1] - ans[0] ) <<endl;
				return 0;
			}
			else{ cout<<"-1"<<endl; return 0; }	
		}
		
		else if( N % 2 == 0 ) {
			if( ( dp == ans[0]  && ds == ans[1] ) ||  ( dp == ans[1]  && ds == ans[0] ) ) {
				cout<< abs( ans[1] - ans[0] ) <<endl;
				return 0;
			}
			else{ cout<<"-1"<<endl; return 0; }	
		}

		else{ cout<<"-1"<<endl; return 0; }
		
	}
	else{ cout<<"-1"<<endl; return 0; }
	
	return 0;
}
