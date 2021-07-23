#include <stdio.h>

int MDC(int a, int b)
{
    int x = a > b ? a : b;
    int y = a < b ? a : b;

    int resto = x % y;

    while(resto != 0)
    {
        x = y;
        y = resto;
        resto = x % y;
    }

    return y;
}

int main()
{
    int N, i;
    scanf("%d", &N);
    int F1, F2;

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", MDC(F1, F2));
    }

    return 0;
}
