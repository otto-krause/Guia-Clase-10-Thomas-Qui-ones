    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int Resto, Cont, Num, Num2;

    printf("Ingrese el dividendo entero positivo ");
    scanf("%d", &Num);
    printf("Ingrese el divisor entero positivo ");
    scanf("%d", &Num2);

        Cont=0;
        Resto=Num;

        while ( Resto>=Num2 )
        {
            Resto=Resto-Num2;
            Cont++;
        }
        printf("El resto de la division es %d", Resto);
        return 0;
}
