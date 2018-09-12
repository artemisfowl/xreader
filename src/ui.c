/**
 * @file ui.c
 * @author sb
 */

#include "../inc/ui.h"

/*
 * @brief function to set up the UI
 */
int ui_setup(char *filepath)
{
	if (!filepath)
		return 0;
	else
		printf("Filepath : %s\n", filepath);
	return 1;
}
