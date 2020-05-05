#include <stdio.h>

/* Us fonksiyonu */
int pow(int x, int us);


int main()
{
    int power,x,us;
    
    //Islemin formulu
    printf("f(x,y) = x^y\n");
    //x ve y degerlerinin  kullanici tarafindan girilmesi
    printf("x degerini giriniz:");
    scanf("%d", &x);
    printf("y degerini giriniz:");
    scanf("%d", &us);
    
    // pow fonksiyonunun cagirilmasi
    power = pow(x, us); 
    
    printf("%d ^ %d = %d", x, us, power);
    
    return 0;
}


/**
 * Sayinin ussunun hesaplanmasi.
 * x ^ y islemini doner.
 */
int pow(int x, int us)
{
   
    if(us == 0)
        return 1;
    else if(us > 0)
        return x * pow(x, us - 1);
    else
        return 1 / pow(x, -us);
}
