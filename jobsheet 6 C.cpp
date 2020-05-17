#include<stdio.h>

int main(){
int i, j, matriks[100][100], transpose[100][100];

printf("Nama : Frederick Benaya Situmorang"); printf("\nNIM : F1B019057"); printf("\nKelompok : 12\n\n");

for(i = 0; i < 3; i++)
{for(j = 0; j < 3; j++)
{printf("Masukan Nilai Matriks [%d][%d] : ", i+1,
j+1);
scanf("%d", &matriks[i][j]);}}

for (i = 0; i < 3; i++)
{for(j = 0; j < 3; j++)
{transpose[j][i] = matriks[i][j];}}

printf("\nMatriks\n"); for (i = 0; i < 3; i++)
{for(j = 0; j < 3; j++)
{printf("%5d", matriks[i][j]);} printf("\n");}

printf("\nTranspose Matriks\n"); for (i = 0; i < 3; i++)
{for (j = 0; j < 3; j++)
{printf("%5d", transpose[i][j]);} printf("\n");}}
