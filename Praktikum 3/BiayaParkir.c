//Nama File : BiayaParkir.c
//Deskripsi : menghitung biaya parkir yang harus dibayar sesuai dengan ketentuan yang berlaku lalu menampilkan pada layar.
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1


#include <stdio.h>

int main (){
	//Kamus
	int j,b;

	//Algoritma
	printf("Program Biaya Parkir \n");
	printf("Durasi lamanya parkir (jam) : ");
	scanf("%d", &j);

	if (j <= 2) {
	    b = 2000;
	    printf(" Biaya Parkir sebesar: %d", b);
	}
	else{
        b = 2000 + ((j-2) * 500);
        printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
