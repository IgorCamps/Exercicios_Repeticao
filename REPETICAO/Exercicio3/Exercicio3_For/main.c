#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,divisores,n=0;
    printf("Insira um numero!\n");
    scanf("%d", &num);

    for(;num>n;){
    n=n+1;
    divisores = num%n;
    switch(divisores){
        case 0 : printf("Divisivel por :%d\n", n);
            break;
        case:
        default printf("Nao divisivel por %d \n",n);
    }
}
   return 0;
}
