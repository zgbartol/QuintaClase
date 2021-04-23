#include <iostream>
#include <string.h>
// using namespace std;
//Uso de variables para tipos predefinidos
// vamos a ver todos los tipos predefinidos en C++
//------------------------------------------------

int main() {
    auto MensajeInicial {"Bienvenidos a la encuesta de calidad"};
    auto calificacionPrograma{-5};
    std::cout << std::string(MensajeInicial) + " En una escala de -5 a +5. ¿Cómo evaluaría este programa?\n" ;
    std:: cin >> calificacionPrograma ;
    std:: cout << calificacionPrograma;
    return 0;
}
