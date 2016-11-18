#include "Cadena.h"

// const Cadena& operator=(Cadena& c1, const Cadena& c2);

int main(int argc, char **argv)
{
    Cadena c1;
    Cadena c2(10);

    {
        Cadena c3("hola");
    
        c1.imprime();
        c2.imprime();
        c3.imprime();
        c1 = c2 = c3;
    }
    c1.imprime();
    c2.imprime();
}



