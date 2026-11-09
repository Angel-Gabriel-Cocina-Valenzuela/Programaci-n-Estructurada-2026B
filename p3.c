#include <stdio.h>

int buscar(int arreglo[], int tamano, int valorBuscado){
    for(int i = 0; i < tamano; i++){
        if(arreglo[i] == valorBuscado){
            return i;
        }
    }

    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arreglo[1000];

    for(int i=0; i < n; i++){
        scanf("%d", &arreglo[i]);
    }

    int valor;
    scanf("%d", &valor);

    printf("%d\n", buscar(arreglo, n, valor));

    return 0;
}
