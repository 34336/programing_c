#include <stdlib.h>
#include <stdio.h>

int main(){
	int N = 0;
	int a = 0;
	int b = 0;
	for(int i = 1 ; i < 9 ; i++){
		for(int j = 1 ; j < 9 ; j++){
			for( int k  = 1 ; k < 9 ; k++ ){
				if( i != j && i != k && k != j ){
					a = ( i * 100 ) + ( j * 20 ) + k;
					printf( "%d\n" , a );
					b++;
				}
			}
		}

				
	}
	printf("ilośc takich liczb to: %d \n" , b);
	return 0;
}
