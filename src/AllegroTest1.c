/*
 ============================================================================
 Name        : AllegroTest1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <allegro.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	ALLEGRO_DISPLAY* display = NULL;

	al_init();
	display = al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(100, 200, 5));
	al_flip_display();
	al_rest(10.0);
	al_destroy_display(display);

	return EXIT_SUCCESS;
}
