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
    cout<<"----------Menu Principal---------"<<endl;
    cout<<"---------------------------------"<<endl<<endl;
    cout<<"1) Modo administrador"<<endl;
    cout<<"2) Modo Estudiante"<<endl;
    cout<<"3) Salir del Programa"<<endl;
}

void InterfazControl::menuUniversidad(){
     cout<<"----------Menu Universidad---------"<<endl;
    cout<<"---------------------------------"<<endl<<endl;
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
    cout<<"Menu de Escuelas " << endl;
    cout<<"-------------------------" <<endl;
    cout<<"1) Desplegar Escuelas"<<endl;
    cout<<"2) Ingresar Escuela Nueva"<<endl;
    cout<<"3) Consultar Escuela Particular"<<endl;
    cout<<"4) Atras"<<endl;
}

void InterfazControl::presentacion(){
    this->gotoxy(35,10);cout<<" ▄         ▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄ "<<endl;
    this->gotoxy(35,11);cout<<"▐░▌       ▐░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌"<<endl;
    this->gotoxy(35,12);cout<<"▐░▌       ▐░▌▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀█░▌"<<endl;
    this->gotoxy(35,13);cout<<"▐░▌       ▐░▌▐░▌▐░▌    ▐░▌▐░▌       ▐░▌"<<endl;
    this->gotoxy(35,14);cout<<"▐░▌       ▐░▌▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄█░▌"<<endl;
    this->gotoxy(35,15);cout<<"▐░▌       ▐░▌▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌"<<endl;
    this->gotoxy(35,16);cout<<"▐░▌       ▐░▌▐░▌   ▐░▌ ▐░▌▐░█▀▀▀▀▀▀▀█░▌"<<endl;
    this->gotoxy(35,17);cout<<"▐░▌       ▐░▌▐░▌    ▐░▌▐░▌▐░▌       ▐░▌"<<endl;
    this->gotoxy(35,18);cout<<"▐░█▄▄▄▄▄▄▄█░▌▐░▌     ▐░▐░▌▐░▌       ▐░▌"<<endl;
    this->gotoxy(35,19);cout<<"▐░░░░░░░░░░░▌▐░▌      ▐░░▌▐░▌       ▐░▌"<<endl;
    this->gotoxy(35,20);cout<<" ▀▀▀▀▀▀▀▀▀▀▀  ▀        ▀▀  ▀         ▀"<<endl;
}

void InterfazControl::salirSeguro(){
    HANDLE hConsole;
	hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,14);
        system("cmd /c cls");
        gotoxy(55,20);
        SetConsoleTextAttribute(hConsole,10);
        cout<<"CERRANDO APLICACION";cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);cout<<".";Sleep(500);
                        Sleep(1000);
                        exit(0);
}