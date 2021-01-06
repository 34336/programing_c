#include <stdio.h>

int calc_more(){
	char choice;
//	for(;;)	
	while(true){
		printf("p) Potegowanie\n");
		printf("e) Pierwiastkowanie\n");
		fflush( stdin );
		scanf("%c" , &choice);
		fflush( stdin );
	}
	return 1;
}
	
int calc_menu(){
	char choice;
		for(;;){

		printf("Wybierz działanie do wykonania:\n");
		printf("1) Dodawanie\n");
		printf("2) Odejmowanie\n");
		printf("3) Mnożenie\n");
		printf("4) Dzielenie\n");
		printf("m) Wiecej\n");
		printf("q) Wyjscie\n");
		fflush( stdin );
		scanf("%c" , &choice);
		fflush( stdin );

		switch( choice ){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 'm':
				calc_more();
				break;
			case 'q':
				return 1;
			default:
				printf("Wybrano niepoprawna akcje\n");
				break;
		}

	}
	return 1;
}

int main(){
	

	calc_menu();


	return 0;
}
