#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char name[100];
	
	printf("Cual es tu Nombre?\n");
	scanf("%100s", name);
	
	printf ("Hola %s", name);
	printf(", Bienvenido!");
	
	return 0;
}
