#include <stdio.h>

typedef struct {

    char nome [20];
    int idade;
} Pessoa;

int main (void){

    Pessoa p = {"pedrinho", 19};
    printf("%s \n", p.nome);
    return 0;
}


