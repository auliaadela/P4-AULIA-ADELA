#include <stdio.h> int main() {
int matriks1[10][10], matriks2[10][10], hasil[10][10];
int i, j, k, m, n, p, q, jumlah = 0; printf("Masukkan jumlah baris matriks pertama:
");
scanf("%d",&m);
printf("Masukkan jumlah kolom matriks pertama: ");
scanf("%d",&n);
printf("Masukkan jumlah baris matriks kedua: "); scanf("%d",&p);
printf("Masukkan jumlah kolom matriks kedua: "); scanf("%d",&q);
if(n != p){
printf("Matriks tidak dapat dikalikan satu sama lain.\n");
} else {
printf("Masukkan elemen matriks pertama: \n"); for(i = 0; i < m; i++){
for(j = 0; j < n; j++){ scanf("%d", &matriks1[i][j]);
}
}
printf("Masukkan elemen matriks kedua: \n"); for(i = 0; i < p; i++){
for(j = 0; j < q; j++){ scanf("%d", &matriks2[i][j]);
}
}
for(i = 0; i < m; i++){ for(j = 0; j < q; j++){
for(k = 0; k < p; k++){
jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
}
hasil[i][j] = jumlah; jumlah = 0;
}
}
printf("Hasil perkalian matriks: \n"); for(i = 0; i < m; i++){
for(j = 0; j < n; j++){ printf("%d\t", hasil[i][j]);
}
printf("\n");
}
}

return 0;
}
