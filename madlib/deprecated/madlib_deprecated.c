//Mad Libs Game.
//WARNING DO NOT RUN IN ANY CASE UNLESS YOU WANT MEMORY LEAK!!!

//TO-DO: DON'T TOUCH ANYTHING, JUST LEAVE IT AS-IS. I CANNOT FIX IT WITHOUT REMOVING GOTOs.
#include <stdio.h>
#include <ctype.h>

char Continue;
int main(void)
{
    char couleur[50];
    char nom[50];
    char beverage[50];
    printf("***MADLIB v1.0.0 ***\n");
restart:    
    printf("Enter Y to continue N to not: ");
    scanf(" %c", &Continue);
    while (getchar() != '\n');
    Continue = toupper(Continue);
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
    printf("\nLet's start shall we?\n");
    printf("Let's begin!\n");
reprendre:
    printf("Enter a Colour: ");
    scanf(" %s", couleur);
    while (getchar() != '\n');  
    printf("\nEnter a name: ");
    scanf(" %s", nom);
    while (getchar() != '\n');
    printf("\nEnter a drink: ");
    scanf(" %s", beverage);
    while (getchar() != '\n');
    printf("%s spilled %s on his %s jacket\n and he is angry now\n", nom, beverage, couleur);
reprendre1:    
    printf("Do you want to continue (Y/N): ");
    scanf(" %c", &Continue);
    while (getchar() != '\n');
    Continue = toupper(Continue);
    if(Continue == 'Y')
        goto reprendre;
    else if(Continue == 'N')
        goto exit;
    else
         goto reprendre1;
exit:
    return 0;
}
            
