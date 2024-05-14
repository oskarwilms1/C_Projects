#include <stdio.h>

int main()
{
    int a,b,x=1,k = 1;
    printf("Podaj dwie liczby oddzielone spacją.\n ");
    scanf("%d %d", &a,&b);
    while (x <= b)
        {

            k = k*a;
            x += 1;
        }

    printf("a do potęgi b jest równe: %d\n", k);
    return 0;
}