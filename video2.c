//De�i�kenler ve Format Belirliyecileri
#include<stdio.h>
 int main(void)
 {
 	
 	// "//" ifadesi tekli yorum sat�r�d�r.
 	
 	/*
 	
 	    �oklu yorum sat�r�.
 	    
 	*/
	 
	/*
	De�i�kenler:
	Temel de�i�kenlerimiz char, int, float, double, short, long.
	
	char veritipi -1 byte (8 bit) 0dan 255(2^8)e kadar de�er alabilir. Her bir de�erin ASCII tablosunda bir kar��l��� vard�r.
	int veritipi -4byte (32 bit) -2^16dan 2^16ya kadar de�er al�r. 2, 32, 45 gibi de�erler int de�erleridir.(tam say�)
	short veritipi (short int) -2 byte(16 bit) -2^8den 2^8e kadar de�er al�r. int ile ayn�d�r.Sadece alaca�� de�er aral��� farkl�d�r.
	long veritipi (long int) -8byte(64 bit) -2^32den 2^32ye kadar de�er al�r. int ile ayn�d�r. Sadece alaca�� de�er aral��� farkl�d�r.
		�ok b�y�k de�erler alabilir. 231413132132 gibi...
	float veritipi kesirli say�lar� tutmak i�in kullan�l�r. Byte'� i�letim sistemine g�re de�i�ebilir. 2.4 gibi say�lar...
	double veritipi ayn� float gibi kesirli say�lar i�in kullan�l�r. Ancak floattan daha kapsaml�d�r. Byte'� i�letim sistemine g�re de�i�ebilir
		2.12343213213 gibi say�lar...
	
	Ancak programc�lar genelde sadece char,int, float ve double kullan�rlar.
	*/
	
	/*
	De�i�ken tan�mlama:
	veritipi degiskenadi;
	*/
	/*
	
	Format belirleyiciler:
	 %d (d decimal demek.) -----------> int de�erler i�in printf'te format belirleyici olarak kullan�l�r.
	 �rnek:
	 int x = 5; 
	 printf("%d",x); -------> ekrana 5 de�erini basar.
	 
	 %f ---------> float ve double i�in format belirleyici olaraj kullan�l�r.
	 float f = 3.1;
	 double d = 4.21; 
	 printf("%f %f",f,d); --------> Ekrana 3.1 ve 4.21 de�erlerini basar, de�i�kenleri verme s�ras�na g�re.
	 
	 %c ------------> karakterler i�in kullan�l�r.
	 �rnek:
	 char c1 = 'c'; 
	 printf("%c",c1); ----------> ekrana c basar.
	 printf("%d,c1); -----------> ekrana c'nin ASCII tablosundaki c'nin de�erini basar.
	 
	 %s -------------> Karakter dizileri i�in kullan�l�r. ("Cprogramlama")
	 
	printf("%s","Cprogramlama"); ---------------> Ekrana Cprogramlama basar.
	
	%.1f-----------> Ondal�k say�n�n noktadan sonraki 1 de�erini al�r.(�rne�in 4.20000 de�il 4.2 olur.)
	%10d ----------> �fadenin �n�ne 10 bo�luk karakteri koyar.	
	*/
	
	 
	
	      
 }
