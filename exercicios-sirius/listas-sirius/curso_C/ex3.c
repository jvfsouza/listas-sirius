int main(void)
{
    int numero;
    printf("que numero fatorial: ");
    scanf("%d", &numero);

    int fatorial = 1;
    for (int i = 1; i <= numero; i ++)
    {
        fatorial = fatorial * i;
    }
    printf("%d", fatorial);
}