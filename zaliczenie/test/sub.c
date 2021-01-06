#include <stdio.h>
float sutract(){
	float a ,b ,wynik;
	float *w1 = &a;
	float *w2 = &b;
	float *w3 = &wynik;

	printf("Podaj pierwsza liczbe:\n");
	scanf("%f" , w1);
	printf("Podaj druga liczbe:\n");
	scanf("%f" , w2);
	*w3 = (*w1) - (*w2);
	printf( "wynik odejmowania liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *w3 );
	printf( "\n" );

	return 0;
}
int main(){

	substract();
	return 0;
}
