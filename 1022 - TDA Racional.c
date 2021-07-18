#include <stdio.h>
#include <stdlib.h>

int* soma (int N1, int D1, int N2,int D2)
{
    int *res = (int *)malloc(sizeof(int) * 2);
    res[0] = (N1 * D2 + N2 * D1);
    res[1] = (D1 * D2);
    return res;
}
int* sub(int N1, int D1, int N2, int D2)
{
    int *res = (int *)malloc(sizeof(int) * 2);
    res[0] = (N1 * D2 - N2 * D1);
    res[1] = (D1 * D2);
    return res;
}
int* mult(int N1, int D1, int N2, int D2)
{
    int *res = (int *)malloc(sizeof(int) * 2);
    res[0] = (N1 * N2);
    res[1] = (D1 * D2);
    return res;
}
int* divisao(int N1, int D1, int N2, int D2)
{
    int *res = (int*) malloc(sizeof(int)*2);
    res[0] = (N1 * D2);
    res[1] = (D1 * N2);
    return res;
}
int *simpl (int n, int d)
{
    int *s = malloc (sizeof(int)*2);
    int menor = abs(n)<abs(d) ? abs(n) : abs(d);
    int i;
    for (i = menor; i > 1; i--)
    {
        if(n%i==0 && d%i==0)
        {
            n = n/i;
            d = d/i;
        }
    }
    s[0] = n;
    s[1] = d;

    return s;
}
int main()
{
    int i=0;
    int n1,n2;
    int d1,d2;
    char op;
    int N;
    scanf("%d ",&N);
    while(i<N)
    {
        int *res, *simplif;
        scanf("%d / %d %c %d / %d",&n1,&d1,&op,&n2,&d2);
        if(op == '+')
        {
            res = soma(n1,d1,n2,d2);
        }else if (op == '-'){
            res = sub(n1, d1, n2, d2);
        }else if (op == '*'){
            res = mult(n1, d1, n2, d2);
        }else if (op == '/'){
            res = divisao(n1, d1, n2, d2);
        }
        simplif = simpl(res[0],res[1]);
        printf ("%d/%d = %d/%d\n",res[0],res[1],simplif[0],simplif[1]);
        free(res);
        free(simplif);
        i++;
    }

    return 0;
}
