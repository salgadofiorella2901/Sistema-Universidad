/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.h
 * Author: Andrés Gutiérrez
 *
 * Created on 15 de marzo de 2017, 06:44 PM
 */

#ifndef MENU_H
#define MENU_H
#include "Universidad.h"
#include "InterfazControl.h"

class Menu {
public:
    Menu(Universidad* u);
    virtual ~Menu();
    void presentacionInicio();
    char opcionInicio();
    char modoAdministrativo();
    void switchInicio();
    void switchModoAdministrativo();
    char modoEscuela();
    void switchModoEscuela();
    
    
private:
    Universidad * uni;
    InterfazControl* intfz;
};
#endif /* MENU_H */

