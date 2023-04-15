#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int a = 10;
    int b = 20;

    int *p;
    int *q;

    p=&a;

    printf("el valor de a es %d \n",a);
    printf("donde esta a es %d\n",&a);
    printf("la direccion contenida en p es %d\n",p);
    printf("el valor contenido en p es %d\n",*p);
    printf("la direccion de p es %d\n\n\n",&p);

    q=&a;
    printf("la direccion contenida en p es %d\n",q);
    printf("el valor contenido en p es %d\n",*q);
    printf("la direccion de p es %d\n\n\n\n",&q);

    *p=*p+1;

    printf("la direccion contenida en p es %d\n",p);
    printf("el valor contenido en p es %d\n",*p);
    printf("la direccion de p es %d\n\n\n",&p);

    printf("la direccion contenida en p es %d\n",q);
    printf("el valor contenido en p es %d\n",*q);
    printf("la direccion de p es %d\n\n\n",&q);

    if (p == q) printf("P y Q contienen el mismo valor\n");
        else printf("P y Q contienen distinto valor\n");
    if (*p == *q) printf("Los contenidos apuntados desde P y Q son iguales\n");
        else printf("Los contenidos apuntados desde P y Q son distintos\n");

    q=&b;

    *q=22;

    if (p == q) printf("P y Q contienen el mismo valor\n");
        else printf("P y Q contienen distinto valor\n");
    if (*p == *q) printf("Los contenidos apuntados desde P y Q son iguales\n");
        else printf("Los contenidos apuntados desde P y Q son distintos\n");

    printf("la direccion contenida en p es %d\n",p);
    printf("el valor contenido en p es %d\n",*p);
    printf("la direccion de p es %d\n\n\n",&p);

    printf("la direccion contenida en q es %d\n",q);
    printf("el valor contenido en q es %d\n",*q);
    printf("la direccion de q es %d\n\n\n\n",&q);


    return 0;
}
