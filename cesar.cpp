#include <iostream>
using namespace std;

int main() {
    // Declaro los strings de entrada IN y OUT para encriptar caracter por caracter
    char strIN[80]{""}, strOUT[80]{""};
    // ----Ingreso strIN---
    cout << "Ingrese cadena a cifrar <Enter> para salir ";  cin >> strIN;

    //Loop principal que cifra en modo Cesar la cadenaIN
    for (int i=0; i<80;i++) {
        strOUT[i] = (strIN[i]+3)%256;
        if (strIN[i]=='.') i=80; 
        // fuerzo la salida del for, no esta muy bien, esto quiere decir que es un while
        // Podria ser while (strIN[i]!='.') {strOUT[i] = (strIN[i]+3)%256;i++}
    }
    // ---- Muestro salida 
    cout << "Cadena cifrada " << strOUT << endl;

    return 0;
}
