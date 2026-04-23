#include <stdio.h>

typedef struct{
    int qt;
    float custo;
    char v[20];
    
    
}Produto;




int main(){

    Produto a = {120, 0.10, {"porca"}};
    Produto b = {80, 0.20, {"parafuso"}};

    printf("%3i, %.2f, %s \n" ,a.qt, a.custo, a.v);
    printf("%3i, %.2f, %s \n", b.qt, b.custo, b.v);
    return 0;
}