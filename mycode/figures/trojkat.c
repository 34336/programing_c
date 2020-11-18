#include <stdio.h>

int main(){
	int a = 5;
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
	

	return 0;	
}
