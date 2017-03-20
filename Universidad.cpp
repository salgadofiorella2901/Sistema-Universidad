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
#include "Lista.h"

Universidad::Universidad() {
    nombre = " ";
    direccion = " ";
    telefono = " ";
    lista=new Lista();
    intfz=new InterfazControl();
}

Universidad::~Universidad() {
}


Universidad::Universidad(string nomb ,string direcc,string telef, Lista* ls)
{
    this->nombre = nomb ;
    this->direccion = direcc;
    this->telefono = telef;
    lista=ls;
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
    if (intfz->esNumero(aux)){
        setTelefono(aux);
    }else{
    cout<<"DATOS INCORRECTOS"<<endl;cin.get();
    this->cambiarNumero();}
}

void Universidad::cambiarDireccion(){
    string aux="";
    cout<<"Digite nueva direccion"<<endl;
    cin.ignore(256,'\n');getline(cin,aux, '\n');cin.ignore(256,'\n');
    setDireccion(aux);
}

void Universidad::registrarEscuela(){
    string nom,dir,tel,cod = " ";
    cin.ignore(256,'\n');
    cout<<"Ingrese nombre de la escuela"<<endl;getline(cin,nom, '\n');cin.ignore(256,'\n'); //cin>>nom;
    cout<<"Ingrese direccion de la escuela"<<endl;getline(cin,dir, '\n');cin.ignore(256,'\n');
    cout<<"Ingrese telefono de la escuela"<<endl;getline(cin,tel, '\n');cin.ignore(256,'\n');//cin>>tel;
    cout<<"Ingrese codigo de la escuela"<<endl;getline(cin,cod, '\n');cin.ignore(256,'\n');//cin>>cod;
    Escuela* aux = new Escuela(nom, dir, tel, cod);
    lista->insertar(aux);
}

void Universidad::cosultarEscuela(){
   
    cout<<lista->imprimeCodigosEscuela()<<endl;
    string aux = "";
    cout<<"INGRESAR CODIGO"<<endl;
    cin>>aux;
    if(lista->estaEscuela(aux)){cout<<lista->retornaEscuela(aux)->toString()<<endl;}
    else{cout<<"NO EXISTE ESCUELA";}
      
}

string Universidad::imprimirTodasEscuelas(){
    return lista->toString();
}


Lista* Universidad::retornaLista(){
    return lista;
}