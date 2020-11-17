    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int Num, Num2, Producto, i, Cont;

    printf("Ingrese dos numeros enteros positivos ");
    scanf("%d %d", &Num, &Num2);
    i=Num;
    do
    {
        Producto=Producto+Num;
        Cont=Cont+1;
        i++;
    }while(Cont<Num2);


    printf("El producto de %d y %d es %d ", Num, Num2, Producto);
    return 0;
}
