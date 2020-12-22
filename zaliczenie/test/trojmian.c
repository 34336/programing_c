#include <stdio.h>

float a , b , c , wynik;
float *w1 = &a;
float *w2 = &b;
float *w3 = &c;
float *delta = &wynik;

int trojmian(){


	printf("podaj pierwszą liczbe:\n");
	scanf( "%f" , &a );
	printf("podaj druga liczbe:\n");
	scanf( "%f" , &b );
	printf("podaj trzecia liczbe:\n");
	scanf( "%f" , &c );


	*delta	= b*b - 4*(a*c);
	printf( "delta jest rowna: %2.f\n" , *delta);
	return 0; 
}
int main(){
	trojmian();
	return 0;
}
