#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int x = 1, y = 0;


    printf("Podaj liczbę: ");
    scanf("%d", &n);
    while (x <= n)
    {
        y += x*x;
        x += 1;

    }

    printf("Suma kwadratów liczb od 1 do %d, wynosi: %d",n,y);
    


    return 0;
}