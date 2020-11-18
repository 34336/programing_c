#include <stdlib.h>
#include <stdio.h>

int main(){
	for(int i = 1 ; i < 4 ; i++){
		for(int j = 1 ; j < 4 ; j++){
			for( int k  = 1 ; k < 4 ; k++ ){
				for( int l = 1 ; l < 4 ; l++ ){
					for( int m = 1 ; m < 4 ; m++ ){
						printf(" %d %d %d %d %d \n " , i , j , k , l , m );
					}
				}
			}
		}

				
	}
	
	return 0;
}
