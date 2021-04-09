#include <stdio.h>
#include <locale.h>
#include <math.h>

void maxMinYazdir(char c);
void sirala(char s);
float istatistikGoster(float ort, float sapma);
int dizi[10];
char c;
char s;
float ort;
float standartSapma;
float toplam;

int secim;



main(){
setlocale(LC_ALL,"Turkish");

	srand(time(NULL));
	int i;


	for(i = 0; i < 10; i++){
		dizi[i] = (rand() % 51);
		int k;
		for(k = 0; k < i; k++){
			if(dizi[i] == dizi[k]){
				dizi[i] = (rand() % 51);
			}
		}
	}


printf("Olu�an diziniz : \t");
diziyiYazdir();
printf("\n\n");

 


printf("1 - Yazd�r \n");
printf("2 - Tersten Yazd�r \n");
printf("3 - Max-Min Yazd�r \n");
printf("4 - S�rala \n");
printf("5 - �statistik G�ster \n \n");

printf("SE��M�N�Z:");
scanf("%d",&secim);

if(secim==1){
	diziyiYazdir(); 
	printf("\n");	
}
else if(secim==2){
	diziyiTerstenYazdir();
	printf("\n");	
}
else if(secim==3){
	maxMinYazdir(c);
	printf("\n");
}
else if(secim==4){
	sirala(s);
	printf("\n");	
}
else if(secim==5){
	istatistikGoster(ort,standartSapma);
	printf("\n");
}




printf("\n\n");

printf("******************************** Bir �ceki fonksiyonun cevab� �st k�s�mda yer almaktad�r ******************************* \n");
printf("***** Programdan ��kmadan Di�er Fonksiyonlar� Kullanabilmeniz ��in Dizi Yenilendi. Ke�fetmeye Devam Edebilirsiniz *****");

printf("\n\n\n\n");

return main();








}

int diziyiYazdir(){
	
	int j;
	for(j = 0; j < 10; j++){
		printf("%d",dizi[j]);
		if(j != 9){
			printf(",");
		}
	}
	
	
	
}

int diziyiTerstenYazdir(){

	int j;
	for(j=9; j>=0; j--){
		printf("%d",dizi[j]);
		if(j != 0){
			printf(",");
		}
	}	
}


void maxMinYazdir(char c){
	setlocale(LC_ALL,"Turkish");
	printf("Se�iminiz: (K)k���k / (B)b�y�k \n");
	scanf(" %c",&c);
	
	
	
	if(c=='B'){
		int max;
		max = dizi[0];
		for(int i=0; i<10; i++){
			if(dizi[i]>max) max = dizi[i];
		}
		printf("Maximum De�er : %d \n",max);
	}
	
	if(c=='K'){
		int min;
		min = dizi[0];
		for(int i=0; i<10; i++){
			if(dizi[i]<min) min = dizi[i];
		}
		printf("Minimum De�er : %d \n",min);
	}	
}



void sirala(char s){
	setlocale(LC_ALL,"Turkish");
	printf("Se�iminiz: (K)k���k / (B)b�y�k \n");
	scanf(" %c",&s);
	
	if(s=='B'){
		int i,j,t;
    
      
      	for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                  if(dizi[j]<=dizi[i]){
                        t=dizi[i];  
                        dizi[i]=dizi[j];
                        dizi[j]=t;
                        }
                  }
            }
      
    printf("\n B�y�kten K����e S�ralama: ");
      
    for(i = 0;i <10; i++){
        printf("%d ",dizi[i]);
      }
    printf("\n >>> Devam etmek i�in *ENTER* a bas�n. <<<");  
    getch();            
}
	
	if(s=='K'){
		int i,j,t;
    	
      
      	for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                  if(dizi[j]>=dizi[i]){
                        t=dizi[i];  
                        dizi[i]=dizi[j];
                        dizi[j]=t;
                        }
                  }
            }
      
    printf("\n K���kten B�y��e S�ralama: ");
      
    for(i = 0;i <10; i++){
        printf("%d ",dizi[i]);
      }
     printf("\n >>> Devam etmek i�in *ENTER* a bas�n. <<<"); 
    getch();            	
	}	
}



float istatistikGoster(float ort, float standartSapma){
	setlocale(LC_ALL,"Turkish");

	
toplam=0.0;
int i;
float standartToplam;

	for(int i=0; i<10; i++){
	
		toplam = toplam + dizi[i];
		ort = toplam/10.0;
		
	}
	printf("ortalama: %f \n",ort);
	

	
	for(i = 0; i < 10; i++){
		standartToplam = standartToplam + pow((dizi[i]-ort),2);
	}
	standartSapma = sqrt(standartToplam/=9);
	printf("Standart Sapma: %.2f",standartSapma);
	
		
	
	
	
	
	
	}	



	

	

	
	

