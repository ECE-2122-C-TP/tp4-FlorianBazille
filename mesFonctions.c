//
// Created by Florian on 27/09/2021.
//

#include <stdio.h>
#include "mesFonctions.h"

int saisirEntier()
{
    int entierSaisi = 0;
    printf("\nSaisir un entier\n");
    scanf("%i",&entierSaisi);
    return entierSaisi;
}

int getMax(int a, int b)
{
    int plusGrandEntier = ( a > b) ? a : b;
    return plusGrandEntier;
}

int calculAire(int lar, int lon)
{
    int aire = 0;
    aire = lar * lon;
    return aire;
}

int calculPerimetre(int lar, int lon)
{
    int perimetre = 0;
    perimetre = 2 * (lar + lon);
    return perimetre;
}

int testEntierMultipleDuSecond(int a, int b)
{
    int etat = ( a % b == 0) ? 1 : 0; /* si a est divisible par b, etat = 1 sinon etat = 0 */
    return etat;
}

int moyenneDeTroisNotes(int a, int b, int c)
{
    int moyenne = 0, etat = ( a >= 0 && b >= 0 && c >= 0 ) ? 1 : -1; /* on vérifie que les notes saisies sont conformes */
    if (etat == 1) /* si les notes sont effectivement conformes */
    {
        moyenne = ( a + b + c) / 3;
        return moyenne;
    }
    else
    {
        return etat; /* en cas de notes non-conformes, on renvoie -1 */
    }
}

int nombreEtagesPyramide(int nombreDePierresDisponibles)
{
    int pierresUtilisees = 1, compteur = 1;
    while ( nombreDePierresDisponibles >= pierresUtilisees * pierresUtilisees + pierresUtilisees )
        /* tant que le nombre de pierres disponibles est supérieur au nombre de pierres nécessaire à la création d'une pyramide à compteur-étages */
    {
        pierresUtilisees = pierresUtilisees * pierresUtilisees + pierresUtilisees; /* calcul du nombre de pierres nécessaire à la réalisation de compteur-étages */
        compteur = compteur +1; /* on incrémente le nombre d'étage réalisable */
    }
    return compteur;
}

int moyenneNombresAdditionnes(void)
{
    float nombresSaisi = 0, total = 0.0; /* initialisation des valeurs */
    int compteur = 0;
    while ( nombresSaisi >= 0 ) /* tant que le nombre qui sera saisi est positif */
    {
        total += nombresSaisi; /* à chaque tour de boucle, on ajoute au total la valeur saisie par l'utilisateur */
        compteur += 1;
        printf("Entrer un nombre entier positif pour continuer, sinon entrer un nombre negatif : \n");
        nombresSaisi = saisirNombrePositif();
    }
    if (compteur > 0)
    {
        printf("La moyenne des nombres entiers positifs est :\n %f", total/(compteur-1));
    }
    else /* sécurité : si l'utilisateur a directement entré un nombre entier négatif */
    {
        printf("Erreur");
    }
    return 0;
}

float saisirNombrePositif()
{
    float nombrePositif = 0;
    scanf("%f",&nombrePositif);
    return nombrePositif;
}