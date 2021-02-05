#include <stdio.h>
#include "sys.h"

void program(){

	printf( "You are using linux congrats you are superior...\n" );
}

int main(){
	const int os = OS();
	if( os != 1 ) {
		printf( "You are not using linux! Progra will not run...\n" );
	}
	else{
		program();
	}
}
