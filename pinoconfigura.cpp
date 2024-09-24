#include <cstdio>
#include <stdlib.h>
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

void printBall(int posX, int posY, int color) {
    COORD coord;
    coord.X = posX;
    coord.Y = posY;
    SetConsoleCursorPosition(hcon, coord);
    setcolor(color);
    printf("o");
}

int main(int argc, char *argv[]) {
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    system("mode 173, 44");
    
    // Imprimir el árbol
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
    
    // Imprimir el tronco
    setcolor(MAGENTAB);
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");
    printf("                  xxx\n");

    // Imprimir muchas esferas de colores esparcidas
    int spheres[][3] = {
        {21, 5, ROJO}, {20, 6, AZUL}, {22, 6, CYAN},
        {19, 7, VERDE}, {21, 7, MAGENTA}, {23, 7, AMARILLO},
        {18, 8, ROJO}, {20, 8, BLANCO}, {22, 8, CYAN},
        {19, 9, VERDEB}, {21, 9, MAGENTAB}, {23, 9, AMARILLOB},
        {20, 10, ROJO}, {18, 10, AZUL}, {22, 10, GRIS},
        {21, 11, CYANB}, {19, 11, AMARILLO}, {23, 11, MAGENTA},
        {20, 12, VERDE}, {22, 12, ROJOB}, {21, 13, AMARILLOB},
        {18, 12, AMARILLO}, {23, 10, ROJO}, {21, 8, AZUL}
    };

    for (auto& sphere : spheres) {
        printBall(sphere[0], sphere[1], sphere[2]);
    }

    // Restablecer el color
    setcolor(BLANCO);
    
    return 0;
}
