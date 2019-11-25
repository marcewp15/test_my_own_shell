#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *buf;
	size_t sizebuf = 0;
	size_t inputchar;

	buf = malloc(sizebuf * 1);

	if (buf == NULL)
	{
		perror("Unable to allocate buffer"), exit(1);
	}

	write(STDOUT_FILENO, "$ ", 2);

	inputchar = getline(&buf, &sizebuf, stdin);
	write(STDOUT_FILENO, buf, inputchar);
	free(buf);
	return (0);
}
