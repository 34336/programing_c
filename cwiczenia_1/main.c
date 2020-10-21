#include <stdio.h>
#include <stdlib.h>

int main()
{
	//zadanie 1
    signed int aa;
    unsigned int ab;
    signed short int ba;
    unsigned short int bb;
    signed long int ca;
    unsigned long int cb;
    char da;
    float ea;
    double fa;
    long double ga;

    printf("Zadanie 1\n");
    printf("dlugosc signed int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(aa) , sizeof(aa));
    printf("dlugosc unsigned int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(ab) , sizeof(ab));
    printf("dlugosc signed short int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(ba) , sizeof(aa));
    printf("dlugosc unsigned short int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(bb) , sizeof(bb));
    printf("dlugosc signed long int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(ca) , sizeof(ca));
    printf("dlugosc unsigned long int to  %d bitow  czyli %d bajtow\n" , 8*sizeof(cb) , sizeof(cb));
    printf("dlugosc char to  %d bitow  czyli %d bajtow\n" , 8*sizeof(da) , sizeof(da));
    printf("dlugosc float to  %d bitow  czyli %d bajtow\n" , 8*sizeof(ea) , sizeof(ea));
    printf("dlugosc double  to  %d bitow  czyli %d bajtow\n" , 8*sizeof(fa) , sizeof(fa));
    printf("dlugosc long double to  %d bitow  czyli %d bajtow\n" , 8*sizeof(ga) , sizeof(ga));
    printf("\n");


    //zadanie 2
    printf("zadanie 2\n");
    int a = 1;
    char b = '^';
    float c = 1.245624535;
    double d = 6.521643;

    printf("zmienna int = %d\n" , a);
    printf("zmienna char = %c\n" , b);
    printf("zmienna float = %f\n" , c);
    printf("zmienna double = %lf\n" , d);
    printf("\n");

    //zadanie3
    int pierwsza = 2;
    int druga = 4;
    int x;
    int wynik;
    printf("zadanie 3\n");
    printf("podaj zmienną x\n");
    scanf("%d" , &x);
    wynik=pierwsza*x+druga;
    printf("wynik działania 2*x+4 to: %d\n" , wynik );
    printf("\n");

    //zadanie 4
    float kilometry;
    float spalone_litry;
    float spalanie;
    printf("zadanie 4\n");
    printf("Proszę podać liczbę przejechanych kilometrów:\n");
    scanf("%d" , &kilometry);
    printf("Proszę podać liczbę spalonych litror paliwa:\n");
    scanf("%d" , &spalone_litry);
    spalanie = kilometry/spalone_litry;
    printf("twoje spalanie to %.2f litra/ow na 100 Km\n" , spalanie);

    return 0;

}
