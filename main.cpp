/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on 12 de marzo de 2017, 08:27 PM
 */

#include <cstdlib>
#include "Librerias.h"
#include "Menu.h"
#include "Control.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
    Control* ctrl = new Control();
    ctrl->empezar();
    return 0;
}

