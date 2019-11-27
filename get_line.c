#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *buf;
	size_t sizebuf = 1024;
	size_t inputchar;
	int cont;

	buf = malloc(sizebuf * 1);

	if (buf == NULL)
	{
		perror("Unable to allocate buffer"), exit(1);
	}

	while (1)
	{
		cont++;
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
			inputchar = getline(&buf, &sizebuf, stdin);
			if(inputchar == EOF)
			{
				write(STDOUT_FILENO, "\n" , 1);
				free(buf);
				exit(0);
			}
			write(STDOUT_FILENO, buf, inputchar);
			/*_error(av[0], buf);*/
		}
		else
		{
			inputchar = getline(&buf, &sizebuf, stdin);
			write(STDOUT_FILENO, buf, inputchar);
			/*_error(av[0], buf);*/
			break;
		}
	}
	free(buf);
}
