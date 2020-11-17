    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int Num, Num2;
    int i=1, Multi, Suma;
    printf("ingrese dos numeros\n");
    scanf("%d",&Num);
    scanf("%d",&Num2);

     do
    {
       Multi=5*i;
       i++;
    }while (Multi<Num);

    while (Multi<Num2)
    {
        printf(" %d ",Multi);
        Suma=Suma+Multi;
        Multi=Multi+5;

    }
    if (Suma>Num2)
    {
        Suma=Suma-Num2;
    }
    else
        if (Suma>=Num)
    {
        Suma=Suma-Num;
    }
    printf("\n La sumatoria es %d ",Suma);
    return 0;
}
