//Mad Libs Game.
#include <stdio.h>
#include <ctype.h>

char Continue;
int main(void)
{
    printf("***MADLIB v1.0.0 ***\n");
restart:    
    printf("Enter Y to continue N to not: ");
    scanf("%c", &Continue);
    toupper(Continue);
    switch (Continue)
    {
    case 'Y':
        goto game;
    case 'N':
        goto exit;
    default:
        goto restart;
    }
game:
    char *couleur;
    char *nom;
    char *beverage;
    printf("\nLet's start shall we?\n");
reprendre:
    printf("Enter a Colour: ");
    scanf("%s", couleur);
    printf("\nEnter a name: ");
    scanf("%s", nom);
    printf("\nEnter a drink: ");
    scanf("%s", beverage);
    printf("%s spilled %s on his %s jacket\n and he is angry now\n", nom, beverage, couleur);
reprendre1:    
    printf("Do you want to continue (Y/N): ");
    scanf("%c" &Continue);
    toupper(Continue);
    if(Continue == 'Y')
        goto reprendre;
    else if(Continue == 'N')
        goto exit;
    else
         goto reprendre1;
exit:
    return 0;
}
            