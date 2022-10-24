#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a;

    printf("Insira um valor N\n");
    scanf("%d",&n);

    for(int b=0;b<=n;b=b+1){
        printf("Valor de 0 a N numeros e: %d\n", b);
        }

    printf("\n");
    for(int b=n;b>=0;b=b-1){
        printf("Valor de 0 a N numeros e: %d\n", b);
        }

    return 0;
}
