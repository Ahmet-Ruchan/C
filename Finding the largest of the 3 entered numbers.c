#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//4. SORU

int	enBuyuk(int	a, int	b, int	c){
	
	if((a>b) && (a>c)){
		printf("\n%d en b�y�kt�r\n",a);
	}
	else if((b>a) && (b>c)){
		printf("\n%d en b�y�kt�r\n",b);
	}
	else if((c>a) && (c>b)){
		printf("\n%d en b�y�kt�r\n",c);
	}	
}

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int	i;
	int	sayi1,sayi2,sayi3;
	
	printf("3 Adet say� giriniz: (her say�y� girdikten sonra ENTER'a bas�n�z) \n");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	enBuyuk(sayi1,sayi2,sayi3);
		
	return 0;
}
