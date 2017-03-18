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
   intfz->presentacion();
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
    if (isdigit(aux)!=0){
        switch(aux){
        case '1':switchModoAdministrativo();
                break;
        case '2':cout<<"aun sin modo estudiante"<<endl;
                break;    
         case '3':intfz->salirSeguro();
                break;      
        default:cout<<"no"<<endl;
        }
    }else{
            cout<<"DATOS INCORRECTOS"<<endl;
    }
    this->switchInicio();
}

void Menu::switchModoAdministrativo(){
  char aux = ' ';
  aux= modoAdministrativo();
   
    switch(aux){
    case '1': cout<<uni->toString()<<endl; cin.get();cin.get();switchModoAdministrativo();//llama al toString de la universidad
        break;
    case '2': uni->cambiarNumero();cin.get();switchModoAdministrativo();
        break;
    case '3': uni->cambiarDireccion();cin.get();switchModoAdministrativo();
        break;
    case '4':this->switchModoEscuela();
        break;
    case '5':switchInicio();
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
    case '1': cout<<uni->imprimirTodasEscuelas()<<endl; cin.get(); cin.get(); switchModoEscuela();//llama al toString de Escuela*/ 
        break;
    case '2': uni->registrarEscuela();switchModoEscuela();
        break;
    case '3':uni->cosultarEscuela();cin.get();cin.get();switchModoEscuela();//CONSULTAR 
        break;
    case '4':switchModoAdministrativo();//CONSULTAR 
        break;
   default:cout<<"No entendi!"<<endl;
    }
    cin.get();
}


