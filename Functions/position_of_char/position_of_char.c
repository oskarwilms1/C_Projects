#include <stdio.h>

char zwrot_znaku()
{
    printf("Podaj wyraz, oraz liczbę, oddzielone spacjami.Liczba musi być większa od 0 i mniejsza lub równa liczbie znaków twojego wyrazu\n");
    char wyraz[100] = {0};
    int a;
    scanf("%s %d", wyraz, &a);
    return wyraz[a-1];

}

int main()
{
    printf("%c\n", zwrot_znaku());



}
