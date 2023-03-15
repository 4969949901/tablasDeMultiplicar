#include <iostream>
using namespace std;
//Alumna Helen Acevedo Tobar carne 0909-21-1802 Programcion I
//mostrar en pantalla las tablas de multiplicar de 2, 4 y 6
//puntos 2 saque 1/2 jeje

//resuelto el 23 de febrero 2023 18:04 a los 5 minutos de haber empezado jaja

int main() {
    int  numero,nume, a, b, c;

    // CALIFICADO
    while (numero < 11) {

        a = numero * 2;
        cout << "2 x " << numero << " = " << a << endl;
        numero = numero + 1;

    }
    cout << "\n";
    for (int i=1 ; i <= 10; i++) {
            b = 4 * i;
            cout << "4 X " << i<< " = " << b << endl;

        }
    cout << "\n";
    while (nume < 11) {
        c = nume * 6;
        cout << "6 x " << nume << " = " << c << endl;
        nume = nume + 1;

    }

        return 0;

    }

