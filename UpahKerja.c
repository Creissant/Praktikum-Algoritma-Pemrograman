//Nama File : UpahKerja.c
//Deskripsi : menghitung upah kerja berdasarkan jam kerja dan golongan lalu menampilkan hasil pada layar.
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1

#include <stdio.h>

int main()
{
    //Kamus
	int g,j,u;


	//Algoritma
	printf("Program Upah Kerja \n");
	printf("Jam Kerja per Minggu  : ");
	scanf("%d", &j);
	printf("Golongan Karyawan  : ");
	scanf("%d", &g);

	if (j <= 40) {
        if (g == 1) {
            u = j * 1000;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if  (g == 2) {
            u = j * 1500;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if (g == 3) {
            u = j * 2000;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if (g == 4) {
            u = j * 2500;
            printf(" Upah kerja sebesar : %d", u);
        }
        else {
            printf("Pilihan golongan tidak valid (Valid: 1,2,3,4)");
        }
	}

    else if (j > 40) {
        if (g == 1) {
            u = 40 * 1000 + (j - 40) * 1500;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if  (g == 2) {
            u = 40 * 1500 + (j - 40) * 2250;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if (g == 3) {
            u = 40 * 2000 + (j - 40) * 3000;
            printf(" Upah kerja sebesar : %d", u);
        }
        else if (g == 4) {
            u = 40 * 2500 + (j - 40) * 3750;
            printf(" Upah kerja sebesar : %d", u);
        }
        else {
            printf("Pilihan golongan tidak valid (Valid: 1,2,3,4)");
        }
    }

    else {
        printf("Tidak valid");
    }

	return 0;

}
