#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tortuga1(int x, int y) {
    gotoxy(x, y);
    printf("   --");
    gotoxy(x, y + 1);
    printf("_//_\\\\=0");
    gotoxy(x, y + 2);
    printf(" ^    ^");
}

void tortuga2(int x, int y) {
    gotoxy(x, y + 2);
    printf("   --");
    gotoxy(x, y + 1);
    printf("_//_\\\\=0");
    gotoxy(x, y);
    printf(" ^    ^");
}

int main() {
    // Puedes probar las funciones aquí
    tortuga1(10, 5);
    Sleep(10000); // Espera 2 segundos
    system("cls"); // Limpia la pantalla
    tortuga2(10, 5);
    return 0;
}
