#include <iostream>

int main() {
    /*
    Primeramente veamos la familia de los números enteros, 
    que son los números con que contamos tanto para
    atrás como para adelante
    */
    
    char letra{'a'}, numerito{127}; 
    // se puede utilizar char para almacenar enteros pequeños
    
    
    signed char numeroneg{-128}; 
    //como el anterior, pero especifica que hay números negativos
    
    
    unsigned char numeritomasgrande {255}; 
    //utilizo todos los bits y puedo cargar números más grandes
    
        
    signed short int enterocorto {-32768}; 
    // entero corto, 16 bits para almacenarlo


    signed int numeroentero{-2147483648};
    
    // entero de 4 bytes
    
    signed long int numeroenterogrande{-9223372036854775807};
    unsigned long int numerazodegrande{1844674413709551614},resultadoentero{0};
    
    letra = 'b';
    
    resultadoentero = numerazodegrande + numeroenterogrande+ numeroentero + enterocorto;
    
    numeritomasgrande = resultadoentero; //perdida de datos!!!
    
    
    
    std::cout <<  "\n"<<long(numeritomasgrande)<< "\n"<< resultadoentero << "\n";
    
    std::cout << numerazodegrande << "\n"<< numeroentero << "\n"<< enterocorto<< "\n";
    /*
    Ahora vamos a trabajar un poco con los números double que corresponden en matemáticas a 
    los números racionales. Desde el punto de vista rigurosamente matemático no es posible 
    almacenar números reales en una computadora, porque para ello debería tener una capacidad
    infinita de memoria. 
    */
    
    long double racional{99.97d};
    
    long double grandote{2.244e45d};
    
    double resultado;
    
    resultado = grandote*racional;
    
    std::cout<<"\n"<<resultado<< "\n"<<grandote/resultado<<"\n"<< racional/grandote;
    
    
    return 0;
}