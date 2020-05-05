//Verilen dizideki elemanlarin ortalamasini, standart sapmasini, varyansini ve medyanini bulan program
hesaplanmasý
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 18


int main()
{
    double doubleArray [] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,11.1,22.2,33.3,44.4,55.5,66.6,77.7,88.8,99.9};
    int  i, n, size;
    float average, variance, std_deviation, med, sum = 0, sum1 = 0;
	
	//Dizi uzunlugu
	size = (sizeof doubleArray / sizeof *doubleArray);
	
    for (i = 0; i < 18 ;  i++)
    {
        printf("%.2f\n", doubleArray[i]);
    }
    //  Elemanlarin toplamini hesaplama. 
    for (i = 0; i < 18; i++)
    {
        sum = sum + doubleArray[i];
    }
    average = sum / (float)n;
    //  Varyans ve standart sapma hesaplama. 
    for (i = 0; i < 18; i++)
    {
        sum1 = sum1 + pow((doubleArray[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    
   
   
   printf("\n\n");
	
	//Medyan hesaplama.
	if( size % 2 == 0){
		med = (doubleArray[size/2] +  (doubleArray[size/2] + 1))/2;
	}else{
		med = doubleArray[size/2];
	}

    printf("Sayilarin aritmetik ortalamasi = %.2f\n", average/size);
    printf("Sayilarin varyansi = %.2f\n", variance);
    printf("Standart sapma = %.2f\n", std_deviation);
     printf("Medyan = %.2f\n", med);
    return 0;
}

	
