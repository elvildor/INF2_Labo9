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

// Affiche un double
void affiche(double a, size_t i);

// Parcours un tableau de double*
void parcoursDblPtr(const double* adr, const size_t TAILLE, void (*f)(double, size_t),
        double (*g)(double));

// Parcours un tableau de double**
void parcoursDblPtrPtr(const double** adr, const size_t TAILLE, void (*f)(double, size_t),
        double (*g)(double));

// Initialisation de double aléatoire
double* init_rand(const size_t TAILLE);

// copie d'adresse
void pointeTab(const double *src, double **dest, const size_t TAILLE);

// Trie d'un tableau avec fonction
void tri_double(double **adr, const size_t TAILLE, double (*f)(double));

// Calcule le carré
double carre(double x);

// Libère la mémoire
void libererMemoire(double*** ptr);

#endif /* MESFONCTIONS_H */
