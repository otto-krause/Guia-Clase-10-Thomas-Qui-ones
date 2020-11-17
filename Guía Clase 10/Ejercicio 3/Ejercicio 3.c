    #include <stdlib.h>
    #include <stdio.h>

 void main()
 {
     int cant=0, Factura=0, PreUni=0, num=0, i=1, mayor, numfin;
     int Importe, Producto, prodmayor;

     while(Factura!=999)
     {
        printf("Ingrese el n%cmero de factura (para terminar ingrese 999)", 163);
            scanf("%d", &Factura);
        printf("Ingrese la cantidad ");
            scanf("%d", &cant);
        printf("Ingrese el precio unitario y el n%cmero del producto ", 163);
            scanf("%d %d", &PreUni, &num);

        if (Producto>prodmayor)
        {
            prodmayor=Producto;
            mayor=num;
        }
        prodmayor=Producto;
        Producto=PreUni*cant;

        if (PreUni>Importe)
        {
            Importe=PreUni;
        }
        i++;
     }

     printf("\nEl prodcuto mas vendido es el nro %d\n", num);
     printf("El mayor importe vendido es de %d", Importe);

     
 }
