//
// Created by Florian on 27/09/2021.
//

#include <stdio.h>
#include "mesFonctions.h"
#include "exercice.h"

int Exercice1()
{
    int entier1 = 0;
    printf("L'entier le plus grand est :\n %i", getMax(saisirEntier(),saisirEntier()));
    return 0;
}

int Exercice3()
{
    printf("Saisir la largeur, puis la longueur du rectangle\n");
    printf("Le perimetre de ce rectangle est :\n %d", calculPerimetre(saisirEntier(),saisirEntier()));
    printf("L'aire de ce rectangle est :\n %d", calculAire(saisirEntier(),saisirEntier()));
    return 0;
}

int Exercice4()
{
#define ENTIER_SUPERIEUR_EGALE 10
    int entierSaisi = saisirEntier();
    if (testEntierMultipleDuSecond(entierSaisi, 3) == 1)
    {
        printf("L'entier saisi est multiple de 3\n");
    }
    if (entierSaisi >= ENTIER_SUPERIEUR_EGALE)
    {
        printf("L'entier saisi est superieur ou egal a\n");
        printf("%i", ENTIER_SUPERIEUR_EGALE);
    }
    else
    {
        printf("L'entier saisi est inferieur a\n");
        printf("%i", ENTIER_SUPERIEUR_EGALE);
    }
    return 0;
}

int Exercice5()
{
    printf("La moyenne de ces trois notes est :\n");
    printf("%d",moyenneDeTroisNotes(saisirEntier(),saisirEntier(),saisirEntier()));
    return 0;
}

int Exercice7()
{
    int nombreRenseigne = 0, choix = 1, totalEleves = 0; /* initialisation des valeurs */
    while (choix != 0)
    {
        printf("Renseigner le nombre d'eleves de la classe ouverte :\n");
        totalEleves = totalEleves + saisirEntier(); /* au nombre d'élèves déjà présents, on ajoute celui de la classe déclarée dans la boucle précédente */
        printf("Creer une nouvelle classe ? \n O (non) ou 1 (oui)\n"); /* en créant une nouvelle classe, on entrera la boucle de nouveau */
        choix = saisirEntier();
    }
    printf("Le nombre total d'eleves est : \n %i",totalEleves);
    return 0;
}

int Exercice8()
{
    int nombreSaisi = saisirEntier();
    while ( nombreSaisi%7 != 0 && nombreSaisi%2 !=0 )
        /* si le reste issue de la division euclidienne entre le nombre saisi et 7 est différent de 0 alors ce nombre n'est pas un multiple de 7
         * si le reste issue de la division euclidienne entre le nombre saisi et 2 est différent de 0 alors ce nombre n'est pas un multiple de 2 */

    {
        nombreSaisi = saisirEntier();
    }
    return 0;
}

int Exercice9()
{
    int compteur = 0;
    printf("Indiquer le nombre de pierres disponibles : \n");
    compteur = nombreEtagesPyramide(saisirEntier());
    printf("Les habitants peuvent construires une pyramide du nombre d'etages suivant : \n %i", compteur);
    return 0;
}

int Exercice10()
{
    printf("Saisir un nombre positif :\n");
    return moyenneNombresAdditionnes();
}