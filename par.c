#include "parh.h"

Par somapar(Par x, Par y){

    Par r  = {x.a  + y.a, x.b + y.b};

    return r;
}

void mostrapar(Par z){

    #include <stdio.h>

    printf("[%i %i] \n", z.a, z.b);

}
