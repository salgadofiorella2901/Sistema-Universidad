/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Control.h
 * Author: Andrés Gutiérrez
 *
 * Created on 16 de marzo de 2017, 11:35 AM
 */

#ifndef CONTROL_H
#define CONTROL_H

#include "Librerias.h"
#include "Universidad.h"

class Control {
public:
    Control();
    virtual ~Control();
    Universidad* retornaU();
private:
    Universidad* uni;
};

#endif /* CONTROL_H */

