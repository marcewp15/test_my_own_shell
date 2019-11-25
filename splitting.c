#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Prueba de comando";
	char *tok = strtok(str, " ");
	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, " ");
	}
	return (0);
}
