/*
 * Gui.c
 *
 *  Created on: Feb 19, 2016
 *      Author: edderpc
 */
//importa libreria de Allegro para interfaz grafica
#include <allegro.h>

//Las imágenes en Allegro siempre se deben definir de tipo BITMAP
BITMAP *mi_sprite;

//crea una ventana de 840 x 560
int main()
{
	//es la que instala los componentes fundamentales de la biblioteca Allegro
    allegro_init();

    //Esta función instala todas las rutinas del teclado, esta función podremos checar qué teclas están siendo presionadas
    //y poder hacer lo que queramos de acuerdo a ello
    install_keyboard();

    //Con esta función hacemos que nuestro juego tenga una profundidad de color de 32-bits
    set_color_depth(32);

    //Está función creará una ventana de 840x560 píxeles
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 840, 560, 0, 0);

    //para cargar una imagen que tengamos en el ordenador, debemos hacerlo con la función load_bitmap
    //Puede ser una imagen BMP, TGA, LBM o PCX
    mi_sprite = load_bitmap("/home/edderpc/workspace/Crazy_Break_Out/fondo.bmp", NULL);

    //dibuja en pantalla la imagen cargada
    draw_sprite(screen, mi_sprite, 0, 0);

    //Con esta función hacemos que nuestro juego se pause hasta que una tecla sea presionada, puede ser cualquier tecla
    readkey();

    return 0;
}
//Todos los programas diseñados con Allegro deben tener esta función, al final de la última llave de la función main().
// En otro caso, nos dará un error
END_OF_MAIN()



