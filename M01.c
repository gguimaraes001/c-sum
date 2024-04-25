#include <stdio.h>

float somarDoisNumeros(float a, float b){
    float soma;
    soma = a + b;
    return soma;
}


int main()
{
    float resultado, a, b;
    
    printf("Digite o numero A: ");
    scanf("%f", &a);
    
    printf("Digite o numero B: ");
    scanf("%f", &b);
    
    resultado = somarDoisNumeros(a, b);
    
    printf("A soma eh %.2f", resultado);

    return 0;
}
