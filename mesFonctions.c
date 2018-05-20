/*
 * mesFonctions.c
 * 
 * Jérémy Delay & Eloïse Martin
 * 
 * 23.05.2018
 */

#include "mesFonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <limits.h>

#define EOL '\n'
#define CLEAN_BUFFER while(getchar() != EOL)

// Saisie d'un entier avec min et max

int saisie(const char* msg_invite, const char* msg_erreur, const int MIN,
        const int MAX) {
   int i = 0;
   int ok = 1;
   long retour;
   do {
      printf("%s", msg_invite);
      i = scanf("%d", &retour);
      if (!i || getchar() != EOL) {
         CLEAN_BUFFER;
         ok = 0;
      }
   } while ((!ok++ || retour > MAX || retour < MIN) && printf("%s\n", msg_erreur));
   return (int) retour;
}

// Affichage d'un tableau avec fonction optionnelle

void afficher(const double *adr, const size_t TAILLE, double (*f)(double)) {
   assert(adr != NULL);

   for (size_t i = 0; i < TAILLE; ++i) {
      printf("%d : ", i);
      if ((f ? f(adr[i]) : adr[i]) >= 0) printf(" ");
      printf("%g\n", (f ? f(adr[i]) : adr[i]));
   }
}

// Création et initialisation d'un tableau de valeurs aléatoires de type double

double* init_rand(const size_t TAILLE) {
   double* adr = (double*) calloc(TAILLE, sizeof (double));
   assert(adr != NULL);
   
   srand(time(NULL));
   for (size_t i = 0; i < TAILLE; ++i) {
      if (rand() < rand()) {
         adr[i] = -((rand() % 20) + (rand() / (double) RAND_MAX));
      } else {
         adr[i] = (rand() % 20) + (rand() / (double) RAND_MAX);
      }
   }
   
   return adr;
}

// Copie d'adresses dans un tableau

void pointeTab(const double *src, double **dest, const size_t TAILLE){
   for (size_t i = 0; i < TAILLE; ++i) {
      dest[i] = src + i;
      printf("pos : %d - val : %d ", i, *dest[i]);
   }
}

// jamais stocker la valeur
// créer tab valeurs
// créer tab ptr(alignés)
// trier(tab, fonct)
// parcourir(tab, fonct)

double* tri_double(const double *adr, const size_t TAILLE, double (*f)(double)) {
   assert(adr != NULL);
   double* tmp;
   
   for(size_t i = 0; i < TAILLE; ++i){
      for(size_t j = 0; j < TAILLE - i - 1; ++j){
         if((f ? f(*copie[j]) : *new[j]) > (f ? f(*new[j + 1]) : *new[j + 1])){
            tmp = new[j];
            new[j] = new[j + 1];
            new[j + 1] = tmp;
         }
      }
   }
   
   return *new;
}

double carre(double x){
   return x*x;
}