#include <cstdio>
#include <cstdlib>
#include <windows.h>

#define NEGRO 0
#define AZUL 1
#define VERDE 2
#define CYAN 3
#define ROJO 4
#define MAGENTA 5
#define AMARILLO 6
#define BLANCO 7
#define GRIS 8
#define AZULB 9
#define VERDEB 10
#define CYANB 11
#define ROJOB 12
#define MAGENTAB 13
#define AMARILLOB 14
#define BLANCOB 15

HANDLE hcon;

void setcolor(int color) {
    SetConsoleTextAttribute(hcon, color);
}

void dibujarPantalla() {
    // Inicializar el manejador de consola
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Configurar la consola
    system("mode 173, 44");

    // Dibujar la primera parte
    setcolor(AMARILLO);
    printf("                   x\n");
    setcolor(VERDEB);
    printf("                  xxx\n");
    printf("                 xxxxx\n");
    printf("                xxxxxxx\n");
    printf("               xxxxxxxxx\n");
    printf("              xxxxxxxxxxx\n");
    printf("             xxxxxxxxxxxxx\n");
    printf("            xxxxxxxxxxxxxxx\n");
    printf("           xxxxxxxxxxxxxxxxx\n");
    printf("          xxxxxxxxxxxxxxoxxxx\n");
    printf("         xxxxxxxxxxxxxxxxxxxxx\n");
    printf("        xxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("       xxxxxxxxxxxxxxxxxxxxxxxxx\n");

    // Dibujar la segunda parte
    setcolor(MAGENTAB);
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");
}

int main(int argc, char *argv[]) {
    dibujarPantalla();
    return 0;
}
