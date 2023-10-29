#include <stdio.h>


int main()
{
    float num1 , num2;
    printf("Proszę podać dwie liczby oddzielone spacją:\n");
    scanf("%f %f", &num1, &num2);
    int r1 = num1, r2 = num2;
    float dod = num1 + num2;
    float odej = num1 - num2;
    float mnoz = num1 * num2;
    float dziel = num1 / num2;
    int resz = r1 % r2;
    printf("Wynik dodawania tych liczb: %f\n", dod);
    printf("Wynik odejmowania tych liczb: %f\n", odej);
    printf("Wynik mnożenia tych liczb: %f\n", mnoz);
    printf("Wynik dzielenia tych liczb: %f\n", dziel);
    printf("Reszta z dzielenia tych liczb: %d\n", resz);




    return 0;

}