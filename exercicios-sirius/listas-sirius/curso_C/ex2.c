#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool ehprimo = true;
    int primo;
    printf("Numero para verificar se eh primo: ");
    scanf("%d", &primo);

    for (int i = 2; i < primo; i++)
    {
        if (primo % i == 0)
        {
            ehprimo = false;
        }
    }
    
    if (ehprimo)
    {
        printf("eh primo");
    } else {
        printf("nao eh primo");
    }
}