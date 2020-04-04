#include <stdio.h>

//bool(boolean) veritipi: true ya da false.

int main( void )
{
	int note;
	printf( "Enter your note:" );
	scanf( "%d", &note );
	
	if( note > 60 )
	{
		printf( "You passed the lesson." );
	}
	else{
		printf( "Sorry! You couldn't pass the lesson.");
	}
	
	
	
	return 0;
}
