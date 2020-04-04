#include <stdio.h>

/*
  Bool veritipi:(true or false)
   
  Mant�ksal ifadeler do�ru ise true	
  Mant�ksal ifadeler yanl�� ise false
  Ayn� zamanda b�t�n 0 olmayan say�lar true de�er say�l�r.
  0 ise false de�er al�r.
  
  Mant�ksal Operat�rler:
  < ----> k���k m�d�r
  > ----> b�y�k m�d�r
  <= ----> k���k e�it midir
  >= ----> b�y�k e�it midir
  == ----> e�it midir
  != -----> e�it de�il midir
  
  Mant�ksal Ba�la�lar:
  Bir �ok mant�ksal ifadeyi ve i�lemi ba�layan ara�lard�r.
  
  && --------> AND (Ve) ba�lac�: && oldu�u ifadenin true olmas� i�in t�m ifadelerin true olmas� gerekir. Bir tane bile
  false varsa ifade false olur.
  
  || --------> OR ( veya ) ba�lac�: || oldu�u ifadenin true olmas� i�in en az bir tane true ifade olmas� yeterlidir. T�m ifadeler
  false ise , ifade false olur.
  
  ! ---------> NOT (De�il) ba�lac�: True ifadeyi false, false ifadeyi true yapar.
  
  �artl� C�mleler: 
  
  a = x > y ? x: y;
  
  */
  
  int main( void )
  {
  	int a, b = 20, c = 30;
  	
  	a = b < c ? b : c;
  	printf( "%d", a );
  	
  	
  	return 0;
  }
