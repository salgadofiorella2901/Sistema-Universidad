/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escuela.cpp
 * Author: User
 * 
 * Created on 12 de marzo de 2017, 08:28 PM
 */

#include "Escuela.h"
#include "Lista.h"

Escuela::Escuela() {
    
    nombre = " ";
    direccion = " ";
    numeroTelef = " ";
    codigo = " ";
}
Escuela::Escuela(string nom, string direc, string telef,string codig)
	{
    this->nombre = nom;
    this->direccion = direc;
    this->numeroTelef = telef;
    this->codigo = codig;
	}
Escuela::~Escuela() {
}
 string Escuela::getDireccion()
 { 
     return direccion;
 }
    void Escuela::setDireccion(string direc)
    {
        this->direccion = direc;
    }
    string Escuela::getTelef()
    {
        return numeroTelef;
    }
    void Escuela::setTelef(string telef)
    {
        this->numeroTelef = telef;
    }
    string Escuela::getNombre() const
    {
        return nombre;
    }
    string Escuela::getCodigo()
    {
        return codigo;
    }
    
    string Escuela::toString()
    {
        stringstream s;
        s<<"\n\nNombre: \t" << this->getNombre() <<endl
                <<"Codigo: \t" << this->getCodigo() << endl
                <<"Direccion: \t" << this->getDireccion() <<endl
                <<"Num. Telef: \t" << this->getTelef()<< endl;
        
        return s.str();
    }