//Deðiþkenler ve Format Belirliyecileri
#include<stdio.h>
 int main(void)
 {
 	
 	// "//" ifadesi tekli yorum satýrýdýr.
 	
 	/*
 	
 	    Çoklu yorum satýrý.
 	    
 	*/
	 
	/*
	Deðiþkenler:
	Temel deðiþkenlerimiz char, int, float, double, short, long.
	
	char veritipi -1 byte (8 bit) 0dan 255(2^8)e kadar deðer alabilir. Her bir deðerin ASCII tablosunda bir karþýlýðý vardýr.
	int veritipi -4byte (32 bit) -2^16dan 2^16ya kadar deðer alýr. 2, 32, 45 gibi deðerler int deðerleridir.(tam sayý)
	short veritipi (short int) -2 byte(16 bit) -2^8den 2^8e kadar deðer alýr. int ile aynýdýr.Sadece alacaðý deðer aralýðý farklýdýr.
	long veritipi (long int) -8byte(64 bit) -2^32den 2^32ye kadar deðer alýr. int ile aynýdýr. Sadece alacaðý deðer aralýðý farklýdýr.
		Çok büyük deðerler alabilir. 231413132132 gibi...
	float veritipi kesirli sayýlarý tutmak için kullanýlýr. Byte'ý iþletim sistemine göre deðiþebilir. 2.4 gibi sayýlar...
	double veritipi ayný float gibi kesirli sayýlar için kullanýlýr. Ancak floattan daha kapsamlýdýr. Byte'ý iþletim sistemine göre deðiþebilir
		2.12343213213 gibi sayýlar...
	
	Ancak programcýlar genelde sadece char,int, float ve double kullanýrlar.
	*/
	
	/*
	Deðiþken tanýmlama:
	veritipi degiskenadi;
	*/
	/*
	
	Format belirleyiciler:
	 %d (d decimal demek.) -----------> int deðerler için printf'te format belirleyici olarak kullanýlýr.
	 Örnek:
	 int x = 5; 
	 printf("%d",x); -------> ekrana 5 deðerini basar.
	 
	 %f ---------> float ve double için format belirleyici olaraj kullanýlýr.
	 float f = 3.1;
	 double d = 4.21; 
	 printf("%f %f",f,d); --------> Ekrana 3.1 ve 4.21 deðerlerini basar, deðiþkenleri verme sýrasýna göre.
	 
	 %c ------------> karakterler için kullanýlýr.
	 Örnek:
	 char c1 = 'c'; 
	 printf("%c",c1); ----------> ekrana c basar.
	 printf("%d,c1); -----------> ekrana c'nin ASCII tablosundaki c'nin deðerini basar.
	 
	 %s -------------> Karakter dizileri için kullanýlýr. ("Cprogramlama")
	 
	printf("%s","Cprogramlama"); ---------------> Ekrana Cprogramlama basar.
	
	%.1f-----------> Ondalýk sayýnýn noktadan sonraki 1 deðerini alýr.(Örneðin 4.20000 deðil 4.2 olur.)
	%10d ----------> Ýfadenin önüne 10 boþluk karakteri koyar.	
	*/
	
	 
	
	      
 }
