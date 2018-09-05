#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ui.h"

/* the first argument */
#define F_ARG 1

/* length of the options string should be at max 2 -i/h/v */
#define OPT_LEN 2

/*
 * flag enum
 */
enum boolean {
	T_FALSE,
	T_TRUE
};

#endif
