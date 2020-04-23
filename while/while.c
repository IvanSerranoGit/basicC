#include <stdio.h>
int main (){
	int n = 1, acum = 0;

	while (acum < 10){
 		acum += n;
		printf("El valor de acum es   %d \n", acum);
		n++;
		printf("El valor de n es: %d \n", n);
}
	return acum;
}
