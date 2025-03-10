#include <iostream>
#include <windows.h> 
using namespace std;

#define ALTURA 20

int torres[ALTURA];
int pisos[ALTURA];
int alturas[3];

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

enum Color { RED = 12, GREEN = 10, YELLOW = 14, BLUE = 9, MAGENTA = 13, WHITE = 15 };

void dibujar_piso(int p, int ancho_torre);

int main() {
    torres[5] = 0;
    torres[6] = 0;
    torres[7] = 0;
    torres[8] = 0;
    torres[9] = 0;
    torres[10] = 0;
    torres[11] = 0;
    torres[12] = 0;
    torres[13] = 0;
    torres[14] = 0;
    torres[15] = 0;
    torres[16] = 0;
    torres[17] = 0;
    torres[18] = 0;
    torres[19] = 0;

    torres[4] = 0;
    torres[3] = 0;
    torres[2] = 1;
    torres[1] = 1;
    torres[0] = 1;

    pisos[3] = 16;
    pisos[4] = 15;
    pisos[5] = 14;
    pisos[6] = 13;
    pisos[7] = 12;
    pisos[8] = 11;
    pisos[9] = 10;
    pisos[10] = 9;
    pisos[11] = 8;
    pisos[12] = 7;
    pisos[13] = 6;
    pisos[14] = 5;
    pisos[15] = 4;
    pisos[16] = 3;
    pisos[17] = 2;
    pisos[18] = 1;
    pisos[19] = 0;

    pisos[2] = 0;
    pisos[1] = 1;
    pisos[0] = 2;

    alturas[0] = 17;
    alturas[1] = 3;
    alturas[2] = 0;

    int ancho_torre = 41 + 2;

    for (int i = ALTURA - 1; i >= 0; i--)
        dibujar_piso(i, ancho_torre);
    
    SetConsoleTextAttribute(hConsole, WHITE);
    cout << string(ancho_torre, '-') << " " 
         << string(ancho_torre, '-') << " " 
         << string(ancho_torre, '-') << endl;
    
    cout << string((ancho_torre - 1) / 2, ' ') << "A" 
         << string((ancho_torre - 1) / 2, ' ') << " "
         << string((ancho_torre - 1) / 2, ' ') << "B" 
         << string((ancho_torre - 1) / 2, ' ') << " "
         << string((ancho_torre - 1) / 2, ' ') << "C" << endl;

    cout << "Presiona Enter para salir...";
    cin.get();
    cin.get();  

    return 0;
}

void dibujar_piso(int p, int ancho_torre) {
    for (int j = 0; j < 3; j++) {
        bool dibujado = false;

        for (int i = 0; i < ALTURA; i++) {
            if (pisos[i] == p && torres[i] == j) {
                int ancho_disco = (i + 1) * 2 + 1; 
                int espacios = (ancho_torre - ancho_disco) / 2;

                int color;
                switch (i % 5) {
                    case 0: color = RED; break;
                    case 1: color = GREEN; break;
                    case 2: color = YELLOW; break;
                    case 3: color = BLUE; break;
                    case 4: color = MAGENTA; break;
                }
                SetConsoleTextAttribute(hConsole, color);

                cout << string(espacios, ' ') << string(ancho_disco, '=') << string(espacios, ' ');
                SetConsoleTextAttribute(hConsole, WHITE);
                dibujado = true;
                break;
            }
        }

        if (!dibujado) {
            SetConsoleTextAttribute(hConsole, WHITE);
            cout << string(ancho_torre / 2, ' ') << "|" << string(ancho_torre / 2, ' ');
        }

        cout << " ";
    }
    cout << endl;
}
