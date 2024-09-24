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
HANDLE hConsoleOutput;

void setcolor(int color)
{
    SetConsoleTextAttribute(hcon,color);
}

int main(int argc, char *argv[]) {
    int i, j, c;
    char s[120]= "Hola somos el equipo 3 y estamos en el itspr";
    hcon=GetStdHandle   ( STD_OUTPUT_HANDLE);
    system(" mode 173, 44 ");
    setcolor(AMARILLO);
    printf( "                   x\n");
    setcolor(VERDEB);
    printf( "                  xxx\n");
    printf( "                 xxxxx\n");
    printf( "                xxxxxxx\n");
    printf( "               xxxxxxxxx\n");
    printf( "              xxxxxxxxxxx\n");
    printf( "             xxxxxxxxxxxxx\n");
    printf( "            xxxxxxxxxxxxxxx\n");
    printf( "           xxxxxxxxxxxxxxxxx\n");
    printf( "          xxxxxxxxxxxxxxoxxxx\n");
    printf( "         xxxxxxxxxxxxxxxxxxxxx\n");
    printf( "        xxxxxxxxxxxxxxxxxxxxxxx\n");
    printf( "       xxxxxxxxxxxxxxxxxxxxxxxxx\n");
    setcolor(MAGENTAB);
    printf( "                  xxx\n");
    printf( "                  xxx\n");
    printf( "                  xxx\n");
    printf( "                  xxx\n");
    printf( "                  xxx\n");
}
