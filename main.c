#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <dos.h>
#include<conio.h>


int dongu=0;
char komut1[];
char komut2[];
char komut3[];
char komut4[];
bool anahtar = false;




 main() {
 	setlocale(LC_ALL,"Turkish");
 	
 	baslangic();
	

	
	
	
	
}

baslangic(){
	
	system("COLOR 07");
	printf("Do�u y�n�nde b�y�k bir �atonun �n�ndesin. ��eri girmen gerekiyor yoksa pe�indekiler seni yakalayacaklar.\n");
	gets(komut1);
	
	while(dongu != 1){
		if(!(strcmp(komut1, "DOGU"))){ 
			oda1();
			dongu = 1;
		}
		else{
			printf("Ge�ersiz Komut \n");
			gets(komut1);	
		}
		
	}
	
}

oda1(){
	system("CLS");
	system("COLOR 4F");
	printf("Sonunda i�eridesin. Yemek masas� �zerinden bir �eyler yiyebilirsin. \n");
	gets(komut2);
	
	while(dongu != 1){
		if(!(strcmp(komut2, "DOGU"))){
			oda6();
			dongu=1;
		}
		else if(!(strcmp(komut2, "BATI"))){ 
			baslangic();
			dongu=1;
		}
		else if(!(strcmp(komut2, "KUZEY"))){ 
			oda2();
			dongu=1;
		}
		else if(!(strcmp(komut2, "GUNEY"))){ 
			oda3();
			dongu=1;
		}
		else if(!(strcmp(komut2, "YEMEK YE"))){
			printf("Karn�n� doldurdun ama bizi bekleyen bir prenses var yola devam. �imdi ne yapacaks�n? \n");
			
			gets(komut2);
		}
		else{
			printf("Ge�ersiz Komut \n");
			gets(komut2);	
		}
	}
	
}

oda2(){
	system("CLS");
	system("COLOR FD");
	printf("Khaleesi�nin Dracarys sesini duymanla beraber ejderha ate�i alt�nda yanarak �ld�n� \n >>> L�tfen bekle, �ld���n i�in 7 saniye i�erisinde ba�a d�neceksin <<< \n");
	sleep(7);
	system("CLS");
	
	baslangic();
	
}

oda3(){
	system("CLS");
	system("COLOR B0");
	printf("K���k bir odadas�n. Ortada bir yatak var. Yorgunsan dinlenebilirsin.\n");
	gets(komut3);
	
	while(dongu != 1){
		if(!(strcmp(komut3, "DOGU"))){ 
			oda5();
			dongu=1;
		}
		else if(!(strcmp(komut3, "GUNEY"))){ 
			oda4();
			dongu=1;
		}
		else if(!(strcmp(komut3, "KUZEY"))){ 
			oda1();
			dongu=1;
		}
		else if(!(strcmp(komut3, "DINLEN"))){ 
			printf("Yeterince dinlendin, i�e koyul ve prensesi kurtar. �imdi ne yapacaks�n ?\n");
			
			gets(komut3);
		}
		else{
			printf("Ge�ersiz Komut \n");
			gets(komut3);	
		}
	}
	
	
}

oda4(){
	system("CLS");
	system("COLOR F2");
	printf("T�ssss.... Bir piton y�lan� taraf�ndan s�k�larak �ld�r�ld�n� Bo�ulurken ke�ke C yerine Python mu ��renseydim diye kafandan ge�irdin...\n >>> L�tfen bekle, �ld���n i�in 10 saniye i�erisinde ba�a d�neceksin <<<\n");
	sleep(10);
	system("CLS");
	
	baslangic();
	
}

oda5(){
	system("CLS");
	system("COLOR 60");
	printf("�ok karanl�k bir odadas�n. Sadece parlayan alt�n bir anahtar var.\n");
	gets(komut4);
	
	while(dongu != 1){
		if(!(strcmp(komut4, "BATI"))){ 
			oda3();
			dongu=1;
		}
		else if(!(strcmp(komut4, "ANAHTAR AL"))){ 
			printf("Anahtar� ald�n �imdi prensesin odas�na gitme vakti. �imdi ne yapacaks�n? \n");
			anahtar = true;
			gets(komut4);
			
		}
		else{
			printf("Ge�ersiz Komut \n");
			gets(komut4);
		}
   }
}
 

oda6(){
	system("CLS");
	system("COLOR F5");
	printf("Bilgisayar taraf�ndan y�netilen odadas�n. 0 ile 9 aras�nda bir say� tutmu�. �� denemede bulmal�s�n.\n\n");
	
	int tahmin;
	int tahminsayisi;
	int sayi = rand() % 10;
	srand(time(NULL)); 
	
	
	for(tahminsayisi = 3; tahminsayisi >0; tahminsayisi--){
		printf("Tahmininizi giriniz");
		scanf("%d",&tahmin);
		
		if((anahtar == false) && (tahmin == sayi)){
			printf("Do�ru say�y� buldun ancak kilitli kap�y� a�acak anahtar yan�nda de�il� odaya zehirli bir gaz dolmaya ba�lad� ve �ld�n� \n >>> L�tfen bekle, �ld���n i�in 10 saniye i�erisinde ba�a d�neceksin <<<\n\n");
			sleep(10);
			system("CLS");
			baslangic();
			
		}
		else if((anahtar == true) && (tahmin == sayi)){
			printf("Tebrikler� do�ru say�y� buldun ve kilitli kap�y� a�arak prensesi kurtard�n�\n");
			break;
			
		}
		else if(tahminsayisi == 1){
			printf("�� denemede bulamad�n.. odaya zehirli bir gaz dolmaya ba�lad� ve �ld�n�\n >>> L�tfen bekle, �ld���n i�in 10 saniye i�erisinde ba�a d�neceksin <<<\n \a");
			sleep(10);
			system("CLS");
			baslangic();
		}
	}
		
	
}
