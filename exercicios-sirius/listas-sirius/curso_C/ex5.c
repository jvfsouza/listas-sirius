#include <stdio.h>

int main(void)
{
    char ordem;
    printf("ordenar em ordem crescente ou decrescente (c/d): ");
    scanf("%c", &ordem);

    int N;
    printf("quantos numeros: ");
    scanf("%d", &N);

    // obtem a lista
    int numeros[N];
    int numero;
    for (int i = 0; i < N; i++)
    {
        printf("numero: ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    // ordena a lista em orden crescente
    if(ordem == 'c')
    {
        for (int i = 0; i < N - 1; i++)
        {
            int menorindice =  i;
            for(int j = i + 1; j < N; j++)
            {
                if (numeros[j] < numeros[menorindice])
                {
                    menorindice = j;
                }
            }

            if (menorindice != i)
            {
                int temp = numeros[i];
                numeros[i] = numeros[menorindice];
                numeros[menorindice] = temp;
            }
        }
    } 
    else if (ordem == 'd')
    {
        for (int i = 0; i < N - 1; i++)
        {
            int maiorindice =  i;
            for(int j = i + 1; j < N; j++)
            {
                if (numeros[j] > numeros[maiorindice])
                {
                    maiorindice = j;
                }
            }

            if (maiorindice != i)
            {
                int temp = numeros[i];
                numeros[i] = numeros[maiorindice];
                numeros[maiorindice] = temp;
            }
        }
    }

    //imprime a lista
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", numeros[i]);
    }

}