#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int ilosc_znakow ;
    char znak;
    printf("podaj znak:\n");
    scanf("%c" , &znak);
    printf("podaj liczbe ile razy ma zostac wyswietlony ten znak");
    scanf("%d" , &ilosc_znakow);
    for( int i = 0 ; i <= ilosc_znakow ; i++ ){
	    printf("%c" , znak);
    }
    printf("\n");
    return 0;
}
