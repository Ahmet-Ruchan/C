#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"Turkish");

	/*
	int sayi;
	int ilkBasamak;
	int sonBasamak;
	
	printf("Sayiyi giriniz\n");
	scanf("%d",&sayi);
	
	ilkBasamak = sayi % 10; //say�y�n�n mod 10'nunu al�nca birler basama��nda kalan de�er
							//ilk basamak olur
	
	
	for(sayi;sayi>=10;sayi=sayi/10){//girilen say�dan ba�la, say� 10 dan b�y�k oldu�u
		sonBasamak = sayi; 		   //m�ddet�e devam et zaten 10 dan k���kse rakam olur
	}							 //say�y� her seferinde 1 basamak azalt
	sonBasamak = sayi;	//yani her sefer birler - onlar - y�zler... basamaklar�n� sil 
					   //en son kalan de�eri sonBasamak olarak ata.
	
	printf("Ilk Basamak: %d\nSon Basamak: %d",ilkBasamak,sonBasamak);
	*/
	
	
	
	//D�NG�S�Z �LK VE SON BASAMAK BULMA (MATH.H K�T�PHANES� LAZIM)
	
	int sayi, ilkBasamak, sonBasamak, basamak;
	
	printf("Say�y� giriniz: \n");
	scanf("%d", &sayi);
	
	ilkBasamak = sayi % 10; 
	
	basamak = (int)log10(sayi);
	sonBasamak = (int)(sayi / pow(10, basamak));
	 
	printf("�lk basamak = %d\n", ilkBasamak);
	printf("Son basamak = %d\n", sonBasamak);

	
	return 0;
}
