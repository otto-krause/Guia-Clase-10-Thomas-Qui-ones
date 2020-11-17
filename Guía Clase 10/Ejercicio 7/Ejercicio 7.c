    #include <stdio.h>
    #include <stdlib.h>

    int main()
{
    int Num, Producto, i=1;

    printf("Ingrese un n%cmero entero ", 163);
    scanf("%d", &Num);
    do
    {
        Producto=Num*i;
        printf("\n%d*%d=%d", i, Num, Producto);
        i++;
    }while(i<11);
    return 0;
}
