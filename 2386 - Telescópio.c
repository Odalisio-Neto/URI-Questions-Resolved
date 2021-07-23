#include <stdio.h>

int main()
{
    int A, N, f;
    scanf("%d", &A);
    scanf("%d", &N);

    int i = 0, visiveis = 0;
    while(i < N)
    {
        scanf("%d",&f);
        if(f*A >= 40000000){
            visiveis++;
        }
        i++;
    }
    printf("%d\n",visiveis);
    return 0;
}
