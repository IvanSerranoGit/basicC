#include <stdio.h>

// ejemplo que no duplica

/*
void duplicar (int a){
	a *= 2;
}

int main(){
        int a=5;
        printf("antes de duplicar a = %d\n " , a);
	duplicar(a);
	printf("despues  de duplicar a = %d\n " , a);
}
*/

void duplicar (int * a){
       *  a *= 2;
}

int main(){
        int a=5;
        printf("antes de duplicar a = %d\n " , a);
        duplicar(&a);
        printf("despues  de duplicar a = %d\n " , a);
}
