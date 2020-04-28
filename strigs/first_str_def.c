#include <stdio.h>

int main()
{
	char * name = "Ivan";

		printf("Nombre = %s, (%p)\n", name, name);
	
	for (int i = 0; i<4; i++){
		printf("name[%d](%p)=%c\n",i,name+i,name[i]);
}

	return 0;
}
