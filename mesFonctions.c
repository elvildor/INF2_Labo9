/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09
 Fichier     : mesFonctions.c
 Auteur(s)   : Jérémy Delay & Eloïse Martin
 Date        : 23.05.2018

 But         : Définit les fonctions déclarées dans le fichier mesFonctions.h

 Compilateur : MinGW-gcc 6.3.0
 -----------------------------------------------------------------------------------
*/

#include "mesFonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define EOL '\n'
#define CLEAN_BUFFER while(getchar() != EOL)
#define BORNE 100     // afin d'abtenir des nombres dans cet intervalle ]-100;100[

int saisie(const char *msg_invite, const char *msg_erreur, const int MIN,
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

void affiche(double a, size_t i){
   printf("%u : ", i);
   printf("%11.5f\n", a);
}

void parcoursDblPtr(const double *adr, const size_t TAILLE, double (*g)(double)){
   assert(adr!= NULL);
   for(size_t i = 0; i < TAILLE; ++i){
      g ? affiche(g(*(adr + i)), i) : affiche(*(adr + i), i);
   }
}

void parcoursDblPtrPtr(const double **adr, const size_t TAILLE, double (*g)(double)){
   assert(adr != NULL);
   for(size_t i = 0; i < TAILLE; ++i){
      g ? affiche(g(**(adr + i)), i) : affiche(**(adr + i), i);
   }
}

double* init_rand(const size_t TAILLE) {
   double* adr = (double*) calloc(TAILLE, sizeof (double));
   assert(adr != NULL);

   srand(time(NULL));
   for (size_t i = 0; i < TAILLE; ++i) {
      if (rand() < rand()) {
         adr[i] = -((rand() % BORNE) + (rand() / (double) RAND_MAX));
      } else {
         adr[i] = (rand() % BORNE) + (rand() / (double) RAND_MAX);
      }
   }

   return adr;
}

void libererMemoire(double ***ptr) { // libererMemoire(&ptr);
   free(*ptr);
   *ptr = NULL;
}

void pointeTab(const double *src, double **dest, const size_t TAILLE){
   assert(src != NULL && dest != NULL);
   for(size_t i = 0; i < TAILLE; ++i){
      dest[i] = (double*)&src[i]; 
   }
}

void tri_double(double **adr, const size_t TAILLE, double (*f)(double)) {
   assert(adr != NULL);
   double* tmp;
   
   for (size_t i = 0; i < TAILLE; ++i) {
      for (size_t j = 0; j < TAILLE - i - 1; ++j) {
         if ((f ? f(*adr[j]) : *adr[j]) >= (f ? f(*adr[j + 1]) : *adr[j + 1])) {
            tmp = adr[j];
            adr[j] = adr[j + 1];
            adr[j + 1] = tmp;
         }
      }
   }
}

double carre(double x) {
   return x*x;
}
