#include <stdio.h>

int main(void)
{
    char palavra[50];
    printf("Digite a palavra: ");
    scanf("%s", palavra);

    int i = 0;
    while (palavra[i] != '\0')
    {
        ++ i;
    }
    printf("quantida de caracteres: %i", i);
}