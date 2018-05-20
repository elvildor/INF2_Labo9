/*
 * main.c
 * 
 * Jérémy Delay & Eloïse Martin
 * 
 * 23.05.2018
 * 
 * Tri d'un tableau constant
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
   double **copie = (double**) calloc(TAILLE, sizeof (double*));
   double *tabTri;
   
   pointeTab(tab, copie, TAILLE);
   
   printf("Tableau avant le tri\n");
   afficher(tab, TAILLE, NULL);

   printf("Tri par valeur\n");
   tabTri = tri_double(tab, TAILLE, NULL);
   afficher(tabTri, TAILLE, NULL);
   free(tabTri);
   tabTri = NULL;
   
   printf("Tri par les sinus\n");
   tabTri = tri_double(tab, TAILLE, sin);
   afficher(tabTri, TAILLE, sin);
   free(tabTri);
   tabTri = NULL;

   printf("Tri par les cosinus\n");
   tabTri = tri_double(tab, TAILLE, cos);
   afficher(tabTri, TAILLE, cos);
   free(tabTri);
   tabTri = NULL;

   printf("Tri par les carres\n");
   tabTri = tri_double(tab, TAILLE, carre);
   afficher(tabTri, TAILLE, carre);
   free(tabTri);
   tabTri = NULL;

   return (EXIT_SUCCESS);
}

