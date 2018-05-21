/*
 -----------------------------------------------------------------------------------
 Laboratoire : 09
 Fichier     : mesFonctions.h
 Auteur(s)   : Jérémy Delay & Eloïse Martin
 Date        : 23.05.2018

 But         : Déclare les fonctions définies dans le fichier mesFonctions.c

 Compilateur : MinGW-gcc 6.3.0
 -----------------------------------------------------------------------------------
*/

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H
#include <stdlib.h>

// Saisie d'un entier borné entre MIN et MAX (bornes comprises)
int saisie(const char *msg_invite, const char *msg_erreur, const int MIN,
        const int MAX);

// Affiche un double avec un formattage spécifique
void affiche(double a, size_t i);

// Parcours un tableau de pointeur sur double. Avec le dernier paramètre à null,
// cette fonction affiche l'identité
void parcoursDblPtr(const double *adr, const size_t TAILLE, double (*g)(double));

// Parcours un tableau de pointeur de pointeur sur double, avec le dernier paramètre
// à null, cette fonction affiche l'identité
void parcoursDblPtrPtr(const double **adr, const size_t TAILLE, double (*g)(double));

// Initialisation et allocation dynamique d'un tableau de double aléatoire
double* init_rand(const size_t TAILLE);

// Copie l'adresse d'un tableau vers un pointeur de pointeur sur double
void pointeTab(const double *src, double **dest, const size_t TAILLE);

// Trie un tableau selon la fonction donnée
void tri_double(double **adr, const size_t TAILLE, double (*f)(double));

// Calcule le carré d'un double
double carre(double x);

// Libère la mémoire d'un pointeur de pointeur
void libererMemoire(double ***ptr);

#endif /* MESFONCTIONS_H */
