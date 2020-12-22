#include <stdio.h>
float a , b , wynik;
float *w1 = &a;
float *w2 = &b;
float *result = &wynik;

float divide(){
	printf( "Podaj dzielna: \n" );
	scanf( "%f" , w1 );
	printf( "Podaj dzielnik: \n" );
	scanf( "%f" , w2 );

	*result = (*w1) / (*w2);
	printf( "wynik dzielenia %2.f przez %2.f to %2.f\n" , *w1 , *w2 , *result );

	return *result;
}
int main(){
	divide();
	return 0;
}
