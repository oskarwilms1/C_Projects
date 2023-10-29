#include <stdio.h>


int main()
{
    
    int dzien, miesiac, rok;
    int prawda = 0;
    
    printf("Użytkowniku! Podaj 3 liczby oddzielone spacjami reprezentujące dzień, miesiąc i rok!\n");
    scanf("%d %d %d", &dzien, &miesiac, &rok);
    int reszta =  rok%4;
        if(dzien<=31 && miesiac == 1)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;

        }
        if(dzien<=29 && miesiac == 2 && reszta == 0)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;

        }
        if(dzien<=28 && miesiac == 2 && reszta != 0)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }
        if(dzien<=31 && miesiac == 3)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }  
        if(dzien<=30 && miesiac == 4)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=31 && miesiac == 5)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=30 && miesiac == 6)
        {   
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=31 && miesiac == 7)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=31 && miesiac == 8)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=30 && miesiac == 9)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=31 && miesiac == 10)
        {   
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=30 && miesiac == 11)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }    
        if(dzien<=31 && miesiac == 12)
        {
        printf("Twoja data jest poprawna i wygląda następująco: %d.%d.%d\n", dzien, miesiac, rok);
        prawda += 1;
        }
        if(prawda == 0)
        {
        printf("Twoja data jest niepoprawna\n");
        }


  















    return 0;
}