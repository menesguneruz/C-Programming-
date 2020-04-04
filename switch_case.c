#include <stdio.h>

int main( void )
{
	/*
	switch( operatin ) {
	
	
		case:
			islemler
			break;
			
		
		case:
		
		
		case:	
		
	}
	*/
	
	
	int islem;
	int bakiye = 1000;
	int tutar;
		
	printf( "Islemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n" );
	
	printf( "Islemi seciniz:" );
	scanf( "%d", &islem );
	
	switch( islem ) {
		case 1:
			printf( "Bakiyeniz:%d\n", bakiye );
			printf( "Cekilecek tutar:%d", tutar);
			scanf( "%d", &tutar );
			if( tutar > bakiye )
			{
				printf( "Bakiye yetersiz.\n");
			}
			bakiye = bakiye - tutar;
			printf( "Bakiyeniz:%d\n", bakiye );
			break;
		case 2:
			printf( "Bakiyeniz:%d\n", bakiye );
			printf( "Yatirilacak tutar:%d", tutar);
			scanf( "%d", &tutar );
			
			bakiye = bakiye + tutar;
			printf( "Bakiyeniz:%d\n", bakiye );
			break;
		case 3:
			printf( "Bakiyeniz:%d\n", bakiye );
			printf( "Havale yapilacak tutar:%d", tutar);
			scanf( "%d", &tutar );
			if( tutar > bakiye )
			{
				printf( "Bakiye yetersiz.\n");
			}
			bakiye = bakiye - tutar;
			printf( "Bakiyeniz:%d\n", bakiye );
			break;
			
		case 4:
			printf( "Bakiyeniz:%d\n", bakiye );
			break;
		case 5:
			printf( "Kart iade edildi." );
			break;
		default:
			printf( "Bilinmeyen islem!");
			break;
	}	
	return 0;
}
