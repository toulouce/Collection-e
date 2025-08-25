//Madlibs game

#include <stdio.h>
#include <ctype.h>

int main(void) {
   char Continue;
   char *couleur;
   char *nom;
   char *beverage;
	printf("MADLIB\n");
	while(1) {
		printf("Do you wish to proceed(Y/N): ");
		scanf(" %c", &Continue);
		Continue = toupper(Continue);
		if(Continue == 'Y')
			continue;
		else if(Continue == 'N')
			break;
		printf("Please enter a name: ");
		scanf("%49s", nom);
		printf("Please enter a beverage: ");
		scanf("%49s", beverage);
		printf("Please enter a colour: ");
		scanf("%49s", couleur);
		printf("%s spilled %s on their %s jacket and now they're hella angry", nom, beverage, couleur);
	}
	printf("Bye!\n");
	printf("Exiting...\n");
	return 0;
}
