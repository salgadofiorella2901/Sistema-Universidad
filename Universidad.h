/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Universidad.h
 * Author: User
 *
 * Created on 14 de marzo de 2017, 07:53 PM
 */

#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "Librerias.h"
#include "Lista.h"

class Universidad {
public:
    Universidad();
    Universidad(string, string, string, Lista*);
    virtual ~Universidad();
    void setDireccion(string);
    void setTelefono(string);
    string getDireccion();
    string getTelefono();
    string getNombre();
    string toString();
    void actualizar();
    void registrarEscuela();
    void cosultarEscuela();
    void cambiarNumero();
    void cambiarDireccion();
    string imprimirTodasEscuelas();
    Lista* retornaLista();
    
private:
    string nombre;
    string direccion;
    string telefono;
    Lista * lista;
};

#endif /* UNIVERSIDAD_H */

