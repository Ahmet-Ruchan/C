#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>




// TOP ZIPLAMA �DEV�


main() {
setlocale(LC_ALL,"Turkish");

int ziplamasayisi=0;
int dongu=0;
double katsayi;

double B =0.7;
double F =0.75;
double V =0.9;

float yukseklik;
double alinanyol;	
	
	
	
char topturu; 
		
		
		
printf("Top t�r�n� giriniz (B,F,V) : \n");
scanf("%c",&topturu);
		



while(dongu != 1){
	if('B'== topturu){
		printf("Basketbol topunu se�tiniz.\n");
		katsayi = B;
		dongu=1;		
	}
	else if('F'== topturu){
		printf("Voleybol topunu se�tiniz. \n");
		katsayi =F;
		dongu=1;
	}
	else if('V'==topturu){
		printf("Voleybol topunu se�tiniz. \n");
		katsayi= V;
		dongu=1;
	}
	else{
		printf("L�tfen sadece parantez i�erisindeki karakterlerden birini se�iniz \n");
		scanf("%s",&topturu);
	}
}



printf("Topun b�rak�laca�� ilk y�ksekli�i giriniz (m): \n");
scanf("%f",&yukseklik);



if(topturu=='V'){
	for(yukseklik ; 0.1<=yukseklik; yukseklik= yukseklik*0.9){
		ziplamasayisi++;
		alinanyol= alinanyol + yukseklik*1.9;
	}
}
else if(topturu=='B'){
	for(yukseklik ; 0.1<=yukseklik; yukseklik= yukseklik*0.7){
		ziplamasayisi++;
		alinanyol = alinanyol + yukseklik*1.70;
	}
}
else if(topturu=='F'){
	for(yukseklik ; 0.1<=yukseklik; yukseklik= yukseklik*0.75){
		ziplamasayisi++;
		alinanyol = alinanyol + yukseklik*1.75;
	}
	
}

printf("Al�nan yol: %2.2f metre \n",alinanyol);
printf("Topun z�plama say�s�: %d \n",ziplamasayisi);


}
