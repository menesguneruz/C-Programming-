#include <stdio.h>

int main( void )
{
	int vize1, vize2, final;
	float average;
	
	printf( "Enter your first vize note:" );
	scanf( "%d", &vize1);
	printf( "Enter your second vize note:" );
	scanf( "%d", &vize2);
	printf( "Enter your final note:" );
	scanf( "%d", &final);
	
	average = ( vize1 + vize2 + final) / 3.0;
	if( average > 60 )
	{
		printf( "You passed the lesson." );
	}
	else if( average > 50 )
	{
		printf( "You will take a condition exam." );
	}
	else{
		printf( "You couldn't pass the lesson." );
	}
	
	
	return 0;
}
