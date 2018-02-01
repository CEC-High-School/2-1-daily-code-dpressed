#include <iostream>
#include <allegro5\allegro5.h>
#include <allegro5\allegro_primitives.h>

using namespace std;

int main(int argc, char **argv) {

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *shape1 = NULL;


	al_init();

	al_init_primitives_addon();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_line(10, 10, 400, 10, al_map_rgb(55, 240, 20), 3);

	al_draw_filled_pieslice(200, 300, 50, 180, -3600, al_map_rgb(55, 240, 20));

	al_draw_arc(50, 100, 48, 240, -500, al_map_rgb(0, 255, 0), 6);

	al_flip_display();

	al_rest(10);

	al_destroy_bitmap(shape1);
}
