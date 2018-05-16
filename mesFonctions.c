/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mesFonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define EOL '\n'
#define CLEAN_BUFFER while(getchar() != EOL)

int saisie(const char* msg_invite, const char* msg_erreur, const int MIN,
        const int MAX){
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
   } while ((!ok++ || retour > MAX || retour < MIN ) && printf("%s\n", msg_erreur)); 
   return (int)retour; 
}

void afficher(const double *adr, const size_t TAILLE){
   // assert(ard != NULL);
   if(adr){
      for(size_t i = 0; i < TAILLE; ++i){
         printf("%d : ", i);
         if(adr[i] >= 0) printf(" ");
         printf("%g\n", adr[i]);
      }
   }
}

void init_rand(double *adr, const size_t TAILLE){
   if(adr){
      srand(time(NULL));
      for(size_t i = 0; i < TAILLE; ++i){
         if(rand() < rand()){
            adr[i] = -((rand() % 20) + (rand()/(double)RAND_MAX));
         }else{
            adr[i] = (rand() % 20) + (rand()/(double)RAND_MAX);
         }
      }
   }
}


// jamais stocker la valeur
// créer tab valeurs
// créer tab ptr(alignés)
// trier(tab, fonct)
// parcourir(tab, fonct)

double* tri_double(const double *adr, const size_t TAILLE, double (*f)(double)){
   if(adr){
      double ** new = (double**) calloc(TAILLE, sizeof(double*));
      for(size_t i = 0; i < TAILLE; ++i){
         *new[i] = adr[i];
      }
      
   }
}