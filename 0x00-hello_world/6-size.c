#include <stdio.h>
/**
 * main - A program that prints the size of various variables
 * Return: Return (0) success
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld \n", sizeof(int));
	printf("size of a long int: %ld \n", sizeof(long int));
	printf("size of a long long int: %lu \n", sizeof(long long int));
	printf("size of float: %ld \n", sizeof(float));
	return (0);
}
