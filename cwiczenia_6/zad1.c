#include <stdio.h>
struct struktura{
	char first_name ;
	char last_name ;
	int age ;
	int height ;
	int weight ;
	int id;
} osoba;

int main(){
	int N = 100; //przy użyciu define program ni chciał działać jak należy
	int choice;
	struct struktura tab[N];
	int tab_end;

	//ta petla sprawdza czy istnieje wolne miejsce w tablicy
	for( int i = 0 ; i < N ; i++){
		if( tab[i].id == '\0' ){
			tab_end = i;	
			break;
		}
	}
	for(;;)	{
		printf("Wybierz działanie:\n");
		printf("1) Wyswietl wszystkie osoby\n");
		printf("2) Dodaj nowa osobe\n");
		printf("3) Zmien Dane Osoby\n");
		printf("4) Usun osobe\n");
		printf("0) wyjdz z programu\n");
		scanf("%d" , &choice);
		fflush(stdin);
		switch (choice){
			case 0:
				printf("Opuszczam program...\n");
				printf("tab_end = %d\n" , tab_end);
				return 0;
			case 1:
				for( int i = 0 ; i < tab_end+1 ; i ++ ){
					if( tab_end == 0 ){
						printf("List is empty\n");
						printf("\n");
						break;

					}
					else{
						printf("First Name: %c, Last Name: %c \n" , tab[i].first_name , tab[i].last_name );
						printf("Age: %d, Height: %dcm, Weight: %dkg, ID: %d\n" , tab[i].age , tab[i].height , tab[i].weight , tab[i].id );
						printf("\n");
						break;
					}
				}
			
				
			
				
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			default:
				break;
		}
			
	}
	return 0;
}
