#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>

//�DEV-3 10 SAYI ALAN TEKRARLANAN SAYILARI 1 DEFA G�STEREN PROGRAM 

bool varMi;

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int	dizi[10];
	int	i;
	
	//diziye 10 adet eleman al�yoruz
	for(i=0;i<10;i++){
		printf("%d. indisi giriniz:",i);
		scanf("%d",&dizi[i]);
	}
	
	printf("\n\nGirdi�iniz dizi: (ayn� karakter birden fazla girildiyse bir defa yaz�ld�.) \n\n");
	for(i = 0; i < 10; i++){
		int j;
		varMi = false; //bool de�eri false olarak atad�m ba�lang��ta
		if(i!=0){ //0 dan ba�layamaz a�a��da j=i-1; var o y�zden i 0 de�ilse diye bak�yoruz.		
			for(j = i - 1; j >= 0; j--){ //j b�y�kten ba�lay�p, azalarak gidecek.		
				if(dizi[i] == dizi[j]){ //0 dan 10'a kadar i�inde gezecek ve e�er dizi[] dizisinde ki de�erler ayn� ise
					varMi = true; //bool de�erini true yap�yorum, burada ayn� olan t�m de�erleri kaydediyor.
				}
			}
		}	
		if(varMi == false){ //ayn� olan de�erler true olarak kaydedildi, geri kalanlar (ayn�s� olmayanlar) false da kald�
			printf("%d ",dizi[i]); //t�m false'da kalanlar� yazd�r�yoruz. for i�inde bu da dikkat et	
		}
	}

	return 0;
}




















