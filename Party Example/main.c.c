#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Turkish");
	
	int evineVarmasiIcinGerekenSure = 0;
	int toplamSoruSayisi = 0;
	int toplamSure = 240;
	int	yeniToplamSure=0;
	
	printf("Toplam soru say�s�n� girniz:\n");
	scanf("%d",&toplamSoruSayisi);
	
	printf("Amcasinin evine varmas� i�in gereken s�reyi giriniz:\n");
	scanf("%d",&evineVarmasiIcinGerekenSure);
	
	
	yeniToplamSure = toplamSure - evineVarmasiIcinGerekenSure;
	
	int cozulebilecekSoruSayisi = 0;

		while(yeniToplamSure > 0){
		yeniToplamSure = yeniToplamSure -  cozulebilecekSoruSayisi * 5;
		
		if(yeniToplamSure < 0){
			break;
		}else if(yeniToplamSure > 0){
			cozulebilecekSoruSayisi++;	
		}
		

	}

	printf("En fazla ��z�lebilecek soru say�s� %d", cozulebilecekSoruSayisi);
	
	return 0;
}
