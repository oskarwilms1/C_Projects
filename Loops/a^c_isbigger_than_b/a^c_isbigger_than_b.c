#include <stdio.h>

int main()
{
    int a, c =1, x = 1;
    printf("Podaj 2 liczby oddzielone spacjami:\n");
    int b;
    scanf("%d %d", &a, &b);
   
    int k = a;
    while (k <= b)
        {
            
            c += 1;
            k=k*a;


        }
    printf("a do potęgi: %d, jest większe od b\n", c);
return 0;

}