//
// Created by Benjamin Lesieux on 18/04/2020.
//


#include <stdio.h>
#include <stdlib.h>

int ***politiquePresBloc2(int typePlateau);


/**
 * Cette politique consiste à afficher 3 blocs au hasard parmis
 * ceux disponibles pour le plateau en question.
 *
 * @param typePlateau - Ici vous choisissez, mais par exemple 1 = Cercle ; 2 = Losange ; 3 = Triangle
 * @return int*** - Pourquoi on retourne un tableau 3D ? Car ce tableau contiendra les 3 blocs (qui sont des tableaux 2D)
 * */
int ***politiquePresBloc2(int typePlateau) {

    int ***selectedBlocks = NULL; // A vous de créer un tableau 3D dynamique
                                 // (tips : c'est presque pareil que pour les tableaux 2D)

    int id; // L'id du bloc obtenu au hasard

    for (int i = 0; i < 3; i++) { // On veut choisir 3 blocs donc une boucle for c'est plutôt nice
        if (i % 2 == 0) {
            if {
                (plateau == 1) id = borne1 + rand()%borne2; // ici à vous de définir les bornes (pour le cercle ce serait de 21 à 33)
            }

            else if {
                (plateau == 2) id = borne1 + rand()%borne2; // pareil
            }

            else if {
                (plateau == 3) id = borne1 + rand()%borne2; // pareil
            }
        } else {
            id = borne1 + rand() % borne2; // pareil (ici c'est pour les blocs communs à tous)
        }
    }
}