/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09
 Fichier     : main.c
 Auteur(s)   : Jérémy Delay & Eloïse Martin
 Date        : 23.05.2018

 But         : Réaliser un programme qui réserve dynamiquement de la mémoire pour
               y stocker un tableau de double et le trier en fonction de différents
               paramètres en utilisant des pointeurs

 Remarque(s) : 

 Compilateur : MinGW-gcc 6.3.0
 -----------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mesFonctions.h"

int main(void) {

   const int TAILLE = saisie("Entrer la taille du futur tableau [min : 0 - max : 100] : ",
                             "Taille non comprise entre les bornes.\a", 0, 100);
   const double *tab = init_rand(TAILLE);
   double **copie = (double**) calloc(TAILLE, sizeof (double*));
   
   printf("\nTableau avant le tri\n");
   parcoursDblPtr(tab, TAILLE, NULL);
   
   pointeTab(tab, copie, TAILLE);
   printf("\nTri par valeur\n");
   tri_double(copie, TAILLE, NULL);
   parcoursDblPtrPtr((const double**)copie, TAILLE, NULL);
   
   pointeTab(tab, copie, TAILLE);
   printf("\nTri par les sinus\n");
   tri_double(copie, TAILLE, sin);
   parcoursDblPtrPtr((const double**)copie, TAILLE, sin);
   
   pointeTab(tab, copie, TAILLE);
   printf("\nTri par les cosinus\n");
   tri_double(copie, TAILLE, cos);
   parcoursDblPtrPtr((const double**)copie, TAILLE, cos);
   
   pointeTab(tab, copie, TAILLE);
   printf("\nTri par les carres\n");
   tri_double(copie, TAILLE, carre);
   parcoursDblPtrPtr((const double**)copie, TAILLE, carre);
   
   libererMemoire(&copie);
   
   printf("\nFin du programme\n");
   return (EXIT_SUCCESS);
}