#include <stdio.h>

int sprawdzenie()
{
char a,b;
printf("Podaj dwa znaki oddzielone spacją.\n");
scanf("%s %s", &a,&b);



if (a == b)
    {
        return 1;
    }
if (a != b)
    {
        return 0;
    }
}
int main()
{
    printf("%d\n", sprawdzenie());
}