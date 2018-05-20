/*
 * mesFonctions.h
 * 
 * Jérémy Delay & Eloïse Martin
 * 
 * 23.05.2018
 */

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H
#include <stdlib.h>

// Saisie d'un entier borné

int saisie(const char* msg_invite, const char* msg_erreur, const int MIN,
        const int MAX);

// Affiche un tableau

void afficher(const double *adr, const size_t TAILLE, double (*f)(double));

// Initialisation de double aléatoire

double* init_rand(const size_t TAILLE);

// Trie d'un tableau avec fonction

double* tri_double(const double *adr, const size_t TAILLE, double (*f)(double));

// carré

double carre(double x);

// Copie d'adresses dans un tableau

void pointeTab(const double *src, double **dest, const size_t TAILLE);

#endif /* MESFONCTIONS_H */

