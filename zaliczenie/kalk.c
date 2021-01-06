#include <stdio.h>
char choice;
float a ;
float b ;
float wynik ;
float *w1 = &a;
float *w2 = &b;
float *result = &wynik;

//dzielenie
float divide(){
	printf("Podaj pierwsza liczbe:\n");
	scanf("%f" , w1);
	printf("Podaj druga liczbe:\n");
	scanf("%f" , w2);
	*result = (*w1) * (*w2);
	printf( "wynik mnożenia liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *result );
	printf( "\n" );

	return *result;
}
//dzielenie-koniec

//mnozenie
float multiplication(){
	printf("Podaj pierwsza liczbe:\n");
	scanf("%f" , w1);
	printf("Podaj druga liczbe:\n");
	scanf("%f" , w2);
	*result = (*w1) * (*w2);
	printf( "wynik mnożenia liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *result );
	printf( "\n" );

	return *result;
}
//mnezenie-koniec

//dodawanie
float sum(){
	printf("Podaj pierwsza liczbe:\n");
	scanf("%f" , w1);
	printf("Podaj druga liczbe:\n");
	scanf("%f" , w2);
	*result = (*w1) - (*w2);
	printf( "wynik dodawania liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *result );
	printf( "\n" );

	return *result;
}
//dodawanie-koniec


//odejmowanie
float subtract(){
	printf("Podaj pierwsza liczbe:\n");
	scanf("%f" , w1);
	printf("Podaj druga liczbe:\n");
	scanf("%f" , w2);
	*result = (*w1) - (*w2);
	printf( "wynik odejmowania liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *result );
	printf( "\n" );

	return *result;
}
//odejmowanie-koniec

//potegowanie-poczatek
float power(){

	float tmp = *w1;

	printf("podaj liczbe ktora chcesz podniesc do potegi:\n");
	scanf( "%f" , &a );
	printf("podaj stopien  potegi:\n");
	scanf( "%f" , &b );

	
	for ( int i = 0 ; i < *w2 ; i++ ){

		tmp = tmp * (*w1);
	}
	*result = tmp;
	printf( "liczba %.2f podniesiona do potegi %.2f to: %.2f\n" , *w1 , *w2 , *result );
	return *result;
}
//potegowanie-koniec

//menu-more-begin
int calc_more(){
//	for(;;){
	while(true){
		printf("p) Potegowanie\n");
		printf("q) Wstecz\n");
		fflush( stdin );
		scanf("%c" , &choice);
		fflush( stdin );

		switch( choice ){
			case 'p':
				power();
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
//menu-more-end
	
//menu-begin
int calc_menu(){
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
			case '1':
				sum();
				break;
			case '2':
				subtract();
				break;
			case '3':
				multiplication();
				break;
			case '4':
				divide();
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
//menu-end

int main(){
	

	calc_menu();


	return 0;
}
