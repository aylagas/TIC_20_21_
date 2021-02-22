#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
	
}
int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla;
	for(cont=0;cont<=3;cont++){
		printf("\nTurno %d. ORDENADOR. Presione cualquier tecla: ");
		scanf("%c",/&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		printf("\nTurno %d. ORDENADOR. Presione cualquier tecla: ");
		scanf("%c",/&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
	}
	return 0;
}
