/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Universidad.cpp
 * Author: User
 * 
 * Created on 14 de marzo de 2017, 07:53 PM
 */

#include "Universidad.h"

Universidad::Universidad() {
    nombre = " ";
    direccion = " ";
    telefono = " ";
}

Universidad::~Universidad() {
}


Universidad::Universidad(string nomb,string direcc,string telef)
{
    this->nombre = nomb;
    this->direccion = direcc;
    this->telefono = telef;
}    
void Universidad::setDireccion(string direcc)
{
    this->direccion = direcc;
}
void Universidad::setTelefono(string telef)
{
    this->telefono = telef;
}

string Universidad::getDireccion()
{
    return direccion ;
}
string Universidad::getTelefono()
{
    return telefono;
}
string Universidad::getNombre()
{
    return nombre;
}
string Universidad::toString()
{
   stringstream s;
   s<<"Nombre : " << getNombre() << endl;
   s <<"Direccion: " << getDireccion() <<endl;
   s<<"Telefono: " << getTelefono() <<endl;
   return s.str();
}
void Universidad::actualizar()
{
    string direc = " ";
    string telef = " ";

    cout<< "Ingrese la nueva direccion " <<endl;
    cin>> direc;
    setDireccion(direc);
    cout<< "Ingrese el nuevo numero de telefono " <<endl;
    cin>>telef;
    setTelefono(telef);
}

void Universidad::cambiarNumero(){
    string aux="";
    cout<<"Digite nuevo numero"<<endl;
    cin>>aux;
    setTelefono(aux);
}

void Universidad::cambiarDireccion(){
    string aux="";
    cout<<"Digite nueva direccion"<<endl;
    cin>>aux;
    setDireccion(aux);
}

void Universidad::registrarEscuela(){}

void Universidad::cosultarEscuela(){}