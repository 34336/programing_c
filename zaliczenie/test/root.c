#include <stdio.h> 
float a ;
float b ;
float wynik ;
float *w1 = &a;
float *w2 = &b;
float *result = &wynik;

float root(){

	float tmp = *w1;

	printf("podaj liczbe ktora chcesz podniesc do potegi:\n");
	scanf( "%f" , &a );
	printf("podaj stopien  potegi:\n");
	scanf( "%f" , &b );

	
	for ( int i = 0 ; i < *w2 ; i++ ){

		tmp = tmp * (1/ (*w1));
	}
	*result = tmp;
	printf( "liczba %.2f podniesiona do potegi %.2f to: %.2f\n" , *w1 , *w2 , *result );
	return *result;
}

int main(){
	

	root();


	return 0;
}
