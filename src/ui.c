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

		/* create a browser instance */
		WebKitWebView *web_view = WEBKIT_WEB_VIEW(
				webkit_web_view_new());

		/* put the browser area in the main window */
		gtk_container_add(GTK_CONTAINER(gtk->ui_window),
				GTK_WIDGET(web_view));

		/* setting up the callbacks so that if either the main window
		 * or the browser instance is closed, the program will exit */
		g_signal_connect(gtk->ui_window, "destroy",
				G_CALLBACK(ui_destroy_win), NULL);
		g_signal_connect(gtk->ui_window, "close",
				G_CALLBACK(ui_close_web_view), gtk->ui_window);

		/* load a web page into the browser instance - provide the
		 * absolute path to the html file being loaded
		 * Later this is the part where the file from the EPUB file
		 * archive will be read and displayed */
	}
	return 1;
}

void ui_destroy_win(void)
{
	gtk_main_quit();
}
int ui_close_web_view(GtkWidget *win)
{
	gtk_widget_destroy(win);
	return TRUE;
}
