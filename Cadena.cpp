#include "Cadena.h"
#include <cstring> // funciones strcpy, strlen
#include <iostream>

Cadena::Cadena(int tam)
{
    m_tam = tam;
    m_arreglo = new char[tam];
    m_arreglo[0] = '\0';
}

Cadena::Cadena(const Cadena& otro)
// : Cadena(otro.m_arreglo)
{
    m_tam = otro.m_tam;
    m_arreglo = new char[m_tam];
    strcpy(m_arreglo, otro.m_arreglo);    
}

Cadena::Cadena(const char *c_cad)
{
    m_tam = strlen(c_cad) + 1;
    m_arreglo = new char[m_tam];
    strcpy(m_arreglo, c_cad);
}

Cadena::~Cadena()
{
    std::cout << "Destruyendo la cadena: " << m_arreglo << std::endl;
    delete [] m_arreglo;
}

void Cadena::imprime() const
{
    std::cout << "Cadena tamaño: " << m_tam << " y contenido: ";
    std::cout << m_arreglo << std::endl;
}

const Cadena& Cadena::operator=(const Cadena& c2)
{
    char *aux = this->m_arreglo;
    this->m_arreglo = new char[c2.m_tam];
    strcpy(this->m_arreglo, c2.m_arreglo);
    this->m_tam = c2.m_tam;
    delete [] aux;
    return c2;
}
