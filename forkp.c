#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid1;
	pid_t pid2;
	printf("Before fork\n");
	pid1 = fork();
	if (pid1 == 0)
	{
		pid2 = fork();
	}
	if (pid1 == -1 || pid2 == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	return (0);
}
