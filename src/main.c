/*
 * @file main.c
 * @author sb
 * @brief program to read EPUB files
 */

#include <stdio.h>

/* TODO Section:
 * 1. First check the name of the file provided in the CLI arguments
 */

int main(int argc, char *argv[])
{
	printf("xReader-devel-version");

	/* parse the arguments passed to the function */
	while(argc--)
		printf("%s\n", *argv++);

	/* customary return */
	return 0;
}
