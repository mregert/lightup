#ifndef TABLERO_H
#define TABLERO_H


class Tablero
{
public:
    Tablero();
    ~Tablero();
    void leer_valor(const char * cadena, int & i, int & elemento);
    void cargar_tablero();

private:

    int** tablero;
};

#endif // TABLERO_H
