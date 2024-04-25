#include <stdio.h>

float somarDoisNumeros(float a, float b){
    float soma;
    soma = a + b;
    return soma;
}


int main()
{
    float resultado;
    resultado = somarDoisNumeros(1, 3);
    
    
    printf("%.2f", resultado);

    return 0;
}
