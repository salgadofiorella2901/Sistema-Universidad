/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Control.cpp
 * Author: Andrés Gutiérrez
 * 
 * Created on 16 de marzo de 2017, 11:35 AM
 */

#include "Control.h"


Control::Control() {
    uni=new Universidad("UNA","hEREDIA","61688613");
}

Universidad* Control::retornaU(){
    return uni;
}


Control::~Control() {
}

