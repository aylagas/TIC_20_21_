#include<stdio.h>

int col;
int arbol(int fila){
	for (fila=1,fila<=altura;fila++){
		for(col=1;col<=fila,col++){
			printf("*");
		}
	printf("\n")	
	}
}
int main;{
	int fila();
	printf("Introduce la altura del arbol: ");
	scanf("%d",&arbol);
	return 0;
}
