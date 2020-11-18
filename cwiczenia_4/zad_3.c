#include <stdlib.h>
#include <stdio.h>

int main(){
	char figura;
	char z;
	int h;
	printf("Podaj, co chcesz narysowac (do wyboru: k=kwadrat, t=trojkat, r=romb): \n");
	scanf("%c", &figura);
	printf("Ile razy chcesz uzyc tego znaku: \n");
	scanf("%d", &h);
	if(figura=='k'){
		for ( int i = 0 ; i < h ; i++ ){
			for( int j = 0 ; j < h ; j ++ ){
				printf("* ");
			
			
			}

		printf("\n");
		}
	}		
	
	else if(figura=='t'){
		for( int i = 0 ; i < h ; i ++ ){
			for(int j = 1 ; j <= 2 * h ; j++){
				if( j >= h-i && j <= h+i ){
					printf("*");
				}
				else{
					printf(" ");
				}
			}

		printf("\n");
		}

	}
	else if(figura=='r'){
			int h = 7;

	//trojkat
		for( int i = 0 ; i < h ; i ++ ){
			for(int j = 1 ; j <= 2 * h ; j++){
				if( j >= h-i && j <= h+i ){
					printf("*");
				}	
				else{
					printf(" ");
				}
			}

		printf("\n");
		}
		for( int i = h - 2 ; i >= 0 ; i -- ){
			for(int j = 1 ; j <= (2 * h)   ; j++){
				if( j <= h+i && j >= h-i ){
					printf("*");
				}
				else{
					printf(" ");
				}
			}

		printf("\n");
		}
	}
	else {
		printf("nie podano figury z puli");
	}
	
	return 0;
}
