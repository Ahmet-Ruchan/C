#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//�DEV-4 N ki�ilik bir s�n�f�n herhangi bir dersten y�lsonu notlar� girilmektedir. Buna g�re s�n�f ortalamas�n�n alt�nda kalanlara �kald��, di�erlerine da �ge�ti� yazan C program

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int	n;
	int	i;
	float	toplam = 0;
	float	ortalama;
	
	printf("Notu girilecek ��renci say�s�n� giriniz: \n");
	scanf("%d",&n);
	
	int	sinif[n];
	
	for(i=0;i<n;i++){
		printf("%d. ��rencinin notunu giriniz:",i+1);
		scanf("%d",&sinif[i]);
		toplam += sinif[i];
	}
	
	ortalama = toplam / n;
	printf("\nS�n�f ders notu ortalamas�: %2.2f \n\n",ortalama);
	
	for(i=0;i<n;i++){
		if(sinif[i] < ortalama){
			printf("%d. ��renci dersten kald� \n",i+1);
		}
		else{
			printf("%d. ��renci dersten ge�ti \n",i+1);
		}
	}
	
	return 0;
}
