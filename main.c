/* 
 * File:   main.c
 * Author: Eloïse Martin
 *
 * Created on 16. mai 2018, 16:33
 */

#include <stdio.h>
#include <stdlib.h>
#include "mesFonctions.h"

int main(void) {
   
   const int TAILLE = saisie("Entrer la taile du futur tableau [min : 0 - max : 100] : ",
           "Taille superieur a 0.",0,100);
   const double *tab = init_rand(TAILLE);
   
   printf("Tableau avant le tri\n");
   afficher(tab, TAILLE);
   
   printf("Tri par valeur\n");
   
   
   return (EXIT_SUCCESS);
}

