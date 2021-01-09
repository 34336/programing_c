#include <stdio.h>
//this program compares two character strings
int main(){
	int N = 50;
	char tab1[N] = "";
	char tab2[N] = "";

	printf( "podaj pierwszy ciag:\n" );
	scanf("%s" , tab1);
	printf( "podaj drugi ciag:\n" );
	scanf("%s" , tab2);
	for( int i = 0 ; i < N ; i++ ){
		if( tab1[i] != tab2[i] ){
			printf( "%d znak ciag 1: %c, ciag 2: %c\n" , i , tab1[i] , tab2[i] );
		}
	}
	return 0;
}

