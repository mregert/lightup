#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <list>


class Archivo
{

public:

    Archivo();
    ~Archivo();

    void agregarLinea(const std::string & linea);
    void cargarArchivo(std::string direccionEntrada);
    bool vacio() const;
    int longuitud() const;
    std::string obtenerCadena(int posicion) const;

private:

    std::list<std::string> archivo;

};

#endif // ARCHIVO_H
