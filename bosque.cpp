#include <iostream>
#include <vector>

using namespace std;

void printTree(int height) {
    for (int i = 0; i < height; ++i) {
        // Imprime espacios en blanco para alinear el árbol
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }
        // Imprime las "x" del árbol
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "x";
        }
        cout << endl;
    }
    // Imprime el tronco del árbol
    for (int i = 0; i < height / 2; ++i) {
        for (int j = 0; j < height - 1; ++j) {
            cout << " ";
        }
        cout << "x" << endl;
    }
}

int main() {
    int forestWidth = 5; // Número de árboles en el bosque
    int treeHeight = 5;  // Altura de cada árbol

    vector<int> treeSpacing(forestWidth);

    // Imprime el bosque con varios árboles
    for (int i = 0; i < forestWidth; ++i) {
        printTree(treeHeight);
        if (i < forestWidth - 1) {
            // Deja espacio entre los árboles
            cout << endl;
        }
    }

    return 0;
}
