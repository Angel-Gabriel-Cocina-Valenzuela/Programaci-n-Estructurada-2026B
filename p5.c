#include <stdio.h>

int sumar(int num1, int num2){
    return num1 + num2;
}

int restar(int num1, int num2){
    return num1 - num2;
}

int multiplicar(int num1, int num2){
    return num1 * num2;
}

int dividir(int num1, int num2){
    return num1 / num2;
}

int main(){
    char op;
    int n1, n2, res;

    scanf(" %c", &op);
    scanf("%d%d", &n1, &n2);

    switch(op){
        case '+':
            printf("%d\n", sumar(n1, n2));
            break;
        case '-':
            printf("%d\n", restar(n1, n2));
            break;
        case '*':
            printf("%d\n", multiplicar(n1, n2));
            break;
        case '/':
            if(n2 == 0){
                printf("Error: division por cero\n");
            }else{
                printf("%d\n", dividir(n1, n2));
            }
            break;
        default:
            printf("Error: Operador NO valido...\n");
    }

    return 0;
}
