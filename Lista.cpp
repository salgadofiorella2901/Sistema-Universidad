/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: User
 * 
 * Created on 13 de marzo de 2017, 07:35 PM
 */

#include "Lista.h"

Lista::Lista() {
    primero = NULL;
    actual = NULL;
    contador=0;
}

Lista::~Lista() {
    while(primero != NULL)
    {
        actual = primero;
        primero = primero->getNodoSig();
        delete actual;
    }
  

}

void Lista::insertar(Escuela* ptrDato)
{
   /* actual = primero;
    if(primero == NULL)
        primero = new Nodo(ptrDato, NULL);
    else
        primero = new Nodo(ptrDato,actual);*/
     actual=new Nodo(ptrDato,NULL);//Creamos un nodo solo
	actual->setNodoSig(primero);
	primero=actual;
        contador++;
    
}

string Lista::toString()
{
    stringstream s;
    s << "Lista de Escuelas " << endl;
   if(primero==NULL){return "mierda";}cin.get();
    actual=primero;
    while(actual != NULL)
    {
      s<< actual->toString()<<endl;
      actual = actual->getNodoSig();
    }
    return s.str();
}

/*stringstream s;
	pActual=pInicio;

	while (pActual!=NULL)
	{
		s<<pActual->toStringNodo();
		pActual=pActual->getSig();
	}

	return s.str();*/