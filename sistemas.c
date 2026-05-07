#include<stdio.h>
#include "parh.h"

int main(){

    Par p1 = {1,2};
    Par p2 = {8,3};
    Par r;

    r =  somapar(p1,p2);
    mostrapar(r);

    return 0;

}