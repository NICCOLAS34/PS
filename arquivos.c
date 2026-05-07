#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *arq = fopen("rand.txt","w");

    int contador  = 0;

    while(contador < 100){

        int num = rand() % 1000;
        fprintf(arq,"%i \n", num);
        contador ++;
    }

        
}


