/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazControl.h
 * Author: Andrés Gutiérrez
 *
 * Created on 16 de marzo de 2017, 11:53 AM
 */

#ifndef INTERFAZCONTROL_H
#define INTERFAZCONTROL_H
#include "Librerias.h"

class InterfazControl {
public:
    /////////////////////////////////
    InterfazControl();
    virtual ~InterfazControl();
    void menuPrincipal();
    void menuUniversidad();
    void gotoxy(int, int);
    void presentacion();
    void salirSeguro();
    /////////////////////////////////
    void menuEscuela();
    
    
private:

};

#endif /* INTERFAZCONTROL_H */

