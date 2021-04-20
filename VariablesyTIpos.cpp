#include <iostream>
#include <string.h>
using namespace std;
//Uso de variables para tipos predefinidos
// vamos a ver todos los tipos predefinidos en C++
//------------------------------------------------

int main() {
    string nombreUsuario,apellidoUsuario;
    int edadanualUsuario, edadmensualUsuario, edaddiasUsuario;


    cout << "\n\n";
    cout << "Hola estimado usuario!";
    cout << "Este programa le permite a usted ver \n";
    cout << "su nombre impreso despues del mensaje\n";
    cout << "\n\nIngrese, por favor, su nombre: ";
    cin >> nombreUsuario;
    cout << "\n\nIngrese, por favor, su apellido: ";
    cin >> apellidoUsuario;
    cout << "\n\nIngrese por favor cuantos anios tiene: ";
    cin >> edadanualUsuario;
    cout << "\n\nHola Bienvenido " + nombreUsuario + " " +apellidoUsuario + "\n";
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout << "Usted dice tener " << edadanualUsuario << "anios\n";
    edadmensualUsuario = edadanualUsuario*12;
    edaddiasUsuario = edadmensualUsuario*30;
    cout << "\nque equivale aproximadamente a  "<< edaddiasUsuario <<" dias\n"; 
    return 0;
}
