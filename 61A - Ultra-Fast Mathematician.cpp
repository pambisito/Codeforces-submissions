#include <bits/stdc++.h>
using namespace std;

int main(){
	char s1[200]; cin.getline( s1, 200, '\n' );
	char s2[200]; cin.getline( s2, 200, '\n' );
	char s3[200];
	
	for( int i = 0 ; i < strlen(s1) ; i++ ) {
		if( s1[i] != s2[i] ) { s3[i] = '1'; }
		else{ s3[i] = '0'; }
	}
	
	for( int i = 0 ; i < strlen(s1) ; i++ ) { cout<<s3[i]; }
	
	return 0;
}
