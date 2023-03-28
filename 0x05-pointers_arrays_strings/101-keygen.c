#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_LENGTH 6
#define MAX_LENGTH 12

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int length = rand() % (MAX_LENGTH - MIN_LENGTH + 1) + MIN_LENGTH;
	char password[length + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	srand(time(NULL));

	for (i = 0; i < length; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[length] = '\0';
	printf("Password for 101-crackme: %s\n", password);
	return (0);
}
