#include <stdio.h>

int main() {
    int num, primeira_parte, segunda_parte, soma, quadrado;

    
    for (num = 1000; num <= 9999; num++) {
        
        primeira_parte = num / 100;  
        segunda_parte = num % 100;   

       
        soma = primeira_parte + segunda_parte;

       
        quadrado = soma * soma;

        
        if (quadrado == num) {
            printf("%d possui a propriedade.\n", num);
        }
    }

    return 0;
}

