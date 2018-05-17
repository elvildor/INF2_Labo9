/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mesFonctions.h
 * Author: Eloïse Martin
 *
 * Created on 16. mai 2018, 17:10
 */

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H
#include <stdlib.h>

// Saisie d'un entier borné
int saisie(const char* msg_invite, const char* msg_erreur, const int MIN,
        const int MAX);

// Affiche un tableau
void afficher(const double *adr, const size_t TAILLE);

// Initialisation de double aléatoire
double* init_rand(const size_t TAILLE);

// Trie d'un tableau avec fonction
double* tri_double(const double *adr, const size_t TAILLE, double (*f)(double));


#endif /* MESFONCTIONS_H */

