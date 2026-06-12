#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int ms);

int main(void)
{
    int visibilidade_sol = (rand() % 2);
    if (visibilidade_sol == 1)
    {
        printf("sol esta visivel, carregando a bateria \n");
        delay(1000 * 60 * 15);      // pausa por 15 min
        printf("bateria carregada em 15 %%");
    } else {
        printf("sol ano está visivel \n");
    }
}

void delay(int ms)
{
    clock_t tempo = clock() + (ms * CLOCKS_PER_SEC / 1000);

    while (clock() < tempo)
    {
        // espera
    }
}