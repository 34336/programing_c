#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int ilosc ;
    float a = 0;
    printf("podaj ilosc liczb:\n");
    scanf("%d" , &ilosc);
    int tablica[ilosc];
    for( int i = 0 ; i < ilosc; i++ ){
	    printf("podaj %d liczbe\n" , i+1);
	    scanf("%d" , &tablica[i]);
    }
    for(int i = 0 ; i < ilosc ; i++){
	a += tablica[i];

    }
    a = a/ilosc;
    printf("%.2f" , a);
    printf("\n");
    return 0;
}
