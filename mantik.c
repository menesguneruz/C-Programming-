#include <stdio.h>

/*
  Bool veritipi:(true or false)
   
  Mantýksal ifadeler doðru ise true	
  Mantýksal ifadeler yanlýþ ise false
  Ayný zamanda bütün 0 olmayan sayýlar true deðer sayýlýr.
  0 ise false deðer alýr.
  
  Mantýksal Operatörler:
  < ----> küçük müdür
  > ----> büyük müdür
  <= ----> küçük eþit midir
  >= ----> büyük eþit midir
  == ----> eþit midir
  != -----> eþit deðil midir
  
  Mantýksal Baðlaçlar:
  Bir çok mantýksal ifadeyi ve iþlemi baðlayan araçlardýr.
  
  && --------> AND (Ve) baðlacý: && olduðu ifadenin true olmasý için tüm ifadelerin true olmasý gerekir. Bir tane bile
  false varsa ifade false olur.
  
  || --------> OR ( veya ) baðlacý: || olduðu ifadenin true olmasý için en az bir tane true ifade olmasý yeterlidir. Tüm ifadeler
  false ise , ifade false olur.
  
  ! ---------> NOT (Deðil) baðlacý: True ifadeyi false, false ifadeyi true yapar.
  
  Þartlý Cümleler: 
  
  a = x > y ? x: y;
  
  */
  
  int main( void )
  {
  	int a, b = 20, c = 30;
  	
  	a = b < c ? b : c;
  	printf( "%d", a );
  	
  	
  	return 0;
  }
