int main(void)
{
    int quantidadepares;
    printf("Soma de quantos pares? ");
    scanf("%d", &quantidadepares);

    int soma = 0;
    // usa i como incremento na soma também
    for (int i = 2; i <= quantidadepares * 2; i += 2)
    {
        soma += i;
    }
    printf("%d", soma);
}