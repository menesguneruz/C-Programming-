#include <stdio.h>

int main( void )
{ 
	/*
	
	Tip D�n���mleri:
	Otomatik D�n���mler;
	�rne�in bir aritmetik ifadede b�t�n tipler ayn� de�il. Mesela 3.2 / 2 i�leminin sonucu 1.6(float) olacakt�r.��nk� otomatik bir d�n���m yap�l�yor.
	(2 say�s� floata �evrilip 2.0 oluyor.)
	
	Otomatik D�n���m �izelgesi:
	Char
	short ------> int ------> float --------> double --------> long 
	                                                           Double
															   
	Mesela int ve double beraberse herkes double'a otomatik olarak �evrilir.(Sa�a do�ru �ncelik art�yor.)														   	
	
	Manuel D�n���mler:
	Otomatik d�n���mlerin olmad��� yerlerde kendimiz d�n���m yapabiliriz.
	
	3.2 say�s�n� int yapmak istersek -----> (int)3.2 ----> 3 sonucunu verir.
	*/
	int x = 3;
	float y = 0.1;
	printf( "%.1f\n",x / y );
	
	printf( "%.2f\n", 2 * 4.2 );
	printf( "%.2f\n", 12.5 / 2 );
	printf( "%d\n", (int)3.2 );
	printf( "%f\n", (float)5 );
}
