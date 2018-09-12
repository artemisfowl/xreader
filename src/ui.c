/**
 * @file ui.c
 * @author sb
 */

#include "../inc/ui.h"

/*
 * @brief function to set up the UI
 */
int ui_setup(char *filepath, struct ui_gtk *gtk)
{
	if (!filepath && !gtk) {
		return 0;
	} else {
		printf("Filepath : %s\n", filepath);
	}
	return 1;
}
