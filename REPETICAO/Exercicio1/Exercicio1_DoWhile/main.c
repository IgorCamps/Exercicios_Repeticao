#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0;

    printf("Insira um valor para N\n");
    scanf("%d", &n);

    printf("Incremento\n");
    do{
        printf("%d\n", a++);
    }while(a<=n);

    printf("Decremento\n");

    do{
        printf("%d\n", n--);
    }while(n>=0);

return 0;
}
