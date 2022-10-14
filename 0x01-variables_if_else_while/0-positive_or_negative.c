#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * a random number to the variable n each time it is executed
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
