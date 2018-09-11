/*
 ============================================================================
 Name        : testmarco.c
 Author      : marco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//TEST avec la valeur 8

	int nombreMystere = 8;
	int nombreEntre = 0;
	int nombreCoups=0;

	const int MAX = 1000, MIN = 1;


	/*Génération du nombre aléatoire
	 srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;*/


	/* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */


	do

	{

		// On demande le nombre

		printf("Quel est le nombre ? ");

		scanf("%d", &nombreEntre);

		nombreCoups++;

		// On compare le nombre entré avec le nombre mystère


		if (nombreMystere > nombreEntre)

			printf("C'est plus !\n\n");

		else if (nombreMystere < nombreEntre)

			printf("C'est moins !\n\n");

		else

			printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");

	} while (nombreCoups< 100 && nombreEntre != nombreMystere);



	return 0;
}
