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
       // contador++;
    
}

string Lista::toString()
{
    stringstream s;
    system("cmd /c cls");
    s << "Lista de Escuelas " << endl;

   s<<" _____  _____  _____  _____  _____  _____  _____  _____  _____  _____ "<<endl
   <<"(_____)(_____)(_____)(_____)(_____)(_____)(_____)(_____)(_____)(_____)"<<endl<<endl;
   
   if(primero==NULL){return "Lista vacia";}cin.get();
    actual=primero;
    while(actual != NULL)
    {
      s<< actual->toString()<<endl;
     s<<" -:::::::::::::-  -:::::::::::::-  -:::::::::::::-  -:::::::::::::-  -:::::::::::::-  -:::::::::::::-  -:::::::::::::-  -:::::::::::::- "<<endl<<endl;
      actual = actual->getNodoSig();
    }
    return s.str();
}

bool Lista:: eliminarEspecifico(string x){ //Busca por codigo la escuela, y elimina ese nodo
  Nodo* panterior=NULL;
  actual= primero;

if (primero== NULL)//Si  la lista esta vacia
   {   return false;    }

if ( primero->getDato()->getCodigo()==x  ) // si es el primero
  {	    	    
	   actual=   actual->getNodoSig();
	   delete (primero);
	   actual= actual;
	   return true;   
  }
}

Escuela* Lista::retornaEscuela(string codigo)// retorna el objeto escuela con el codigo asociado
{
    //cout<<this->imprimeCodigosEscuela()<<endl;
    Escuela *p = new Escuela("No existe","No existe","No existe","No existe");
    actual= primero;
    if(primero==NULL){cout<<"1";cin.get();cin.get();return p;}
    else{
        while (actual!=NULL)
        {
            if (actual->getDato()->getCodigo()==codigo){return actual->getDato();}
            actual= actual->getNodoSig();
        }
    }
   return p;
}


bool Lista::estaEscuela(string codigo){
    actual= primero;
    if(primero==NULL){return false;}
    else{
        while (actual!=NULL)
        {
            if (actual->getDato()->getCodigo()==codigo){return true;}
            actual= actual->getNodoSig();
        }
    }
   return false;
}

string Lista::imprimeCodigosEscuela(){
    stringstream s;
    s << "Lista de Escuelas " << endl<<endl;
    s<<"Codigo    :   Nombre"<<endl<<endl;
   if(primero==NULL){cout<<"Lista vacia";}cin.get();
    actual=primero;
    while(actual != NULL)
    {
      s<< actual->getDato()->getCodigo()<<" : "<<actual->getDato()->getNombre()<<endl;
      actual = actual->getNodoSig();
    }
    return s.str();

}