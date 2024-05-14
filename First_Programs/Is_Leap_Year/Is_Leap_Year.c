#include <stdio.h>


int main()
{
    int a;
    printf("Podaj rok: \n");
    scanf("%d", &a);
    int p = a%4;
    if(p!=0)
    {
        printf("Rok %d nie jest rokiem przestępnym\n", a);
    }
    if(p==0)
    {
        printf("Rok %d jest rokiem przestępnym\n", a);
    }

    return 0;



}