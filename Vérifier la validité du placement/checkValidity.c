//
// Created by Benjamin Lesieux on 18/04/2020.
//


int checkValidity(int **plateau, int dimX, int dimY, int**block, int x, int y);

/**
 * Comment ça marche ? Voilà comment :
 * Dans la fonction place_block, on ajoute élément par élément le bloc dans le plateau, ainsi
 * il suffit de vérifier que la position d'un 'O' du bloc corresponde à un emplacement valable dans le plateau.
 * si un emplacement vide du bloc se trouve en dehors du plateau, il ne faudra pas en tenir rigueur
 *
 * @param plateau - le plateau
 * @param dimX - dimension en nombre de colonnes
 * @param dimY - dimension en nombre de lignes
 * @param block - le block à poser
 * @param x, y - les coordonnées
 * @return 0 - Si valide, 1 - Si non valide
 * @info - On retourne un int car cela nous permettra de l'inclure dans une condition en tant que booléen
 * afin d'empêcher la pose du bloc dans le plateau, ou non.
 * */
int checkValidity(int **plateau, int dimX, int dimY, int **block, int x, int y) {

    for (int i = 0; i < 5; i++) { // Pourquoi 5 ? Tous les blocs sont en 5x5
        for (int j = 0; j < 5; j++) { // Et vérifie le placement éléments par éléments
            if ((x-i) == 0 || (y+i) == dimY ) // Si on dépasse les bordures
                return 1;
            else if
                (block[i][j] == "Mettre ici l'integer correspondant au '.' dans le bloc"
                && plateau[x-i][y+j] != "Mettre ici l'integer correspondant au code Ascii de l'emplacement valable de votre plateau")
                return 1;
        }
    }

    return 0;
}
