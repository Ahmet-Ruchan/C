#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define pi 3.14

//3. SORU

float	alan(float	r){
	
	float	alan;
	alan = pi*r*r;
	printf("\nDairenin Alan�= %2.2f",alan);
}

float	cevre(float	r){
	
	float	cevre;
	cevre = 2*pi*r;
	printf("\nDairenin �evresi= %2.2f",cevre);
}

int main() {
	setlocale(LC_ALL,"Turkish");
	
	float	yaricap;
	
	printf("Dairenin yar� �ap�n� giriniz: \n");
	scanf("%f",&yaricap);
	
	alan(yaricap);
	cevre(yaricap);	
	
	return 0;
}
