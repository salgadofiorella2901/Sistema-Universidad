
/* 
 * File:   Lista.h
 * Author: User
 *
 * Created on 13 de marzo de 2017, 07:35 PM
 */

#ifndef LISTA_H
#define LISTA_H

#include"Librerias.h"
#include"Nodo.h"
#include "Escuela.h"

class Lista {
public:
    Lista();
    virtual ~Lista();
    void insertar(Escuela*);
    string toString();
    bool eliminarEspecifico(string);
    int contador;
    Escuela* retornaEscuela(string);
    bool estaEscuela(string);
    string imprimeCodigosEscuela();
private:
    Nodo* primero;
    Nodo* actual;
};
#endif /* LISTA_H */

