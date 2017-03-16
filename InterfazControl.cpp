/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfazControl.cpp
 * Author: Andrés Gutiérrez
 * 
 * Created on 16 de marzo de 2017, 11:53 AM
 */

#include "InterfazControl.h"

InterfazControl::InterfazControl() {
}

void InterfazControl::menuPrincipal(){
cout<<"1) Modo administrador"<<endl;
cout<<"2) Modo Estudiante"<<endl;
}

void InterfazControl::menuUniversidad(){
    cout<<"1) Consultar informacion de contacto de la universidad"<<endl;
    cout<<"2) Cambiar numero de telefono"<<endl;
    cout<<"3) cambiar direccion"<<endl;
    cout<<"4) Atras"<<endl;
}

InterfazControl::~InterfazControl() {
}

