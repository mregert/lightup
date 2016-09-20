#include "mainwindow.h"
#include <QApplication>
#include "Archivo.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Archivo archivo;
    std::string direccionEntrada = "/home/michelle/Documentos/TPFinal/Lightup/Entrada.txt";
    archivo.cargarArchivo(direccionEntrada);
    int i=1;
    std::cout << "Archivo" << std::endl;
    while (i <= archivo.longuitud())
    {
        std::cout << archivo.obtenerCadena(i) << std::endl;
        i++;
    }
    return a.exec();
}
