 
/*
 * Il faut comprendre que la bordure et la zone de jeu sont deux choses différentes : Il faut donc faire 2 fonctions.
 * Faire deux fonctions implique donc de prendre en compte les indexes. Je m'explique :
 * Il faut prendre en compte la dimension de la bordure. Ma techniques est de "fusionner" la bordure et la plateforme de
 * jeu en une seule et même liste 2D.
 * Ce qui veut dire que la première case de la plateforme de jeu ne sera pas [0][0] mais en [2][2] dans mon cas.
 * En effet, lorsqu'on regarde la bordure (Voir annexe) on voit que celle ci fait deux de large à gauche et en haut.
 * 
 * Les valeurs ont été changées par des "$". On ne fait pas le travail à votre place.
 */

int** create_borders(int r, int c)
{

    int i,j;
    int **array = (int**)malloc(r* sizeof(int*));
    for (i=0;i<r;i++) array[i] = (int*)malloc(c* sizeof(int));
    
    for (j=$;j<$;j++) array[1][j] = 205; //ASCII code for "="
    for (j=$;j<$;j++) array[r-1][j] = 205;
    
    for (i=$;i<$;i++) array[i][1] = 186; //ASCII code for "║"
    for (i=$;i<$;i++) array[i][c-1] = 186;

    array[$][$] = 201; //ASCII code for "╔"
    array[$][$] = 200; //ASCII code for "╚"
    array[$][$] = 187; //ASCII code for "╗"
    array[$][$] = 188; //ASCII code for "╝"

    return array;
}


int** create_2D_dyn_diamond(int r, int c)
{
    int i,j;
    int **array = create_borders(r,c); // Création de la bordure 

	(Code pour créer le diamant)

    return array;
}