
/*
* Le principe est simple :
* Il faut d'abord alloquer dynamiquement une liste en 2D de dimension x.
* 
* Ensuite, on créé une fonction pour chaque plateau (Général, Cercle, Diamant et Triangle) en utilisant la fonction create_block_sh. En paramètres, entrez la 
* dimension de la plus longue / large pièce (Dans le cas général, la plus longue est "l" et la plus large est "_l"). (Voir annexe pour le nom des formes)
* On peut utiliser un switch pour que l'utilisateur choisisse la forme souhaitée où, dans le cas du choix entre 3 formes au hasard, que le programme choisisse les formes.
*
* Evidemment, il faut créer CHAQUE formes (57, oui ça fait beaucoup).
* Le but est donc de trouver un moyen plus rapide que de saisir la forme block par block (Hint : Utilisez des boucles ;) ).
* 
*
* N'oubliez pas qu'une fonction display_ascii est donnée sur moodle, ce qui permet d'afficher " " à la place de 0, "*" à la place de 1 et "#" à la place de 2.  
*/



int **create_block_sh(int x) {
    int i;
 
    int **block = (int **) malloc(x * sizeof(int *));
    for (i = 0; i < x; i++) block[i] = (int *) malloc(x * sizeof(int));
 
    return block;
}
 
 
int **create_block_all(int x)
{
    int **block = create_block_sh(4); // Taille maximum 
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) block[i][j] = 1; // Remplissage de l'array avec des "1" (Qui sera affiché "*" lors de l'affichage)
 
    switch (x){
        case 1: // Si x = 1 alors return le block 
		
            block[2][0] = 2; //  
            block[3][0] = 2; // Création de la forme l1 (Voir annexe)
            block[3][1] = 2; // 
            return block;
        case 2: // Si x = 2 alors return le block 
		
            block[2][1] = 2; //
            block[3][0] = 2; // Création de la forme l2 (Voir annexe)
            block[3][1] = 2; //
            return block;
        case 3:
            ...
    }
}