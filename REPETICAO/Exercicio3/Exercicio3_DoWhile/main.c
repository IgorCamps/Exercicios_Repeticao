#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,divisores,n=0;
    printf("Insira um inteiro!\n");
    scanf("%d", &num);

    do{
    n++;
    divisores = num%n;
        if(divisores==0){
            printf("Divisivel por :%d\n", n);
        }
        else{
            printf("Nao divisivel por %d \n",n);
        }

    }while(num>n);

    return 0;
}
