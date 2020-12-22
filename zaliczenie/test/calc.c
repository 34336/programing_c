#include <stdio.h>

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
		scanf("%c" , &choice);

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
				break;
			case 'q':
				return 1;
			default:
				printf("Wybrano niepoprawna akcje\n");
				break;
		}

	}
}
int calc_more(){
	for(;;)	{
		printf("p) Potegowanie\n");
		printf("e) Pierwiastkowanie\n");
	}
}
int main(){
	

	calc_menu();


	return 1;
}
