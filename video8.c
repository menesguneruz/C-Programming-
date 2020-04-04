/*
//A program calculating average of entered numbers.
#include <stdio.h>

int main( void )
{
	int a, b, c, d, e;
	float average;
	
	printf( "Enter 5 number:" );
	scanf( "%d %d %d %d %d", &a, &b, &c, &d, &e );
	
	average = (a + b + c + d + e ) / 5.0;
	
	printf( "The average of numbers is %.2f", average );
	
	
	
	return 0;
}
*/

//ax^2 + bx + c þeklindeki denklemin kökleri.
#include <stdio.h>
#include <math.h>

int main( void )
{
	int a, b, c; 
	float delta;
	float x1, x2;
	
	printf( "Denklemin a'sini giriniz:" );
	scanf( "%d", &a);
	printf( "Denklemin b'sini giriniz:" );
	scanf( "%d", &b);
	printf( "Denklemin c'sini giriniz:" );
	scanf( "%d", &c);
	
	delta = (b * b ) - (4 * a * c );
	x1 = ((-b) + (sqrt(delta)) ) / (2 * a );
	x2 = ((-b) - (sqrt(delta)) ) / (2 * a );
	
	printf( "Denklemin birinci koku %.2f , ikinci koku %.2f 'dir.", x1, x2 );
	
	return 0;
}
