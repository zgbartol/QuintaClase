#include <iostream>

using namespace std;

int main() {
    double diametro {1};
    constexpr double pi=3.14159265;
    cout  << endl;
    char mensajeHabitual [38] ="Ingrese el diámetro, 0 para salir  ";
    char agradeceporUsar [38] {"Gracias por usar este programa "};
    char mensajeResultado [38] {"El largo de la circunferencia es "};
    do
    {
        cout << endl << mensajeHabitual;
        cin >> diametro;
        if (!diametro) {
            cout << endl <<agradeceporUsar << endl;
        } else {
        cout << endl << mensajeResultado << diametro * pi << endl;
        }
    } while(diametro);
	return 0;
}
