//
// Created by giova on 01/12/2021.
//

#include "lib.h"
bool numeriprimi ( int a){
    bool vero_o_falso;

    if (a>2){
        for ( int b=2; b<a; b++){
            if ((a % b)== 0){
                vero_o_falso = false;
            }else{
                vero_o_falso = true;
            }
        }
    }else if (a==2){
        vero_o_falso = true;
    }else{
        vero_o_falso = false;
    }
    return vero_o_falso;
}

