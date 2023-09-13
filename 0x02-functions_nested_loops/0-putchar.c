#include "main.h"
#include <unistd.h>
#include <stddef.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	const char message[] = "_putchar\n";
	size_t length = sizeof(message) - 1;

	write(1, message, length);
	return (0);
}
