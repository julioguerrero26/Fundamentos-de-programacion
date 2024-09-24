#include <stdio.h>
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
void gotoxy(int x, int y) {
    COORD coord;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(hConsoleOutput, coord);
}

void conejo1(int x, int y) {
    gotoxy(x, y + 1);
    printf("( ) ( )\n");
    gotoxy(x, y);
    printf("(>o.o<)\n");
    gotoxy(x, y - 1 );
    printf("( ) ( )\n");
}

void conejo2(int x, int y) {
    gotoxy(x, y + 1);
    printf("( ) ( )\n");
    gotoxy(x, y);
    printf("(>o.o<)\n");
    gotoxy(x, y - 1 );
    printf("( ) ( )\n");
}

int main() {
    conejo1(10, 5);
    conejo2(50, 5);
    getchar();
    return 0;
}