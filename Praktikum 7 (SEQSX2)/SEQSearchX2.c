//Nama File : SEQSearchX2.c
//Deskripsi : Mencari harga X dalam tabel T [1..N] secara sekuensial mulai dari T1, Hasilnya adalah indeks IX dimana T[i] = X (i terkecil),
// IX = 0 jika tidak ketemu dan sebuah boolean Found (true jika ketemu). (Menggunakan boolean)
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1
//tanggal	: 17-04-2022

//soal:
/*
Diketahui sebuah tabel berisi harga integer T [1..N], yang telah diisi. Tuliskanlah
algoritma yang jika diberikan sebuah X bernilai integer akan mencari apakah harga X
ada dalam T secara sekuensial (berturutan) mulai dari elemen pertama sampai ketemu
atau sampai elemen terakhir. Algoritma akan menghasilkan harga indeks IX dimana X
diketemukan pertama kalinya, IX diberi harga 0 jika pencarian tidak ketemu..
Pencarian segera dihentikan begitu harga pertama diketemukan.
Lalu di cek apakah element X merupakan bilangan positif atau negatif

N=10
T berisi: {-9,8,-7,6,-5,4,-3,2,-1,0}
X = 6
pemeriksaan dilakukan terhadap {9,8,7,6}
Output: index ke-3 dan X adalah bilangan positif
*/



#include "SEQSearchX2.h"
#include <stdio.h>
#include <stdbool.h>

void SEQSearchX2(int T[], int N, int X, int *IX, bool *Found)
{
    //Kamus Lokal
    int i;

    //Algoritma
    *Found = false; //{awal pencarian, belom ketemu}
    i = 0;
    while (i < N && !*Found){
        if (T[i] == X){
            *Found = true;
        }
        else{
            i++;
        }
    }
    if (*Found){
        *IX = i;
    }
    else{
        *IX = -1;
    }
    return 0;
}
