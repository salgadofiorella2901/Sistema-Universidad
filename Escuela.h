/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escuela.h
 * Author: User
 *
 * Created on 12 de marzo de 2017, 08:28 PM
 */

#ifndef ESCUELA_H
#define ESCUELA_H

#include"Librerias.h"

class Escuela {
public:
    Escuela();
    Escuela(string,string,string,string);
    virtual ~Escuela();
    string getCodigo();
  
    string getDireccion();
    void setDireccion(string);
    string getTelef();
    void setTelef(string);
    string getNombre() const;
    string toString();
private:
   string  nombre;
   string direccion;
   string numeroTelef;
   string  codigo;
};

#endif /* ESCUELA_H */

