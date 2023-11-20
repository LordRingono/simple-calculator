#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultat;
    int choix = 0;
    printf("Quelle operation ?");
    scanf("%d", &choix);
    switch (choix) {
        case 1 :
            resultat = addition();
            break;
        default:
            break;
    }
    printf("Resultat :\n%f", resultat);
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
    
    return result;
}
