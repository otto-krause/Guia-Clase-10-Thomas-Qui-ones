    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int Num2, i, Cociente, Num;

    printf("Ingrese el dividendo entero positivo ");
    scanf("%d", &Num);
    printf("Ingrese el divisor entero positivo ");
    scanf("%d", &Num2);

        Cociente=0;
        i=Num;

        while ( i>=Num2 )
        {
            i=i-Num2;
            Cociente++;
        }
        printf("El resultado de la division es %d / %d = %d", Num, Num2, Cociente);
        return 0;
}
