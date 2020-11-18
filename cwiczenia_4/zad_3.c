#include <stdlib.h>
#include <stdio.h>

int main(){
	char figura;
	char z;
	int a;
	printf("Podaj, co chcesz narysowac (do wyboru: k=kwadrat, t=trojkat, r=romb): \n");
	scanf("%c", &figura);
	printf("Ile razy chcesz uzyc tego znaku: \n");
	scanf("%d", &a);
	printf("Podaj znak jakiego program użyje\n");
	scanf("%c" , &z);
	if(figura=='k')
	{
		
	}
	else if(figura=='t'){
		printf("trojkat");
	}
	else if(figura=='r'){
		printf("romb");
	}
	else {
		printf("nie podano figury z puli");
	}
	
	return 0;
}
