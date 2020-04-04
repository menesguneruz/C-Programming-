#include <stdio.h>

int main( void )
{ 
	/*
	
	Tip Dönüþümleri:
	Otomatik Dönüþümler;
	Örneðin bir aritmetik ifadede bütün tipler ayný deðil. Mesela 3.2 / 2 iþleminin sonucu 1.6(float) olacaktýr.Çünkü otomatik bir dönüþüm yapýlýyor.
	(2 sayýsý floata çevrilip 2.0 oluyor.)
	
	Otomatik Dönüþüm Çizelgesi:
	Char
	short ------> int ------> float --------> double --------> long 
	                                                           Double
															   
	Mesela int ve double beraberse herkes double'a otomatik olarak çevrilir.(Saða doðru öncelik artýyor.)														   	
	
	Manuel Dönüþümler:
	Otomatik dönüþümlerin olmadýðý yerlerde kendimiz dönüþüm yapabiliriz.
	
	3.2 sayýsýný int yapmak istersek -----> (int)3.2 ----> 3 sonucunu verir.
	*/
	int x = 3;
	float y = 0.1;
	printf( "%.1f\n",x / y );
	
	printf( "%.2f\n", 2 * 4.2 );
	printf( "%.2f\n", 12.5 / 2 );
	printf( "%d\n", (int)3.2 );
	printf( "%f\n", (float)5 );
}
