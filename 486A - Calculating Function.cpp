#include<bits/stdc++.h>

using namespace std;

int main(){
	long long x;
	cin>>x;
	
	if( x % 2 == 0 ) { x/=2; cout<<x; }
	else{ x = ( ( x + 1 ) / 2 ) * (-1); cout<<x; }
	
	return 0;
}
