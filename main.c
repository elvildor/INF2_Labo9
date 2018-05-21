/*
 * main.c
 * 
 * Jérémy Delay & Eloïse Martin
 * 
 * 23.05.2018
 * 
 * Commentaires prof :
 * jamais stocker la valeur
 * créer tab valeurs
 * créer tabPtr(alignés)
 * trier(tabPtr, fonct)
 * parcourir(tabPtr, fonct)
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mesFonctions.h"

int main(void) {

   const int TAILLE = saisie("Entrer la taille du futur tableau [min : 0 - max : 100] : ",
           "Taille superieur a 0.", 0, 100);
   const double *tab = init_rand(TAILLE);
   double **tabTri = (double**) calloc(TAILLE, sizeof (double*));
   
   printf("\nTableau avant le tri\n");
   parcoursDblPtr(tab, TAILLE, affiche, NULL);
   
   pointeTab(tab, tabTri, TAILLE);
   printf("\nTri par valeur\n");
   tri_double(tabTri, TAILLE, NULL);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, NULL);
   
   pointeTab(tab, tabTri, TAILLE);
   printf("\nTri par les sinus\n");
   tri_double(tabTri, TAILLE, sin);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, sin);
   
   pointeTab(tab, tabTri, TAILLE);
   printf("\nTri par les cosinus\n");
   tri_double(tabTri, TAILLE, cos);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, cos);
   
   pointeTab(tab, tabTri, TAILLE);
   printf("\nTri par les carres\n");
   tri_double(tabTri, TAILLE, carre);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, carre);
   
   libererMemoire(&tabTri);
   
   printf("\nFin du programme\n");
   return (EXIT_SUCCESS);
}