#include <stdio.h>

int main(void)
{
    int quantNum;
    printf("quantos numero de fibbonacci: ");
    scanf("%d", &quantNum);

    // meio gambiarrento
    int f1 = 0;
    printf("%d ", f1);
    int f2 = 1;
    printf(",%d ", f2);

    int f3;
    for (int i = 0; i < quantNum - 2; i++)
    {
        f3 = f1 + f2;
        printf(",%d ", f3);
        f1 = f2;
        f2 = f3;
    }
}