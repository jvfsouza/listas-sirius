#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char resposta = 's';
    while (resposta == 's')
    {
        int vetor[3];
        for (int i = 0; i < 3; i++) {
        vetor[i] = rand() % 100; // variação de 0 a 99
        }

        
        printf("deseja gerar uma nova simulacao? (s/n)");
        scanf(" %c", &resposta);

        for (int i  = 0; i < 3; i++)
        {
            printf("%i \n", vetor[i]);
        }
    }
}
