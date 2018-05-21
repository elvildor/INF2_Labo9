/*
 * main.c
 * 
 * Jérémy Delay & Eloïse Martin
 * 
 * 23.05.2018
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
   
   printf("Tableau avant le tri\n");
   parcoursDblPtr(tab, TAILLE, affiche, NULL);

   printf("Tri par valeur\n");
   tabTri = tri_double(tab, TAILLE, NULL);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, NULL);
   libererMemoire(&tabTri);
   
   printf("Tri par les sinus\n");
   tabTri = tri_double(tab, TAILLE, sin);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, sin);
   libererMemoire(&tabTri);

   printf("Tri par les cosinus\n");
   tabTri = tri_double(tab, TAILLE, cos);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, cos);
   libererMemoire(&tabTri);

   printf("Tri par les carres\n");
   tabTri = tri_double(tab, TAILLE, carre);
   parcoursDblPtrPtr(tabTri, TAILLE, affiche, carre);
   libererMemoire(&tabTri);

   return (EXIT_SUCCESS);
}