    #include <stdlib.h>
    #include <stdio.h>

 int main()
 {
     int Nota=0, nota2=0, i=1;
     char Nombre[20], Nombre2[20];

     do
     {
        printf("\nIngrese el nombre del alumno %d ", i);
        scanf("%s", &Nombre);
        printf("\nAhora ingrese la nota que le corresponde ");
        scanf("%d", &Nota);
        if (Nota>8)
        {
            printf("\nEl alumno %s tiene una nota mayor a 8", Nombre);
        }
        i++;
     }while(i<16);

     return 0;
 }
