#include <stdio.h>

float sum(){
	float a ;
	float b ;
       	float wynik ;
	float *w1 = &a;
	float *w2 = &b;
	float *w3 = &wynik;

	printf("podaj pierwszą liczbe:\n");
	scanf( "%f" , &a );
	printf("podaj druga liczbe:\n");
	scanf( "%f" , &b );

	*w3 = ( *w1 ) + ( *w2 );

	printf( "wynik sumy %2.f oraz %2.f to: %2.f\n " , *w1 , *w2 , *w3 );

	printf("\n");

	return 0;
}
int main(){
	sum();	
	return 0;
}
