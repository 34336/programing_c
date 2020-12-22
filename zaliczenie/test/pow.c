#include <stdio.h>

//Ten program podnosi podana liczbe do podanej potegi uzywajac wskaznikow
float power( float *num , float *degree , float *result){
	float tmp = *num;
	
	for ( int i = 1 ; i < *degree ; i++ ){

		tmp = tmp * (*num);
	}
	*result = tmp;
	return tmp;
}

int main(){
	float a ;
	float b ;
       	float wynik ;
	float *w1 = &a;
	float *w2 = &b;
	float *w3 = &wynik;

	printf("podaj liczbe ktora chcesz podniesc do potegi:\n");
	scanf( "%f" , &a );
	printf("podaj stopien  potegi:\n");
	scanf( "%f" , &b );
	power( &a , &b , w3 );
	printf( "liczba %.2f podniesiona do potegi %.2f to: %.2f\n" , *w1 , *w2 , wynik );

	return 0;
}
