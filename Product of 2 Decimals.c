#include <stdio.h>
#include <stdlib.h>

// 5. �ki Ondal�k Say�n�n �arp�m�
int main() {
	
float	x;
float	y;
float	carpim;

printf("1. Ondalik sayiyi giriniz: \n");
scanf("%f",&x);
printf("2. Ondalik sayiyi giriniz: \n");
scanf("%f",&y);

carpim = x * y;

printf("Carpimin Sonucu: %2.2f",carpim);
	
return 0;
}
