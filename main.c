#include <stdio.h>
#include <stdlib.h>

double addition()
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
double soustraction()
{
  float nombre1;
  float nombre2;
  float result;
  printf("Nombre 1 : ");
  scanf("%f", &nombre1);
  printf("Nombre 2 : ");
  scanf("%f", &nombre2);
  result = nombre1 - nombre2;

  return result;
}

double multiplication()
{
  float nombre1;
  float nombre2;
  float result;
  printf("Nombre 1 : ");
  scanf("%f", &nombre1);
  printf("Nombre 2 : ");
  scanf("%f", &nombre2);
  result = nombre1 * nombre2;

  return result;
}

double division()
{
  float nombre1;
  float nombre2;
  float result;
  printf("Nombre 1 : ");
  scanf("%f", &nombre1);
  printf("Nombre 2 : ");
  scanf("%f", &nombre2);
  if (nombre2 != 0) {
    result = nombre1 - nombre2;
  }
  else {
    result = 0;
  }
  return result;
}

int main(int argc, char *argv[])
{
    float resultat;
    int choix = 0;
    printf("Quelle operation ?");
    scanf("%d", &choix);
    switch (choix) {
        case 1 :
            resultat = addition();
            break;
        case 2 :
            resultat = soustraction();
            break;
        case 3 :
            resultat = multiplication();
            break;
        case 4 :
            resultat = division();
            break;
        default:
            break;
    }
    printf("Resultat :\n%f", resultat);
    return 0;
}
