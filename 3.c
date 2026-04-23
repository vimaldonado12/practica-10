#include <stdio.h>
int main () 
{
    int lista[10][10]; // Se declara el arreglo multidimensional
    int i,j;
    int renglon,columna;
    printf("\nDa el número de renglones y columnas separados con coma, "); 
    printf("cuyo valor no sea mayor a 10 "); 
    scanf("%d,%d",&renglon,&columna);
    if(((renglon>=1) && (renglon<=10))&&((columna>=1) && (columna<=10))) 
    {
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i= 0 ; i <= renglon-1 ; i++) 
        {
            for(j= 0 ; j <= columna-1 ; j++) 
            {
                printf("\nNúmero para el elemento [%d][%d] del arreglo ", i,j ); 
                scanf("%d",&lista[i][j]);
            }
        }    
        printf("\nLos valores dados son: \n");
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i= 0 ; i <= renglon-1 ; i++) 
        {
            for(j= 0 ; j <= columna-1 ; j++) 
            {
                printf("\n");
            }
        }
    }
    else printf("Los valores dados no es válido"); 
    printf("\n");
    return 0;
}
