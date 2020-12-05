#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

	srand( time( 0 ) );
	int i , j;
	int row , col;

	printf("podaj liczbe wierszy: ");
	scanf("%d" , &row);
	fflush(stdin);
	printf("podaj liczbe kolumn: ");
	scanf("%d" , &col);
	fflush(stdin);
	printf("\n");

	float row_srednia = 0;
	float col_srednia = 0; 

	float tab_row_avg[row];
	float tab_col_avg[col];

	int tab[row][col];
	int tab2[col][row];
	int tab_min_col[col]  = {0};
	int tab_max_col[col]  = {0};
	int tab_min_row[row]  = {0};
	int tab_max_row[row]  = {0};

	//pierwsza macierz
	printf("wylosowana macierz:\n");
	for( i =0 ; i < row ; i++ ){
		for( j = 0 ; j < col ; j++ ){
			tab[i][j] = rand() %21 - 10;
			printf("%d, " , tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//transpozycja macierzy
	printf("Transpozycja macierzy: \n");
	for( i = 0 ; i < col ; i++ ){
		for( j = 0 ; j < row ; j++ ){
			tab2[i][j] = tab[j][i];
			printf("%d, " , tab2[i][j] );
		}
		printf("\n");
	}
	printf("\n");
	
	//liczenie sredniej wartosci z wierszy (macierz pierwotna)
	for( i = 0 ; i < row ; i ++ ){
		for( j = 0 ; j < col ; j++ ){
			row_srednia += tab[i][j];
		}
		row_srednia = row_srednia / col;
		tab_row_avg[i] = row_srednia;
		row_srednia = 0;

	}
	
	//liczenie sredniej z wartosci kolumn ( liczenie sredniej wartosci wierszy transpozycjonowanej macierzy )
	for( i = 0 ; i < col ; i++ ){
		for( j = 0 ; j < row ; j++ ){
			col_srednia += tab2[i][j];
		}
		col_srednia = col_srednia / row;
		tab_col_avg[i] = col_srednia;
		col_srednia = 0;
	}
	
	
	//wyznaczanie waryosci min i max z wierszy macierzy pierwotnej 
	for( i = 0 ; i < col ; i++ ){
		for( j = 0 ; j < row ; j++ ){
			if( tab2[i][j] > tab_max_col[i] ){
				tab_max_col[i] = tab2[i][j];
			}
			else if( tab2[i][j] < tab_min_col[i] ){
				tab_min_row[i] = tab2[i][j];	
			}
		}
	}
	
	//wyświetlanie wartosci sredniej wiersza x z macierzy pierwszej
	for( i = 0 ; i < row ; i++ ){
		printf("srednia wartosci wiersza %d macierzy pierwotnej to: %.2f\n" , i + 1 , tab_row_avg[i]);
	}
	printf("\n");
	
	//wyświetlanie wartosci sredniej kolumny x z macierzy pierwszej
	for( i = 0 ; i < col ; i++ ){
		printf("srednia wartosci kolumny %d macierzy pierwotnej to: %.2f\n" , i + 1 , tab_col_avg[i]);
	}
	printf("\n");

	//wyświetlanie wartosci sredniej wiersza x z macierzy transpozycjonowanej
	for( i = 0 ; i < col ; i++ ){
		printf("srednia wartosci wiersza %d macierzy pierwotnej to: %.2f\n" , i + 1 , tab_col_avg[i]);
	}
	printf("\n");
	
	//wyświetlanie wartosci sredniej kolumny x z macierzy transpozycjonowanej
	for( i = 0 ; i < row ; i++ ){
		printf("srednia wartosci kolumny %d macierzy pierwotnej to: %.2f\n" , i + 1 , tab_row_avg[i]);
	}
	printf("\n");

	

	return 0;
}
