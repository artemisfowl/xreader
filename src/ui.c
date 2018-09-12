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
		gtk_init(NULL, NULL);
		gtk->ui_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
		gtk_window_set_default_size(GTK_WINDOW(gtk->ui_window),
				UI_GTK_WIN_HEIGHT, UI_GTK_WIN_WIDTH);


		/* registering only the callbacks */
	}
	return 1;
}
int ui_close_win(GtkWidget *win)
{
	gtk_widget_destroy(win);
	return TRUE;
}
