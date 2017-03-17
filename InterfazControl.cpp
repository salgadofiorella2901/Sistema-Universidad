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
    cout<<"4) Opciones Escuela"<<endl;
    cout<<"5) Atras"<<endl;
}

InterfazControl::~InterfazControl() {
}

void InterfazControl::gotoxy(int x, int y){
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);
}
void InterfazControl::menuEscuela(){
    cout<<"1) Desplegar Escuelas"<<endl;
    cout<<"2) Ingresar Escuela Nueva"<<endl;
    cout<<"3) Quitar una Escuela"<<endl;
    cout<<"4) Consultar Escuela Particular"<<endl;
    cout<<"5) Atras"<<endl;
}
