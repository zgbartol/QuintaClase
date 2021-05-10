#include <iostream>
#include <string.h>
// using namespace std; 
// comentamos esto para invocar los objetos diciendo la 
// biblioteca de donde proviene el objeto cada vez que lo utilizamos
// veamos como se complica la notacion.
// creamos una variable llamado calificacionPrograma inicializándola con -5
// vamos a ver todos los tipos predefinidos en C++
//------------------------------------------------

int main() {
    auto MensajeInicial {"\nBienvenidos a la encuesta de calidad\n"};
    // auto es una palabra clave que establece el tipo de datos de la variable a partir de su contexto
   // auto calificacionPrograma{-6}; esta es una manera moderna de definir tipos de variables implicitamente
    auto calificacionPrograma{6};
   // int calificacionPrograma;
    std::cout << MensajeInicial << "\n\t\t\tEn una escala de -5 a +5. ¿Cómo evaluaría este programa?\n" ;
    while (calificacionPrograma > 5 || calificacionPrograma < -5 )
        {
            std:: cout << "\n\nIngrese, por favor, un número entre -5 y +5: \n\n";
            std:: cin >> calificacionPrograma ;
        }
           std:: cout << std::endl <<" La calificación es  .... "<<calificacionPrograma << std::endl;
    return 0;
}
