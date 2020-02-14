#include <iostream>
#include <conio.h>
#include <stdlib.h>

//aleatorio y sin repeticion

using namespace std;

void crearMatriz();
bool verificarMatriz(int **, int);
void imprimir(int **);

int **matriz, num;

int main(){
	crearMatriz();
	verificarMatriz(matriz, num);
	imprimir(matriz);
	
	getch();
	return 0;
}
bool verificarMatriz(int **matriz, int num){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(*(*(matriz+i)+j)==num-48){
				return false;
			}
		}
	}
	return true;
}

void crearMatriz(){
	matriz = new int*[3];
	for(int i=0; i<3; i++){
		matriz[i] = new int[3];
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			num = '1'+(rand()%(9));
			while(verificarMatriz(matriz, num)==false){
				num = '1'+(rand()%(9));
			}
			*(*(matriz+i)+j) = num-48;
		}
	}
}

void imprimir(int **matriz){
	for(int i=0; i<3; i++){
		cout<<"   ";
		for(int j=0; j<3; j++){
			cout<<" "<<*(*(matriz+i)+j);
		}
		cout<<"\n";
	}
}
