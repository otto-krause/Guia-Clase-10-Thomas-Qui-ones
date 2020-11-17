    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
    int Cont=0, Alumno=0, Cont1=0, Cont2=0, i=0, Cont3=0, ProMayor=0, mayora;
    float Pro=0, ProGen=0, acu=0, acu1=0, Nota=0, Notatp=0;

    i=1;
    do
    {
        printf("\nIngrese la nota de TP del alumno %d\n", i);
        scanf("%f", &Notatp);
        Cont=Cont+1;
        printf("Ingrese las notas de actividades del mismo (para finalizar ingrese un numero negativo)\n");
        do
        {
            scanf("%f", &Nota);
            if (Nota>0)
            {
                Cont=Cont+1;
                acu=acu+Nota;
            }
            if(Cont<3)
            {
                Cont1=Cont1+1;
            }
        }while(Nota>0);
        acu=acu+Notatp;
        Pro=acu/Cont;
        printf("El promedio del alumno %d es %.1f\n", i, Pro);
        acu1=acu1+Pro;
        if (Pro>ProMayor)
        {
            ProMayor=Pro;
            mayora=i;
        }
        if (Notatp>5)
        {
            Cont3=Cont3+1;
        }

        i++;
    }while(i<3);
    ProGen=acu1/i;
    printf("\nEl promedio general del curso es %.1f\n", ProGen);
    printf("El alumno con mayor promedio es el alumno %d\n", mayora);
    printf("%d son los alumnos con 2 o menos notas ingresadas\n", Cont1);
    printf("%d alumnos aprobaron el TP", Cont3);



    
 }
