/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Control.cpp
 * Author: Andrés Gutiérrez
 * 
 * Created on 16 de marzo de 2017, 11:35 AM
 */

#include "Control.h"


Control::Control() {
    ls = new Lista();
    uni=new Universidad("UNA","hEREDIA","61688613",ls);
    menu = new Menu(uni);
   
}

Universidad* Control::retornaU(){
    return uni;
}

Control::~Control() {
}

void Control::empezar(){
   iniciarlizarListaEscuelas();
   //cout<<ls->toString()<<endl;
   menu->presentacionInicio();
   menu->switchInicio();
  
}

void Control::iniciarlizarListaEscuelas(){
    Escuela* escuela1 = new Escuela("INFORMATICA","LAGUNILLA","61688613","INF01");
    Escuela* escuela2 = new Escuela("BIOPRECESOS","HEREDIA","61688613","BIOQUI01");
    ls->insertar(escuela1);
    ls->insertar(escuela2);
    
}
