#include <stdlib.h>
#include <stdio.h>


int main(){
	char dzialanie;	
	float S;
	float T;
	float V;
	printf("Co chcesz policzyc? \n");
	printf("1) Czas\n");
	printf("2) predkosc\n");
	printf("3) droga\n");
	printf("q) zamknikj program\n");
	scanf("%c" , &dzialanie);
	
	switch(dzialanie){
		case '1':
			printf("podaj droge[Km]\n");
			scanf("%f" , &S);
			printf("podaj predkosc[Km\\h]\n");
			scanf("%f" , &V);
			T=S/V;
			printf("czas = %f[h]\n" , T);
			break;
		case '2':
			printf("podaj droge[Km]\n");
			scanf("%f" , &S);
			printf("podaj czas[h]\n");
			scanf("%f" , &T);
			V=S*T;
			printf("predkosc = %f[Km\\h]\n" , V);
			break;
		case '3':
			printf("podaj czas[h]\n");
			scanf("%f" , &T);
			printf("podaj predkosc[Km\\s]\n");
			scanf("%f" , &V);
			S=V/T;
			printf("droga = %f[Km]\n" , S);
			break;
		case 'q':
			break;	
		default:
			printf("wystąpił nieznany blad\n");
	}

	return 0;
}
