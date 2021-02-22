#include<stdio.h>

int main(){
	int cont,num;
	int tabla;
	printf("Introduce un numero del que quieras ver la tabla: ");
	scanf("%d",&tabla);
	printf("************************\n");
	printf("*     Tabla del %D     *\n");
	printf("************************\n");
	for(cont=0;cont<=10;cont++){
		// Intrusccion Input/Output
		printf("%d x %d = %d\n",tabla,cont,tabla*cont);
	}
	return 0;
}
