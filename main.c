#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nombre1;
    float nombre2;
    float result;
    printf("Nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Nombre 2 : ");
    scanf("%d", &nombre2);
    result = nombre1 + nombre2;
    printf("Hello world!\n%d", result);
    return 0;
}
