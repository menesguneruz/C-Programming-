//Fibonacci serisinin, kullanici tarafindan istenen elemaninin degerini bulan program
#include <stdio.h> 

//Fibonacci serisi fonksiyonu.
int fib(int n) 
{ 
    
	count();
	
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 

//Kac fib fonksiyonu dondugunu sayma.
int count() 
{ 
   static int counter = 0; 
		counter++; 
	return counter; 
}
  
int main() 
{ 
    int n,k; 
    printf("Fibonacci serisinin kacinci elemaninin hesaplanacagini giriniz:" );
    scanf("%d", &n );
    
    printf("\nSerinin %d'nci elemaninin degeri:%d\n", n, fib(n)); 
    getchar(); 
    
    printf( "Serinin %d'nci elemaninin hesaplanmasi icin fonksiyon cagirilma sayisi:%d",n,count());
    return 0; 
} 


