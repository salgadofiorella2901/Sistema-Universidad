/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: User
 *
 * Created on 13 de marzo de 2017, 07:53 PM
 */

#ifndef NODO_H
#define NODO_H

#include"Librerias.h"
#include"Escuela.h"

class Nodo {
public:
    Nodo();
    Nodo(Escuela*,Nodo*);
    virtual ~Nodo();
    void setNodoSig(Nodo*);
    Nodo* getNodoSig();
    void setDato(Escuela*);
    Escuela* getDato();
    string toString();
private:
    Escuela* dato;
    Nodo* nodoSig;

};

#endif /* NODO_H */

