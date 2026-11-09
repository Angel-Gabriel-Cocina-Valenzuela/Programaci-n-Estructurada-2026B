#include <stdio.h>

int esPrimo(int n){
    if(n < 2){
        return 0;
    }

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int numero;
    scanf("%d", &numero);

    if(esPrimo(numero) == 1){
        printf("Primo\n");
    }else{
        printf("No primo\n");
    }

    return 0;
}
