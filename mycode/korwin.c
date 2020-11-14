#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
int main ( void ){
	char a[7][60] = { "Ja chce powiedziec Jedna rzecz:" , "Trzeba powiedziec jasno:" , "Jak powiedzial wybitny krakowianin Stanisław Lem," , "Prosze mnie dobrze zrozumiec" , "Ja chcialem panstwu przypomniec, ze" , "Niech panstwo nie maja zludzen:" , "Powedzmy to wyraznie:" };
	char b[7][60] = { "przedstawiciele czerwonej holoty" , " ci wszyscy (tfu!) geje" , "funkcjonariusze rezimowej telewizji" , "tak zwani ekolodzy" , "ci wszyscy (tfu!) demokraci" , "agenci bezpieki" , "feminazistki" };
	char c[7][60] = { "zupelnie bezkarnie" , "calkowicie bezczelnie" , "o pogladach na lewo od komunizmu" , "celowo i swiadomie" , "z premedytacja" , "od czasow okraglego stolu" , "w ramach postepu" };
	char d[7][60] = { "nawoluja do podniesienia podatkow" , "probuja sklocic Polske z rosja" , "zakazuja posiadania broni" , "probuja wyrzucic kierowcow z miast" , "glosza brednie o globalnym ociepleniu" , "nie dopuszczaja prawicy do wladzy" , "ucza dzieci homoseksualizmu" };
	char e[7][60] = { "bo dzieki temu moga krasc" , "bo dostaja za to pieniadze" , "bo tak sie uczy w panstwowej szkole" , "bo bez tego (tfu!) demokracja nie moze istniec" , "bo glupich jest wiecej niz madrych" , "bo chca tworzyc raj na ziemi" , "bo chca zniszczyc cywilizacje bialego czlowieka" };
	char f[7][80] = { "przez kolejne kadencje" , "o czym sie nie mowi" , "i wlasnie dla tego Europa umiera" , "ale przyjda muzlumanie i zrobia porzadek" , "- tak samo z reszta jak  za Hhitlera" , "- prosze zobaczyc, co sie dzieje na Zachodzie, jesli mi panstwo nie wierza" , "co lat temu sto nikomu nie przyszloby nawet do glowy" };
	srand( time(  0 ) );
	int num_a = rand() % 7;
	int num_b = rand() % 7;
	int num_c = rand() % 7;
	int num_d = rand() % 7;
	int num_e = rand() % 7;
	int num_f = rand() % 7;
	
	printf("%s " , a[num_a]);
	printf("%s " , b[num_b]);
	printf("%s " , c[num_c]);
	printf("%s " , d[num_d]);
	printf("%s " , e[num_e]);
	printf("%s. " , f[num_f]);
	printf("\n");
	
	/*
	printf(" %d " , num_a);
	printf(" %d " , num_b);
	printf(" %d " , num_c);
	printf(" %d " , num_d);
	printf(" %d " , num_e);
	printf(" %d " , num_f);
	printf(" \n ");
	*/
	return 0;
}
