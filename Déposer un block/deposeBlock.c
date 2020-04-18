Fonction donnée sur moodle :

void depose_block(int** P, int nb_lig, int nb_col, int** B, int Px, int Py, int nb_lig_B, int nb_col_B)
{
    int i=0;
    int j;
    while(i<nb_lig_B)
    {
        j=0;
        while(j<nb_col_B)
        {
            P[Px-i][Py+j]=P[Px-i][Py+j]+ B[nb_lig_B-i-1][nb_col_B-j-1]; // Erreur ici, la forme apparaîtra inversée
            j++;
        }
        i++;
    }
}
 
Correction proposée :
 
void depose_block(int** P, int nb_lig, int nb_col, int** B, int Px, int Py, int nb_lig_B, int nb_col_B)
{
    for(int i=0;i<nb_lig_B;i++) for(int j=0;j<nb_col_B;j++) P[Px-i][Py+j]= B[nb_lig_B-i-1][j]);
}
 


PEUT AUSSI S'ECRIRE COMME CA

for(int i=0;i<nb_lig_B;i++){
    for(int j=0;j<nb_col_B;j++) {
        P[Px-i][Py+j]= B[nb_lig_B-i-1][j]);
    }
}

 OU MÊME COMME CA

int i,j;
for(i=0;i<nb_lig_B;i++){
    for(j=0;j<nb_col_B;j++) {
        P[Px-i][Py+j]= B[nb_lig_B-i-1][j]);
    }
}
