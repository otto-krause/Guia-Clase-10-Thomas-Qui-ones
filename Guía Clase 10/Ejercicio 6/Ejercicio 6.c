    #include <stdio.h>
    #include <stdlib.h>

    int main()
{
    unsigned long long Num=0, Factorial=1;
    int i=0;
    printf("Ingrese un numero ");
    scanf("%llu", &Num);
    for (i=Num;i>1;i--)
    {
        Factorial=Factorial*i;
    }
        printf("El factorial de %llu es  %llu", Num, Factorial);
    return 0;
}
