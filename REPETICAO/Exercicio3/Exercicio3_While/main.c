#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,divisores,n=0;
    printf("Insira um numero!\n");
    scanf("%d", &num);

    while(num>n){
    n++;
    divisores = num%n;
    divisores == 0 ? printf("Divisivel por :%d\n", n):printf("Nao divisivel por %d \n",n);
}

    return 0;
}
