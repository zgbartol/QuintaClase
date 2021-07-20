#include <iostream>
using namespace std;

int main() {
    double diametro {1};
    constexpr double pi=3.14159265;
    cout  << endl;
    do
    {
        cout << endl << "Ingrese el diámetro, 0 para salir  ";
        cin >> diametro;
        if (!diametro) {
            cout << endl << "Gracias por usar este programa "<< endl;
        } else {
        cout << endl << "El largo de la circunferencia es "<< diametro * pi << endl;
        }
    } while(diametro);
	return 0;
}
