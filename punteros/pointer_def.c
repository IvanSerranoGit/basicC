#include <stdio.h>

int main(){
	int number = 189;
	int * pointToNumber = &number;
	
	printf(" %p, %d  \n ", pointToNumber, * pointToNumber); 
}
