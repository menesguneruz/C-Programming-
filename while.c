#include <stdio.h>

int main( void )
{
	/*
	int counter = 1;
	while ( counter <= 10 ){
		printf( "%d - Hello.\n", counter );
		counter += 1;
	}
	printf( "%d - Dongu bitti.", counter );
	*/
	
	int n;
	int faktoriyel = 1;
	printf( "Faktoriyelini istediginiz sayiyi girin:" );
	scanf( "%d", &n );
	
	while( n != 0 ){
		printf( "%d\n", n );
		faktoriyel = faktoriyel * n;
		
		n -= 1;
		 
	}
	printf( "Faktoriyel:%d", faktoriyel );
	
	return 0;
}
