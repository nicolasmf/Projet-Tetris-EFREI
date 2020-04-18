#include <stdio.h>
#include <stdlib.h>

/*---------- Fonction qui cr�e un tableau dynamique � deux dimenstions -------*/
int** create_2D_Array(int nb_lig, int nb_col)
{
    int i;
    int** plateau=(int**)malloc(nb_lig*sizeof(int*));
    for (i=0;i<nb_col; i++)
    {
        plateau[i]=(int*)malloc(nb_col*sizeof(int));
    }
    return plateau;
}

/* ---- une fonction qui remplit le plateau de jeu avec une zonne de jeu carr�e */
void fill_2D_plateau_Carre(int** P, int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            P[i][j]=0;
        }
    }
    // placer les valeurs 1

    for (i=3;i<nb_lig-3; i++)
    {
        for (j=3;j<nb_col-3; j++)
        {
            P[i][j]=1;
        }
    }
}

/*------- Remplissage d'un Block (Tableau 2D) avec la forme T  --------*/
void fill_Forme_T(int** P, int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            P[i][j]=0;
        }
    }
    // placer les valeurs 1

    for (i=1;i<nb_lig-1; i++)
    {
            P[nb_lig-1][i]=1;
    }
    for (i=1;i<nb_lig-1; i++)
    {
            P[i][nb_col/2]=1;
    }
}


/*------- Affichage d'un Tableau 2D  --------*/

void display_2D_array(int** P, int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            printf("%3d", P[i][j]) ;
        }
        printf("\n");
    }
}

/*------- Affichage d'un Tableau 2D associant des codes asccii au chiffres 0, 1 et 2, vous choisirez le caract�re que vous voulez pour 1 et 2 --------*/

void display_ascii(int** P, int nb_lig, int nb_col)
{
    int i, j;
    for (i=0;i<nb_lig; i++)
    {
        for (j=0;j<nb_col; j++)
        {
            if(P[i][j]==0)
            {
                printf("%3c", ' ');
            }
            else
            {
               if (P[i][j]==1)
               {
                    printf("%3c", '*');
               }
               else
               {
                   printf("%3c", '#');
               }

            }

        }
        printf("\n");
    }
}


/*------- D�poser un bloc B sur le plateau P � une position (Px,Py) 2D --------*/
void depose_block(int** P, int nb_lig, int nb_col, int** B, int Px, int Py, int nb_lig_B, int nb_col_B)
{
    int i=0;
    int j;
    while(i<nb_lig_B)
    {
        j=0;
        while(j<nb_col_B)
        {
            P[Px-i][Py+j]=P[Px-i][Py+j]+ B[nb_lig_B-i-1][j];
            j++;
        }
        i++;
    }
}

/*------- Saisie s�curis�e des dimenstions d'un Tableau 2D --------*/
void getDim2Darray(int *l, int*c)
{
    int n,ch;
    do{
        printf("Entrez le nombre de lignes (>=21) et de colonnes (>=21) de votre plateau \n");
        n=scanf(" %d%d",l,c);
        while ((ch = (int)getchar()) != '\n' && ch != EOF);
    }while (n!=2 || (n==2 && (*l<21 ||*c<21)));
}

/* ------- Free 2D array ------*/

void free_2D_array(int **A, int l, int c)
{
    int i;
    for(i=0;i<l;i++)
        free (A[i]);
    free (A);
}
#define MAX_BLOCK 5
int main()
{

    //   _____________________
    //  |    ----------      |
    //  |    ----------      |
    //  |    ----------      |
    //  |____________________|
    int** mon_plateau;
    int L,C;
    int **Block;
    getDim2Darray(&L,&C);
    mon_plateau=create_2D_Array(L, C);
    fill_2D_plateau_Carre(mon_plateau, L, C);
    //display_2D_array(mon_plateau, L, C);
    Block=create_2D_Array(MAX_BLOCK, MAX_BLOCK);
    fill_Forme_T(Block, MAX_BLOCK, MAX_BLOCK);
    //display_2D_array(Block, MAX_BLOCK, MAX_BLOCK);
    // placer le bloc T � la position (13, 6)
    depose_block(mon_plateau, L, C, Block, 13, 6, MAX_BLOCK, MAX_BLOCK);
    //display_2D_array(mon_plateau, 15, 21);
   display_ascii(mon_plateau, L, C);
    free_2D_array(mon_plateau,L,C);
    free_2D_array(Block, MAX_BLOCK, MAX_BLOCK);
    system("clear");
    //printf("\033[H\033[2J");
    return 0;
}
