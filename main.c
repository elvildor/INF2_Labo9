/* 
 * File:   main.c
 * Author: Eloïse Martin
 *
 * Created on 16. mai 2018, 16:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mesFonctions.h"

int main(void) {

   const int TAILLE = saisie("Entrer la taille du futur tableau [min : 0 - max : 100] : ",
           "Taille superieur a 0.", 0, 100);
   const double *tab = init_rand(TAILLE);
   double *tabTri;

   printf("Tableau avant le tri\n");
   afficher(tab, TAILLE, NULL);

   printf("Tri par valeur\n");
   tabTri = tri_double(tab, TAILLE, NULL);
   printf("test %g\n", *tabTri);
   afficher(tabTri, TAILLE, NULL);
   printf("test %g\n", *tabTri);
   free(tabTri);
   printf("test %g\n", *tabTri);
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

