#include <stdio.h>
#include <math.h>
#define N 10
int i = 0;

typedef struct liczba{
    float a;
    float b;
    float wynik;
    char dzialanie;
    int indicator;
} liczby;

liczby some;
liczby mem[N];

float *w1 = &some.a;
float *w2 = &some.b;
float *result = &some.wynik;
char *operation = &some.dzialanie;

void get_num(){

    switch( *operation ){
    case 'b':
        printf("podaj Wzrost[cm]:\n");
        scanf( "%f" , w1 );
        printf("podaj wage[kg]:\n");
        scanf( "%f" , w2 );
        break;
    default:
        printf("podaj pierwszą liczbe:\n");
        scanf( "%f" , w1 );
        printf("podaj druga liczbe:\n");
        scanf( "%f" , w2 );
        break;
    }


}

void memo(){
    for( i = 0 ; i < N-1 ; i++ ){
        mem[i].indicator = 0;
    }
}

int mem_count(){
    int count = 0;
    for( i = 0 ; i < N ; i++){
        if( mem[i].indicator == 1 ){
            count++;
        }
    }
    return count;
}
void mem_update(){
    int count = mem_count();
    for( i = 0 ; i < count ; i++ ){
        mem[i+1].a = mem[i].a;
        mem[i+1].b = mem[i].b;
        mem[i+1].wynik = mem[i].wynik;
        mem[i+1].dzialanie = mem[i].dzialanie;
        mem[i+1].indicator = mem[i].indicator;
    }
    mem[0].a = *w1;
    mem[0].b = *w2;
    mem[0].wynik = *result;
    mem[0].dzialanie = *operation;
    mem[0].indicator = 1;
}

void mem_print(){
    char test;
    printf("historia wykonywanych obliczen:\n");
    printf( "\n");
    for( i = 0 ; i < N ; i++){
        if( mem[i].indicator == 1 ){
            switch ( mem[i].dzialanie ){
                case '1':
                    printf("rodzaj operacji: dodawanie\n");
                    break;
                case '2':
                    printf("rodzaj operacji: odejmowanie\n");
                    break;
                case '3':
                    printf("rodzaj operacji: mnozenie\n");
                    break;
                case '4':
                    printf("rodzaj operacji: dzielenie\n");
                    break;
                case 'b':
                    printf("rodzaj operacji: BMI\n");
                    break;
            }
            printf( "Pierwsza liczba: %2.f\n" , mem[i].a );
            printf( "Druga liczba: %2.f\n" , mem[i].b );
            printf( "Wynik: %2.f\n" ,mem[i].wynik );
            switch ( mem[i].dzialanie ){
            case 'b':
                if( mem[i].wynik < 18.5){
                    printf( "kategoria: niedowaga\n" );
                }
                else if( mem[i].wynik > 25){
                    printf( "kategoria: Nadwaga\n" );
                }
                else{
                    printf( "kategoria: w normie\n" );
                }
                break;
            }
            printf( "\n");
            printf( "\n");
        }
    }
}




float sum( float c , float d ){

	return c + d;
}

//odejmowanie
float subtract(){
	return (*w1) - (*w2);
}
//odejmowanie-koniec

//mnozenie
float multiplication( float *w9 , float *w0){
	return (*w9) * (*w0);
}
//mnezenie-koniec

//dzielenie
float divide(){
	return (*w1) / (*w2);
}
//dzielenie-koniec

//potegowanie
float power(){
	float tmp = 1;
    if( *w1 > 1 ){
        for ( int i = 0 ; i < *w2 ; i++ ){
            tmp = tmp * (*w1);
        }
        return tmp;
    }
    else if( *w1 == 0 ) {
        return -1;
    }
    return 0;
}
//potegowanie-koniec


//bmi
float bmi(){
    return (( *w2 ) * ( *w2 )) / ( *w1 );
}
//bmi-koniec

//menu-more-begin
int calc_more(){
//	for(;;){
	while(1){
		printf("p) Potegowanie\n");
		printf("b) BMI\n");
		printf("q) Wstecz\n");
		fflush( stdin );
		scanf("%c" , operation);
		fflush( stdin );

		switch( *operation ){
			case 'p':
                get_num();
				*result = power();
				printf( "liczba %.2f podniesiona do potegi %.2f to: %.2f\n" , *w1 , *w2 , *result );
				mem_update();
				break;
            case 'b':
                get_num();
                some.wynik = bmi();
                printf( "Twoje bmi wynosi %3.f\n" , *result );
                mem_update();
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

//menu-begin
int calc_menu(){
        memo();

		for(;;){
		printf("Wybierz działanie do wykonania:\n");
		printf("1) Dodawanie\n");
		printf("2) Odejmowanie\n");
		printf("3) Mnozenie\n");
		printf("4) Dzielenie\n");
		printf("w) Pokaz hiistorie dzialan\n");
		printf("m) Wiecej\n");
		printf("q) Wyjscie\n");
		fflush( stdin );
		scanf("%c" , operation);
		fflush( stdin );

		switch( *operation ){
			case '1':
                get_num();
				*result = sum( *w1 , *w2 );
				printf( "wynik dodawania liczby %2.f oraz %2.f to: %2.f\n" , *w1 , *w2 , *result);
				mem_update();
				break;
			case '2':
                get_num();
                some.wynik = subtract( *w1 , *w2 );
                printf( "wynik odejmowania liczby %2.f od liczby %2.f to: %2.f \n" , *w2 , *w1 , *result );
                printf( "\n" );
                mem_update();
				break;
			case '3':
			    get_num();
				*result = multiplication( w1 , w2 );
                printf( "wynik mnozenia liczby %2.f od liczby %2.f to: %2.f \n \n" , *w2 , *w1 , *result );
                mem_update();
				break;
			case '4':
			    get_num();
				some.wynik = divide();
				printf( "wynik dzielenia liczby %2.f od liczby %2.f to: %2.f \n \n" , *w2 , *w1 , *result );
				mem_update();
				break;
			case 'm':
				calc_more();
				break;
            case 'w':
                mem_print();
                break;
			case 'q':
				return 0;
			default:
				printf("Wybrano niepoprawna akcje\n");
				break;
		}

	}
}
