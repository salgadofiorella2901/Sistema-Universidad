/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Control.h
 * Author: Andrés Gutiérrez
 *
 * Created on 16 de marzo de 2017, 11:35 AM
 */

#ifndef CONTROL_H
#define CONTROL_H

#include "Librerias.h"
#include "Universidad.h"
#include "Menu.h"
#include "Lista.h"

class Control {
public:
    Control();
    virtual ~Control();
    Universidad* retornaU();
    void empezar(); //se deberia escoger un mejor nombre, por ahora es "empezar"
    void iniciarlizarListaEscuelas();
private:
    Universidad* uni;
    Menu * menu;
    Lista* ls;
};

#endif /* CONTROL_H */

