#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

 main() {

setlocale(LC_ALL,"Turkish");

srand(time(NULL));  // �retilen say�n�n rastgele de�erlerde olmas�n� sa�lar
int sayi = rand() % 100; // 1 ile 100 aras�nda bir say� �retmeyi sa�layan kod

int tahmin;
int denemeHakki = 1;
bool bulundu = false;


while(bulundu==false){
	printf("Tahmin giriniz: \n");
	scanf("%d", &tahmin);
	
	if(tahmin==sayi){
		printf("Tebrikler... %d denemede buldunuz \n", denemeHakki);
		bulundu=true;
	}
	else if(tahmin<sayi){
		printf("Daha b�y�k bir say� giriniz... \n");
		denemeHakki++;
	}
	else{
		printf("Daha k���k bir say� giriniz... \n");
		denemeHakki++;
	}
	}
		
}


