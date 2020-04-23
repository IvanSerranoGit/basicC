#include<stdio.h>
int main (){
	int n = 1, acum = 10;
	do{
		acum += n;
		n++;
	}while (acum < 10);
	printf("El valor de acum es: %d \n", acum);

	return acum;

}

