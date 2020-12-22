#include <stdio.h>

int more(){
	fflush(stdin);
	char more ;
	fflush(stdin);
	for(;;)	{
		printf("p) Potegowanie\n");
		printf("s) Pierwiastkowanie\n");
		printf("b) Powrot do poprzedniego menu\n");
		fflush(stdin);
		scanf("%c" , &more );
		fflush(stdin);

		switch( more ){
			case 'p':
				break;
			case 's':
				break;
			case 'b':
				return 0;
			}
		}
}
int calc_menu(){
	fflush(stdin);
	char choice;
	fflush(stdin);
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
				more();
				break;
			case 'q':
				return 1;
			default:
				printf("Wybrano niepoprawna akcje\n");
				break;
		}

	}
}

int main(){
	calc_menu();
	return 0;
}
