/*
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
	
	/*
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
	*/
	
	
	/*
	do-while döngüsü:
	Koþulu, iþlemlerden sonra kontrol ederiz!
	Çok tercih edilmez.
	do {
	
		islemler
	
	
	
    }
    while(kosul); 
	
	
	int n = 10;
	
	do {
		printf( "%d\n", n );
		
		n--;
	}
	while( n > 0 );
	*/
	
	
	/*
	int n, hane = 0, toplam = 0;
	
	printf( "Sayiyi giriniz:" );
	scanf( "%d", n );
	
	do {
		toplam += ( n % 10 );
		
		hane++;
		
		n = n / 10;
		
	}
	while( n > 0 );
	
	printf( "Rakamlari toplamý %d ve %d hanelidir.", toplam, hane );
	*/
	 
	 /*
	 FOR Döngüsü:
	 
	 int i;
	 
	 for( i = 0 ; i < 10 ; i++ ) {
	 
	 	printf( "%d\n", i );
	 	
     }
	*/
	
	/*
	int i,j;
	
	
	for( i = 0, j = 1 ; i < 10 || j < 5 ; i++ , j++ ){
		
		printf( "i: %d j: %d\n", i, j );
	}
	
	
	for( i = 0 ; i < 4 ; i++ ){
		
		for( j = 0 ; j < 3 ; j++ ){
			
			printf( "i: %d j: %d\n", i, j );
		}
		
	}
	
	return 0;
}
*/


/*
//Fibonacci serisi

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int first_number = 1;
	int second_number = 1;
	int i;
	
	printf( "%d\n%d\n", first_number, second_number );
	
	for( i = 0 ; i < 11 ; i++){
		int t;
		
		t = second_number;
		
		second_number += first_number;
		
		first_number = t;
		
		printf( "%d\n", second_number );
		
	}
	
	
	
	
	
	
	
	return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>

int main( void )
{
	int i;
	
	for( i = 100 ; i >= 50 ; i-- ){
		
		if( i % 3 == 0 ){
			printf( "%d\n", i );
		}
	}
	getch();
	
	
	return 0;
}
*/


/*
//break deyimi ornek.
#include <stdio.h>

int main( void )
{
	int toplam = 0;
	int i;
	int sayi;
	
	for( i = 0 ; i >= 0 ;i++ ){
		printf( "Sayiyi giriniz(Cikmak icin -1 e basin):" );
		scanf( "%d", &sayi );
		
		if( sayi == -1 ){
			break;
		}
		toplam += sayi;
	}
	printf( "%d", toplam );
	
	
	
	
	
	
	return 0;
}
*/

 #include <stdio.h>
 
 int main( void )
 {
 
 //continue deyimi:
 //-----> döngüde continue dan sonraki kýsým uygulanmaz, döngünün baþýna döner.
 /*
 
 	
 	int toplam = 0;
 	int i;
 	
 	for( i = 1 ; i <= 10 ; i++ ){
 		
 		if( i % 2 == 1 ){
 			continue;
		 
		}
		toplam += i;
	 }
 	printf( "%d", toplam );
 	*/
 
 	int toplam = 0;
 	int i = 0 ;
 	
 	while( i <= 10 ){
 		
 		if( i % 2 == 1 ){
 			i++;
		 	continue;
		 
		}
		toplam += i;
		i++;
		
	 }
 	printf( "%d", toplam );
 	
 	
 	return 0;
 }
