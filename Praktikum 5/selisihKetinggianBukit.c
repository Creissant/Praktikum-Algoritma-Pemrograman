//Nama File : selisihKetinggianBukit.c
//Deskripsi : menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya lalu menampilkan hasil pada layar.
//Nama		: Varrel
//NIM       : 24060121130062
//Kelas     : B1


#include <stdio.h>

int main() {
	// kamus lokal
	int i,N, j, kecil, besar;
	
    // algoritma
    printf("Masukkan banyak data jalur lintasan: ");
    scanf("%d", &N);
    int T[N];
    
    printf("Masukkan nilai data jalur lintasan: \n");
    for (i = 0; i < N; i++)
	scanf("%d", &T[i]);

    besar = T[0];
    kecil = T[0];

    for (i = 0; i < N; i++) if (T[i] > besar) besar = T[i];

    for (i = 0; i < N; i++) if (T[i] < kecil) kecil = T[i];
	
    j = besar-kecil;
    printf("selisih terbesarnya adalah: %d", j);
    
    return 0;
	
}
