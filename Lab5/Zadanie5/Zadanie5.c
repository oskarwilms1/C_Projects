#include <stdio.h>
#include <math.h>
int a1,a2,b1,b2,a3,b3;
int odcinki()
{
    
printf("Podaj dwie liczby sybolizujące początek i koniec pierwszego odcinka.\n");
scanf("%d %d", &a1, &b1 );
printf("Podaj dwie liczby sybolizujące początek i koniec drugiego odcinka.\n");
scanf("%d %d", &a2, &b2 );
if(a1 >= b2 && b1>b2 || b1<=a2 && a1<a2)
    {
        a3 = -1;
        b3 = -1;
    }
else if (a1>a2)
    {
        a3 = a1;
    }
else
    {
        a3 = a2;
    }
}
int main()
{
    odcinki();
    printf("%d\n", a3);
}