/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09
 Fichier     : mesFonctions.h
 Auteur(s)   : Jérémy Delay & Eloïse Martin
 Date        : 23.05.2018

 But         : Déclare les fonctions définient dans le fichier mesFonctions.c

 Compilateur : MinGW-gcc 6.3.0
 -----------------------------------------------------------------------------------
*/

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H
#include <stdlib.h>

// Saisie d'un entier borné entre MIN et MAX (bornes comprises)
int saisie(const char *msg_invite, const char *msg_erreur, const int MIN,
        const int MAX);

// Affiche un double avec un formattage scpécifique
void affiche(double a, size_t i);

// Parcours un tableau de pointeur sur double
void parcoursDblPtr(const double *adr, const size_t TAILLE, void (*f)(double, size_t),
        double (*g)(double));

// Parcours un tableau de pointeur de pointeur sur double
void parcoursDblPtrPtr(const double **adr, const size_t TAILLE, void (*f)(double, size_t),
        double (*g)(double));

// Initialisation et allocation dynamique d'un tableau de double aléatoire
double* init_rand(const size_t TAILLE);

// copie d'adresse d'un tableau vers un pointeur de pointeur sur double
void pointeTab(const double *src, double **dest, const size_t TAILLE);

// Trie un tableau avec fonction donnée
void tri_double(double **adr, const size_t TAILLE, double (*f)(double));

// Calcule le carré d'un double
double carre(double x);

// Libère la mémoire d'un pointeur de pointeur
void libererMemoire(double ***ptr);

#endif /* MESFONCTIONS_H */
