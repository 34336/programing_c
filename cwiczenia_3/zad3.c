#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
	int ilosc;
	int min;
	int max;
	printf("podaj ilosc liczb:\n");
    	scanf("%d" , &ilosc);
    	int tablica[ilosc];

	for( int i = 0 ; i < ilosc; i++ ){
		tablica[i] = rand();
    	}
	min = tablica[0];
	max = tablica[0];
	for(  int i = 1 ; i < ilosc ; i++){
		if(min > tablica[i]) min = tablica[i];
		if(max < tablica[i]) max = tablica[i];
		
	}
	if(ilosc%2 == 0){
		int a = ilosc / 2;
		int b = a + 1;
		int ea = tablica[a];
		int eb = tablica[b];
		float mediana = (ea + eb) /2 ;
		printf("mediana: %.2f\n" , mediana);
	}else{

		int a = (ilosc+1)/2;
		float mediana = tablica[a];
		printf("%.2f\n" , mediana);
	}

	printf("min %d\n" , min );
	printf("max %d\n" , max );




 	return 0;
}
