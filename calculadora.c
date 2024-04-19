 #include <stdio.h>

int main() {
    char operador;
    float num1, num2;

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador); 

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(operador) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*': 
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro! Divisão por zero!\n");
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }

    return 0;
}