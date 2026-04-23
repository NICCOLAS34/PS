#include <stdio.h>


typedef struct{

    int horas;
    int minutos;


} Horario;

void imprimihorario(Horario x){
    printf("%i:%i \n",x.horas,x.minutos);
}

Horario somamin(Horario y, int min ){
    Horario res;
    res.minutos = (y.minutos + min) % 60;
    res.horas = ((y.minutos + min) / 60 + y.minutos) % 24;
    return res;
}

int main(){

    Horario h = {16,17};
    imprimihorario(somamin(h, 40));
}