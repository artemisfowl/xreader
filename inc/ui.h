#ifndef UI_H
#define UI_H

#include <gtk/gtk.h>
#include <webkit2/webkit2.h>
#include "epub.h"

/**
 * @brief default height of GtkWidget
 */
#define UI_GTK_WIN_HEIGHT 800

/**
 * @brief default width of GtkWidget
 */
#define UI_GTK_WIN_WIDTH 600


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

/**
 * @brief function to close the GTK main window
 */
void ui_destroy_win(void);

/**
 * @brief function to close the main window
 */
int ui_close_web_view(GtkWidget *win);

#endif
