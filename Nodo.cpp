/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: User
 * 
 * Created on 13 de marzo de 2017, 07:53 PM
 */

#include "Nodo.h"

Nodo::Nodo() {
    dato = NULL;
    nodoSig = NULL;
}

Nodo::Nodo(Escuela* dat, Nodo* sig) {
    dato = dat;
    sig = nodoSig;
}

Nodo::~Nodo() {
    
    delete dato; 
    delete nodoSig;
}
  Nodo* Nodo::getNodoSig()
  {
      return nodoSig;
  }
  void Nodo::setNodoSig(Nodo* sig)
  {
      nodoSig = sig;
  }
    void Nodo::setDato(Escuela* dat)
    {
        dato = dat;
    }
    Escuela* Nodo::getDato()
    {
        return dato;
    }
    string Nodo::toString()
    {
        stringstream s;
        s<< "Datos de las Escuelas " << dato->toString() << endl;
        
        return s.str();
    }
