/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.cpp
 * Author: Andrés Gutiérrez
 * 
 * Created on 15 de marzo de 2017, 06:44 PM
 */

#include "Menu.h"

Menu::Menu(Universidad *u) {
    uni=u;
    intfz=new InterfazControl();
}

Menu::~Menu() {
}


void Menu::presentacionInicio(){
   intfz->gotoxy(25,25);cout<<"BIENVENIDO A LA UNIVERSIDAD NACIONAL"<<endl;  
   cin.get();
}

char Menu::opcionInicio(){
    system("cmd /c cls"); 
    char aux= ' ';
    intfz->menuPrincipal();
    cin>>aux;
    return aux;
}

char Menu::modoAdministrativo(){
    system("cmd /c cls"); 
    char aux= ' ';
    intfz->menuUniversidad();
    cin>>aux;
    return aux;
}

void Menu::switchInicio(){

    char aux =' ';
    aux=opcionInicio();
    
    switch(aux){
    case '1':switchModoAdministrativo();
            break;
    case '2':cout<<"aun sin modo estudiante"<<endl;
            break;         
    default:cout<<"no"<<endl;
    }
}

void Menu::switchModoAdministrativo(){
  char aux = ' ';
  aux= modoAdministrativo();
   
    switch(aux){
    case '1': cout<<uni->toString()<<endl; cin.get();//llama al toString de la universidad
        break;
    case '2': uni->cambiarNumero();
        break;
    case '3': uni->cambiarDireccion();
        break;
    case '4':switchModoEscuela();
        break;
    case '5':opcionInicio();
        break;
   default:cout<<"no"<<endl;
    }
    cin.get();
}
char Menu::modoEscuela(){
    system("cmd /c cls"); 
    char aux= ' ';
    intfz->menuEscuela();
    cin>>aux;
    return aux;
}

void Menu::switchModoEscuela(){
  char aux = ' ';
  aux= modoEscuela();
   
    switch(aux){
    case '1': cout<<uni->imprimirTodasEscuelas()<<endl; cin.get(); switchInicio();//llama al toString de Escuela*/ 
        break;
    case '2': uni->registrarEscuela();switchInicio();
        break;
    case '3': uni->cambiarDireccion();
        break;
    case '4':switchInicio();
        break;
        
   default:cout<<"no"<<endl;
    }
    cin.get();
}


