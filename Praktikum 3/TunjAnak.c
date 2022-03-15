//Nama File : TunjAnak.c
//Deskripsi : menghitung besar tunjangan anak berdasarkan jumlah anak dan gaji pokok, lalu menampilkan hasil pada layar.
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	float a,g,t;

	//Algoritma
	printf("Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%f", &a);
	printf("Gaji Pokok  : ");
	scanf("%f", &g);

	if ( a < 3) {
		t = a * (0.1 * g);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %.2f", t);
    }
	else {
		t = 3 * (0.1 *g);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %.2f", t);
	}
	return 0;
}
