#include <stdio.h>
#include <math.h>
#include <string.h>
int n;

int sprawdzenie(int n,char wyraz[n])

{
    
    
    int k = n-1;
    int i = 0;
    while(i <= n/2)
    {
        if(i != k)
        {
            if (wyraz[i] == wyraz[k])
            {
                i++;
                k -= 1;
                
            }
            if (wyraz[i] != wyraz[k])
            {
                return 0;
            }
        }
        if(i == k)
        {
            return 1;
        }
    }   
    return 1;
}

int main()
{
    char wyraz[n];
    printf("Podaj długośc twojego wyrazu.\n");
    scanf("%d", &n);
    
    printf("Podaj wyraz podejrzany o bycie palindromem.\n");
    scanf("%s", wyraz);
    if (sprawdzenie(n,wyraz) == 1)
        {
            printf("Wyraz jest palindromem\n");
        }
    if (sprawdzenie(n,wyraz) == 0)
        {
            printf("Wyraz nie jest palindromem\n");
        }


return 0;

}
