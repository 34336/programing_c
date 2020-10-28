#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Zadanie 1
    int a ;
    int b ,r ;
    int c;
    printf("podaj a\n");
    scanf("%d" , &a);
    printf("podaj b\n");
    scanf("%d" , &b);
    c = a/b;
    r = a - b*c;
    //printf("%d \n" ,r );

    printf("reszta z dzielenia %d oraz %d to: %d \n " , a , b , r);

    //zad2





    //zadanie 2

    //liczenie delty
    int a;
    int b;
    int c;
    int d; //delta

    float x;
    float y;

    printf("podaj a");
    scanf("%d" , &a);
    printf("podaj b");
    scanf("%d" , &b);
    printf("podaj c");
    scanf("%d" , &d);
    d=pow(b,2)-(4*a*c);
    int dsqrt;
    dsqrt=sqrt(d);
    printf("delta = %d\n" , d);
    printf("pierwiastek z delty to %d" , dsqrt);

    if(d<0){
        printf("delta jest ujemna. Bark rozwiazan.");

    }else if(d==0){
        x=(-b)/(2*a);
        printf("delta jest równa 0. jest jedno rozwiązanie równe %f" , x);

    }else if(d>0){

        //x=((-b)+dsqrt)/(2*a);
        //y=((-b)-dsqrt)/(2*a);
        b=(-b);
        x=(b+dsqrt)/(2*a);
        y=(b-dsqrt)/(2*a);



        printf("delta jest wiekssza od 0. Istnieja dwa rozwiazania %f oraz %f" , x , y);
    }else{
        printf("nieznany blad");
    }

    //Zadanie 3
        int a , b, e, c, d, f;
    int w;
    float wx;
    float wy;
    float x;
    float y;
    printf("podaj a\n");
    scanf("%d" , &a);
    printf("podaj b\n");
    scanf("%d" , &b);
    printf("podaj e\n");
    scanf("%d" , &e);
    printf("podaj c\n");
    scanf("%d" , &c);
    printf("podaj d\n");
    scanf("%d" , &d);
    printf("podaj f\n");
    scanf("%d" , &f);

    printf("\n pdane wspolczynniki to kolejno: %d %d %d %d %d %d\n" , a, b, e, c, d, f);
    w = (a * d) - (c * b);
    wx = (e * d) - (f * b);
    wy = (a * f) - (c * e);

    printf("w=%d, wx=%d, wy=%d \n" ,w,wx,wy);

    if(w == 0 && (wx != 0 || wy!=0) ){
        printf("uklad rownan jest sprzeczny. nie posiada rozwiazan");
    }else if(w == 0 && (wx == 0 && wy ==0) ){
        printf("uklad jest nieoznaczony. ilosc rozwiązan jest nieskonczona");
    }else if(w != 0){
        x=wx/w;
        y=wy/w;
        printf("wspolczynnik x=%f a wspolczynnik y=%f" , wx/w,wy/w);

    }

    //zadanie dodatkowe
        char dzialanie;
    char dalej;
    float a;
    float b;
    float wynik;
    dzialania:
    fflush(stdin);
    printf("Mozliwe do wykonania operacje: \n 1.Dodawanie (+)\n 2.Odejmowanie (-)\n 3.Mnozenie (*)\n 4.Dzielenie(/)\n 5.Reszta z dzielenia(%%)\n ");
    printf("Podaj ktora operacje chcesz wykonac:\n");
    scanf("%c" , &dzialanie);

    //goto dzialania;
    printf("podaj pierwsza liczbe\n");
    scanf("%f" , &a);
    printf("podaj druga liczbe\n");
    scanf("%f" , &b);





    switch(dzialanie){
    case '+':
        wynik=a+b;
        printf("wynik to: %f \n" , wynik);
        break;
    case '-':
        wynik=a-b;
        printf("wynik to: %f \n" , wynik);
        break;
    case '*':
        wynik=a*b;
        printf("wynik to: %f \n" , wynik);
        break;
    case '/' :
        if(b == 0){
            printf("druga liczba to %1.f. akcja niedozwolona \n" ,b);

        }else{
        wynik=a/b;
        printf("wynik to: %f \n" , wynik);

        }
        break;
    case '%':

        if(b == 0){
            printf("druga liczba to %1.f. akcja niedozwolona \n" ,b);
        }else{
            wynik = (int) a % (int) b;
            printf("wynik to: %1.f \n" , wynik);

        }
        break;
    case 'q':
        return 0;
    default:
        printf("wybrano bledne dzialanie \n");
    }

    printf("czy chcesz wykonac kolejne dzialanie? (T/n) \n");
    fflush(stdin);
    scanf("%c" , &dalej);

    if(dalej == 'T' || dalej == 't'){
        goto dzialania;
    }else{
        return 0;
    }


    return 0;
}
