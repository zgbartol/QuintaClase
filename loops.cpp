#include <iostream>
using namespace std;

int main() {
    double diametro {1};
    constexpr double pi=3.14159265;
    cout  << endl;
    do
    {
        cout << endl << "Ingrese el diámetro"<< endl;
        cin >> diametro;
        cout << endl << "El largo de la circunferencia es "<< diametro * pi << endl;

    } while(diametro!=0);
	return 0;
}
