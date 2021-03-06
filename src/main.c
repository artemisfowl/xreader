/*
 * @file main.c
 * @author sb
 * @brief program to read EPUB files
 */

#include "../inc/main.h"

/* TODO Section:
 * 1. First check the name of the file provided in the CLI arguments
 * 2. Check if the web_view in the ui module supports scrolling of text or not
 * 3. Check key handling for the GTK+ widget and loading of different resources
 */

/*
 * options list
 * -h = display help information
 * -i = input file will be following
 * -v = version information of the program
 */

/*
 * @function display_help
 * @brief function to diaply the help information about the program
 */
void display_help(void)
{
	printf("\t-h : Display the help information\n"
			"\t-i : need to provide the filepath after this\n"
			"\t-v : show the version information\n");
}

/*
 * @function display_usage
 * @brief function to display the usage of the program to the user
 */
void display_usage(void)
{
	printf("Usage Instructions:\nxreader -[options[filepath]]\n");
	display_help();
}

/*
 * @function display_version
 * @brief function to display the version information about the program
 */
void display_version(void)
{
	printf("xreader-devel-version\n");
}

int main(int argc, char *argv[])
{
	enum boolean af = T_FALSE; /* accept file flag */
	struct ui_gtk gtk;

	/* parse the arguments passed to the function */
	argv++; 		/* increment to point to the first arg */
	argc--;			/* decrement to match the count of arg parse */
	while(argc--) {
		if (**argv == '-') {
			/* if the options are mixed up, exit.
			 * only one option to be specified after the '-'
			 * charcater */
			if (strlen(*argv) > OPT_LEN) {
				printf("Error in options provided\n");
				display_usage();
				exit(0);
			}

			/* ignore the first '-' character */
			unsigned long l = F_ARG;
			while(l < strlen(*argv)) {
				switch (*(*(argv) + l)) {
					case 'h':
						display_help();
						exit(0);

					case 'i':
						if (argc)
							af = T_TRUE;
						else
							printf("ERROR : "
								"filename not "
								"provided\n");
						break;

					case 'v':
						display_version();
						exit(0);

					default:
						display_usage();
						exit(0);
				}
				l++;
			}
		}
		argv++;

		if (af)
			break;
	}

	/* check where argv is pointing now */
	if (af)
		ui_setup(*argv, &gtk);

	return 0;
}
