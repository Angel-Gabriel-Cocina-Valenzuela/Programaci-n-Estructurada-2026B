#include <stdio.h>

int fibonacci(int entero){
    if(entero == 0){
        return 0;
    }else if(entero == 1){
        return 1;
    }else{
        return fibonacci(entero-1) + fibonacci(entero-2);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;
}
