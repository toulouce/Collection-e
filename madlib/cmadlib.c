//Madlibs game

#include <stdio.h>
#include <ctype.h>

int main(void) {
   char Continue;
   char couleur[64];
   char nom[64];
   char beverage[64];
	printf("MADLIB\n");
	while(1) {
		printf("Do you wish to proceed(Y/N): ");
		fgets(&Continue, sizeof(char), stdin);
		//IN CASE USER INPUTS A LOWERCASE
		Continue = toupper(Continue);
		if(Continue == 'N')
			break; 
		printf("Please enter a name: ");
		scanf("%63s", nom);
		printf("Please enter a beverage: ");
		scanf("%63s", beverage);
		printf("Please enter a colour: ");
		scanf("%63s", couleur);
		printf("%s spilled %s on their %s jacket and now they're hella angry\n", nom, beverage, couleur);
	}
	printf("Bye!\n");
	printf("Exiting...\n");
	return 0;
}
