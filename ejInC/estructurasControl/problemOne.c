#include <stdio.h>

int limiteInferior = 100;
int limiteSuperior = 200;
int numero;

	int main (){
		printf("Proporciona un numero entero\n");
		scanf("%d",&numero);

		if (numero >= limiteInferior){
			if (numero <= limiteSuperior){
			printf("El numero esta dentro de los limites, numero: %d\n", numero);
			}else
				printf("El numero supera el limite maximo, numero: ,%d\n", numero);
		}else
			printf("El numero no alcanza el limite minimo, numero: %d\n", numero);	

	return 0;
}
