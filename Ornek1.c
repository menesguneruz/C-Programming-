//Karakter dizisindeki sesli, sessiz harf ve bosluk karakteri sayisini bulan program
#include <stdio.h>
int main() {
	//Karakter dizisinde en fazla 100 karakter olabilir.
    char characterArray[100];
    int sesli, sessiz, bosluk, i = 0;

    sesli = sessiz = bosluk = 0;

    printf("Bir karakter dizisi girin: ");
    fgets(characterArray, sizeof(characterArray), stdin);


	/*Sesli harf sayisi daha az oldugundan, girilen karakterlerin bir
	sesli harfe esit olup olmadiginin kontrolu.
	*/
    for (; characterArray[i] != '\0'; ++i) {
        if (characterArray[i] == 'a' || characterArray[i] == 'e' || characterArray[i] == 'i' ||
            characterArray[i] == 'o' || characterArray[i] == 'u' || characterArray[i] == 'A' ||
            characterArray[i] == 'E' || characterArray[i] == 'I' || characterArray[i] == 'O' ||
            characterArray[i] == 'U') {
            ++sesli;
        //Diger harfleri iceren durumlar
        } else if ((characterArray[i] >= 'a' && characterArray[i] <= 'z') || (characterArray[i] >= 'A' && characterArray[i] <= 'Z')) {
            ++sessiz;
        //Bosluk karakteri sayisi
        } else if (characterArray[i] == ' ') {
            ++bosluk;
        }
    }

	//Sayilan sesli, sessiz harf ve bosluk karakterleri sayisinin ekrana yazdirilmasi.
    printf("Sesli harf sayisi: %d", sesli);
    printf("\nSessiz harf sayisi: %d", sessiz);
    printf("\nBosluk sayisi: %d", bosluk);
    return 0;
}
