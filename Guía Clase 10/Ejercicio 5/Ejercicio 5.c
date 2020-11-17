#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, Menor=0 ; 
    int hom=0, Cont=0, menor30=0, Prototal=0 ; 
    long int DNI=0;
    float Porcentaje=0; 
    char Sexo;



    do{
            printf("Ingrese su DNI ");
            scanf("%li", &DNI);

            if (DNI>0)
            {

            printf("Ingrese su sexo (m o f) ");
            scanf("%s", &Sexo);


            printf("Ingrese su a%co de nacimiento ",164);
            scanf("%d", &a);
            }

            Prototal=Prototal+1;
            Menor=2020-a;
        if (Menor<18)
        {
            Cont=Cont+1;
        }

        Porcentaje=Cont*100/Prototal;

        if ((DNI<30000000) && (DNI>0))
            {
            menor30=menor30+1;
            }

        if (Sexo=='m')
        {
            hom++;
        }


        }while (DNI>0);




        printf("Se ingresaron un total de %d mujeres y %d hombres \n", Prototal-hom,hom);
        printf("Un %.1f %c son menores de edad\n",Porcentaje, 37);
        printf("%d personas tienen un DNI inferior a 30 millones",menor30);



    return 0;
}
