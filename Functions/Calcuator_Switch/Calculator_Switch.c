#include <stdio.h>


int main()
{
    int opcja;
    float a,b;
printf("Witaj w kalkulatorze! Podaj dwie liczby oddzielone spacją.\n");
scanf("%f %f", &a, &b);
printf("Wpisz odpowiedni numer działania.\n");
printf("Dodawanie - 1\nOdejmowanie - 2\nMnożenie - 3\nDzielenie - 4\n");
scanf("%d", &opcja);
switch(opcja)
    {
        case 1:
            float suma = a+b;
            printf("Suma tych liczb to: %f\n", suma);
            break;
        case 2:
            float roznica = a-b;
            printf("Różnica tych liczb to: %f\n", roznica);
            break;
        case 3:
            float iloczyn = a*b;
            printf("Iloczyn tych liczb to: %f\n", iloczyn);
            break;
        case 4:
            float iloraz = a/b;
            printf("Iloraz tych liczb to: %f\n", iloraz);
            break;    


    }



return 0;
}