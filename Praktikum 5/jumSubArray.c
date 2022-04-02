//Nama File : jumSubArray.c
//Deskripsi : menghitung besarnya penjumlahan sub array/Tabel lalu menampilkan pada layar.
//Nama		: Varrel
//NIM       : 24060121130062
//Kelas     : B1


#include <stdio.h>

int main (){
	//Kamus
	int i,j,N,jum;
	
    //Algoritma
    printf("Masukkan banyak elemen N (tabel) : ");
    scanf("%d", &N);
    int T[N];
    jum = 0;

	printf("Masukkan nilai elemen N: \n");
    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            jum += T[j];
        }
    }
    
    printf("Maka penjumlahan sub array/tabel adalah: %d", jum);
    
    return 0;
}
