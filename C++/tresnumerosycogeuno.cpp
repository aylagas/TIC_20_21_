#include<stdio.h>
int main(){
	int num1,num2,num3;
	int mayor;
	printf("Introduce el numero 1: ");
	scanf("%d",&num1);
	printf("Introduce el numero 2: ");
	scanf("%d",&num2);
	printf("Introduce el numero 3: ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		mayor=num1;
	}
	if(num2>num1 && num2>num3){
		mayor=num1;
	}
	if(num3>num2 && num3>num1){
		mayor=num1;
	}
	printf("El mayor es ",num3);
	return 0;
}
