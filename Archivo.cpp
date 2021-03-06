#include <string>
#include <fstream>
#include <iostream>
#include "Archivo.h"
#include <list>

Archivo::Archivo()
{

}

Archivo::~Archivo()
{

}


bool Archivo::vacio() const
{
    return archivo.size()==0;
}


std::string Archivo::obtenerCadena(int posicion) const
{
    auto iterator = std::begin(archivo);
    int i = 1;
    while (iterator != std::end(archivo))
    {
        if (i == posicion)
            return *iterator;
        i++;
        iterator++;
    }
}



int Archivo::longuitud() const
{
    return archivo.size();
}


void Archivo::agregarLinea(const std::string & linea)
{
    archivo.push_back(linea);
}


void Archivo::cargarArchivo(std::string direccionEntrada)
{
    std::ifstream archEntrada;
    std::string linea;
    archEntrada.open(direccionEntrada.c_str());

    if (archEntrada.is_open())
    {
        archEntrada >> linea;
        while (!archEntrada.eof())
        {
            agregarLinea(linea);
            archEntrada >> linea;
        }
        archEntrada.close();
    }
    else
        std::cout << "No se pudo abrir el archivo" << std::endl;
}
