#include <stdio.h>
#include <string.h>

int main()
{
	char * name = "Ivan";
	char * otherName = "Juan";

	printf("Los nombres son   %s \n", strcmp(name, otherName) == 0 ? "iguales" : "distintos");

	return 0;
}
