#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int i ; 
	int liczba;
	int silnia = 1;
	printf("podaj liczbe dla kotrej mam wyliczyc silnie: \n");
	scanf("%d" , &liczba);
	for( i = 1 ; i <= liczba ; ++i ){
		silnia=silnia*i	;
	}
	//	i = i*++i;
	printf("%d" , silnia);

	return 0;
}
