#include <stdio.h>
#include <stdlib.h>

#include<windows.h>

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

HANDLE hcom;
HANDLE hConsoleOutput;

void setcolor(int color)
{
    SetConsoleTextAttribute(hcom,color);
}

int main(int argc, char *argv[]) {
    int i, j, c;
    char s[80] = "Y ESTAMOS EN EL ITSPR ";
    hcom=GetStdHandle(STD_OUTPUT_HANDLE);
    system(" mode 173, 44");
    setcolor(CYANB);
    printf(" XX HOLA SOMOS EL EQUIPO 3          -> %s <-xx\n", s);
    setcolor(BLANCO);
    printf(" XX HOLA SOMOS EL EQUIPO 3          -> %s <-xx\n", s);
    setcolor(ROJOB);
    printf(" XX HOLA SOMOS EL EQUIPO 3          -> %s <-xx\n", s);
    getchar();
    return 0;
}