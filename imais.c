#include<stdio.h>

void maisum(){
    int v[8] = {9,6,2,4,8,5,1,3};
    int lenv = 8;
    for(int i = 0; i <= lenv; i++){
        if(lenv % 2 != 0){
            printf(" o numero de elementos na lista não é par.");
            return ;

        }

        }
    for(int j = 0; j < lenv ; j += 2 ){
        printf("%i %i", v[j], v[j+1]);
        printf("\n");
    }
}

int main(){
    maisum();
    return 0;

}   