#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, resto=0;

    printf("Insira um numero\n");
    scanf("%d", &n);

   for(;n!=0;){
        resto+= n%10;
        n = n/10;
    }
    printf("A soma dos numeros e...%d", resto);


    return 0;
}
