/*
 * @file main.c
 * @author sb
 * @brief program to read EPUB files
 */

#include <stdio.h>

/* TODO Section:
 * 1. First check the name of the file provided in the CLI arguments
 */

/*
 * options list
 * -h = display help information
 * -i = input file will be following
 * -v = version information of the program
 */

int main(int argc, char *argv[])
{
	printf("xReader-devel-version\n");

	/* parse the arguments passed to the function */
	argv++; 		/* increment to point to the first arg */
	argc--;			/* decrement to match the count of arg parse */
	while(argc--) {
		/* perform a switch on the options provided */
		if (**argv == '-')
			printf("%s\n", *argv);
		/* ERROR : not parsing options when passed at the end of the
		 * arglist */
		argv++;
	}

	/* customary return */
	return 0;
}
