#ifndef UI_H
#define UI_H

#include <gtk/gtk.h>
#include <webkit2/webkit2.h>
#include "epub.h"

/**
 * @brief structure to hold the GTKWindow handles
 */
struct ui_gtk {
	GtkWidget *ui_window;
};

/**
 * @brief function to setup the UI and start processing the file
 */
int ui_setup(char *filepath, struct ui_gtk *gtk);

#endif
