#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned long long int fibonacci(unsigned int n);


 main() {
setlocale(LC_ALL,"Turkish");
	
unsigned long long int result; //fibonacci de�eri, sonucu
unsigned int number; // kullan�c� taraf�ndan girilen say�

printf("Bir tam say� giriniz: \n");
scanf("%u",&number);

result = fibonacci(number);

printf("Fibonacci(%u) = %11u \n",number, result); //ilk %u=number, ikinci %11u=result
	
}

//fibonacci fonksiyonunu �zyinelemeli olarak tan�mlayaca��z

unsigned long long int fibonacci(unsigned int n){
	
	if(0 == n || 1 == n){
		return n;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}









