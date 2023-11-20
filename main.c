#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix = 0;
    printf("Quelle operation ?");
    scanf("%d", &choix);
    switch (choix) {
        case 1 :
            addition();
            break;
        default:
            break;
    }
    return 0;
}
int addition()
{
    float nombre1;
    float nombre2;
    float result;
    printf("Nombre 1 : ");
    scanf("%f", &nombre1);
    printf("Nombre 2 : ");
    scanf("%f", &nombre2);
    result = nombre1 + nombre2;
    printf("Resultat :\n%f", result);
    return 0;
}
