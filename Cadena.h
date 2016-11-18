#ifndef CADENA_H
#define CADENA_H

class Cadena
{
public:
    Cadena(int tam=1);
    Cadena(const Cadena& otro);
    Cadena(const char *c_cad);
    ~Cadena();
    void imprime() const;
    const Cadena& operator=(const Cadena& c2);
private:
    char *m_arreglo;
    int m_tam;
};

#endif // CADENA_H
