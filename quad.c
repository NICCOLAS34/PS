#include<stdio.h>

void quadrado(){
    scanf("&i", n);
    int v[n];
    int lenv = n;
    v[1] = 1;

    for(int i = 1; i < lenv; i ++ ){
        int quad = (n * n);
        v[i] = quad;
        n = n + 1;

    }
}
for(int j = 0; j < lenv; j++){
    printf("%i", v[j]);
}

int main(){
    quadrado();
    return 0;
}