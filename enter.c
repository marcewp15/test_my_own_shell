#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = argc;
	int pos = 0;
	while(argv[pos] != NULL){
		printf("%s\n", argv[pos]);
		pos++;
	}
	return 0;
}
