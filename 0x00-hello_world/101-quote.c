#include <string.h>
#include <unistd.h>
/**
 * main - writes sentence to the standard error
 * Return: Always (1)
 */




int main(void)
{

	const char *words;

	words = "and that piece of art is useful\" - Dora Korpar\
, 2015-10-19\n";

	write(2, words, strlen(words));
	return (1);
}
