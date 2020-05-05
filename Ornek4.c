//Kullanici tarafindan girilen kelimenin, karakter dizisindeki sayisini bulan program
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maksimum string uzunlugu.

// Fonksiyon tanimlama 
int countOccurrences(char * str, char * toSearch);

int main()
{
    char str[] = "A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster. Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were built to automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century.";
    char toSearch[MAX_SIZE];
    int count;
	
	printf("%s\n\n",str);

    // Kullanici tarafindan girilecek kelime
 
    printf("Tekrar etme sayisini istediginiz kelimeyi girin: ");
    gets(toSearch);

    count = countOccurrences(str, toSearch);

    printf("'%s' kelimesinin sayisi: %d", toSearch, count);

    return 0;
}


 //Dizideki bir kelimenin toplam tekrar etme sayisi
 
int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // Dizi uzunlugu
    searchLen = strlen(toSearch); // Aranacak kelimenin uzunluðu

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        // Kelimeyi dizeyle eslestirme 
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }

    return count;
}
